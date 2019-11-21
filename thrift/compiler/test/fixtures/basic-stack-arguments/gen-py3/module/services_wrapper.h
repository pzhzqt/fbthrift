/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/MyService.h>
#include <src/gen-cpp2/MyServiceFast.h>
#include <folly/python/futures.h>
#include <Python.h>

#include <memory>

namespace cpp2 {

class MyServiceWrapper : virtual public MyServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit MyServiceWrapper(PyObject *if_object, folly::Executor *exc);
    folly::Future<bool> future_hasDataById(
        int64_t id
    ) override;
    folly::Future<std::string> future_getDataById(
        int64_t id
    ) override;
    folly::Future<folly::Unit> future_putDataById(
        int64_t id,
        const std::string& data
    ) override;
    folly::Future<folly::Unit> future_lobDataById(
        int64_t id,
        const std::string& data
    ) override;
};

std::shared_ptr<apache::thrift::ServerInterface> MyServiceInterface(PyObject *if_object, folly::Executor *exc);


class MyServiceFastWrapper : virtual public MyServiceFastSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit MyServiceFastWrapper(PyObject *if_object, folly::Executor *exc);
    folly::Future<bool> future_hasDataById(
        int64_t id
    ) override;
    folly::Future<std::string> future_getDataById(
        int64_t id
    ) override;
    folly::Future<folly::Unit> future_putDataById(
        int64_t id,
        const std::string& data
    ) override;
    folly::Future<folly::Unit> future_lobDataById(
        int64_t id,
        const std::string& data
    ) override;
};

std::shared_ptr<apache::thrift::ServerInterface> MyServiceFastInterface(PyObject *if_object, folly::Executor *exc);
} // namespace cpp2
