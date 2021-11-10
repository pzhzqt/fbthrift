# Copyright (c) Facebook, Inc. and its affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# cython: c_string_type=unicode, c_string_encoding=utf8

import os

cimport folly.iobuf

from cython.operator cimport dereference as deref
from folly.iobuf cimport IOBuf
from libc.stdint cimport uint32_t
from libcpp.memory cimport make_unique
from libcpp.string cimport string
from libcpp.utility cimport move as cmove
from thrift.py3lite.client.client_wrapper import ClientWrapper
from thrift.py3lite.client.request_channel cimport (
    sync_createThriftChannelTCP,
    sync_createThriftChannelUnix,
    ClientType as cClientType,
    RequestChannel,
)
from thrift.py3lite.client.request_channel import ClientType
from thrift.py3lite.exceptions cimport create_py_exception
from thrift.py3lite.exceptions import ApplicationError, ApplicationErrorType
from thrift.py3lite.serializer cimport Protocol as cProtocol
from thrift.py3lite.serializer import serialize_iobuf, deserialize


cdef class SyncClient:
    def __init__(self, RequestChannel channel):
        self._omni_client = make_unique[cOmniClient](cmove(channel._cpp_obj))

    def __enter__(self):
        return self

    def __exit__(self, exec_type, exc_value, traceback):
        # TODO: close channel
        pass

    def _send_request(
        self,
        string service_name,
        string function_name,
        args,
        response_cls,
    ):
        protocol = deref(self._omni_client).getChannelProtocolId()
        cdef IOBuf args_iobuf = serialize_iobuf(args, protocol=protocol)
        if response_cls is None:
            deref(self._omni_client).oneway_send(
                service_name,
                function_name,
                args_iobuf.c_clone(),
            )
        else:
            resp = deref(self._omni_client).sync_send(
                service_name,
                function_name,
                args_iobuf.c_clone(),
            )
            if resp.buf.hasValue():
                response_iobuf = folly.iobuf.from_unique_ptr(cmove(resp.buf.value()))
                return deserialize(response_cls, response_iobuf, protocol=protocol)
            elif resp.buf.hasError():
                raise create_py_exception(resp.buf.error())
            else:
                raise ApplicationError(
                    ApplicationErrorType.MISSING_RESULT,
                    "Received no result nor error",
                )


def get_client(
    clientKlass,
    *,
    host=None,
    port=None,
    path=None,
    double timeout=1,
    cClientType client_type = ClientType.THRIFT_HEADER_CLIENT_TYPE,
    cProtocol protocol = cProtocol.COMPACT,
):
    if not issubclass(clientKlass, ClientWrapper):
        raise TypeError(f"{clientKlass} is not a py3lite client class")

    endpoint = b''
    if client_type == ClientType.THRIFT_HTTP_CLIENT_TYPE:
        if host is None or port is None:
            raise ValueError("Must set host and port when using ClientType.THRIFT_HTTP_CLIENT_TYPE")
        if path is None:
            raise ValueError("use path='/endpoint' when using ClientType.THRIFT_HTTP_CLIENT_TYPE")
        endpoint = os.fsencode(path)
        path = None

    cdef uint32_t _timeout_ms = int(timeout * 1000)

    if host is not None and port is not None:
        if path is not None:
            raise ValueError("Can not set path and host/port at same time")
        channel = RequestChannel.create(sync_createThriftChannelTCP(
            host, port, _timeout_ms, client_type, protocol, endpoint
        ))
    elif path is not None:
        channel = RequestChannel.create(sync_createThriftChannelUnix(
            path, _timeout_ms, client_type, protocol
        ))
    else:
        raise ValueError("Must set path or host/port")
    return clientKlass.Sync(channel)
