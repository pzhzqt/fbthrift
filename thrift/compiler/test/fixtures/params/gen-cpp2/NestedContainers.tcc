/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/params/gen-cpp2/NestedContainers.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>>, ::std::map<::std::int32_t, ::std::vector<::std::int32_t>>*>> NestedContainers_mapList_pargs;
typedef apache::thrift::ThriftPresult<true> NestedContainers_mapList_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>>, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>*>> NestedContainers_mapSet_pargs;
typedef apache::thrift::ThriftPresult<true> NestedContainers_mapSet_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::list<::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::integral>>, ::std::vector<::std::map<::std::int32_t, ::std::int32_t>>*>> NestedContainers_listMap_pargs;
typedef apache::thrift::ThriftPresult<true> NestedContainers_listMap_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::list<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>>, ::std::vector<::std::set<::std::int32_t>>*>> NestedContainers_listSet_pargs;
typedef apache::thrift::ThriftPresult<true> NestedContainers_listSet_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::list<::apache::thrift::type_class::list<::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>>>>>, ::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>*>> NestedContainers_turtles_pargs;
typedef apache::thrift::ThriftPresult<true> NestedContainers_turtles_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void NestedContainersAsyncProcessor::setUpAndProcess_mapList(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &NestedContainersAsyncProcessor::executeRequest_mapList<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NestedContainersAsyncProcessor::executeRequest_mapList(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::NestedContainers_mapList_pargs args;
  auto uarg_foo = std::make_unique<::std::map<::std::int32_t, ::std::vector<::std::int32_t>>>();
  args.get<0>().value = uarg_foo.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "NestedContainers.mapList", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "mapList", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "mapList");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::requestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::concurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_mapList<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_mapList<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification.first, requestPileNotification.second
    , concurrencyControllerNotification.first, concurrencyControllerNotification.second
    );
  iface_->async_tm_mapList(std::move(callback), std::move(uarg_foo));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NestedContainersAsyncProcessor::process_mapList(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::NestedContainers_mapList_pargs args;
  auto uarg_foo = std::make_unique<::std::map<::std::int32_t, ::std::vector<::std::int32_t>>>();
  args.get<0>().value = uarg_foo.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "NestedContainers.mapList", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew, std::move(req), ctx, eb, "mapList");
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_mapList<ProtocolIn_,ProtocolOut_>, throw_wrapped_mapList<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  iface_->async_tm_mapList(std::move(callback), std::move(uarg_foo));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse NestedContainersAsyncProcessor::return_mapList(apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  ::cpp2::NestedContainers_mapList_presult result;
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void NestedContainersAsyncProcessor::throw_wrapped_mapList(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "mapList");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NestedContainersAsyncProcessor::setUpAndProcess_mapSet(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &NestedContainersAsyncProcessor::executeRequest_mapSet<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NestedContainersAsyncProcessor::executeRequest_mapSet(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::NestedContainers_mapSet_pargs args;
  auto uarg_foo = std::make_unique<::std::map<::std::int32_t, ::std::set<::std::int32_t>>>();
  args.get<0>().value = uarg_foo.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "NestedContainers.mapSet", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "mapSet", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "mapSet");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::requestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::concurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_mapSet<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_mapSet<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification.first, requestPileNotification.second
    , concurrencyControllerNotification.first, concurrencyControllerNotification.second
    );
  iface_->async_tm_mapSet(std::move(callback), std::move(uarg_foo));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NestedContainersAsyncProcessor::process_mapSet(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::NestedContainers_mapSet_pargs args;
  auto uarg_foo = std::make_unique<::std::map<::std::int32_t, ::std::set<::std::int32_t>>>();
  args.get<0>().value = uarg_foo.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "NestedContainers.mapSet", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew, std::move(req), ctx, eb, "mapSet");
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_mapSet<ProtocolIn_,ProtocolOut_>, throw_wrapped_mapSet<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  iface_->async_tm_mapSet(std::move(callback), std::move(uarg_foo));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse NestedContainersAsyncProcessor::return_mapSet(apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  ::cpp2::NestedContainers_mapSet_presult result;
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void NestedContainersAsyncProcessor::throw_wrapped_mapSet(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "mapSet");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NestedContainersAsyncProcessor::setUpAndProcess_listMap(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &NestedContainersAsyncProcessor::executeRequest_listMap<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NestedContainersAsyncProcessor::executeRequest_listMap(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::NestedContainers_listMap_pargs args;
  auto uarg_foo = std::make_unique<::std::vector<::std::map<::std::int32_t, ::std::int32_t>>>();
  args.get<0>().value = uarg_foo.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "NestedContainers.listMap", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "listMap", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "listMap");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::requestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::concurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_listMap<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_listMap<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification.first, requestPileNotification.second
    , concurrencyControllerNotification.first, concurrencyControllerNotification.second
    );
  iface_->async_tm_listMap(std::move(callback), std::move(uarg_foo));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NestedContainersAsyncProcessor::process_listMap(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::NestedContainers_listMap_pargs args;
  auto uarg_foo = std::make_unique<::std::vector<::std::map<::std::int32_t, ::std::int32_t>>>();
  args.get<0>().value = uarg_foo.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "NestedContainers.listMap", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew, std::move(req), ctx, eb, "listMap");
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_listMap<ProtocolIn_,ProtocolOut_>, throw_wrapped_listMap<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  iface_->async_tm_listMap(std::move(callback), std::move(uarg_foo));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse NestedContainersAsyncProcessor::return_listMap(apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  ::cpp2::NestedContainers_listMap_presult result;
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void NestedContainersAsyncProcessor::throw_wrapped_listMap(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "listMap");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NestedContainersAsyncProcessor::setUpAndProcess_listSet(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &NestedContainersAsyncProcessor::executeRequest_listSet<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NestedContainersAsyncProcessor::executeRequest_listSet(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::NestedContainers_listSet_pargs args;
  auto uarg_foo = std::make_unique<::std::vector<::std::set<::std::int32_t>>>();
  args.get<0>().value = uarg_foo.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "NestedContainers.listSet", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "listSet", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "listSet");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::requestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::concurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_listSet<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_listSet<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification.first, requestPileNotification.second
    , concurrencyControllerNotification.first, concurrencyControllerNotification.second
    );
  iface_->async_tm_listSet(std::move(callback), std::move(uarg_foo));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NestedContainersAsyncProcessor::process_listSet(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::NestedContainers_listSet_pargs args;
  auto uarg_foo = std::make_unique<::std::vector<::std::set<::std::int32_t>>>();
  args.get<0>().value = uarg_foo.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "NestedContainers.listSet", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew, std::move(req), ctx, eb, "listSet");
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_listSet<ProtocolIn_,ProtocolOut_>, throw_wrapped_listSet<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  iface_->async_tm_listSet(std::move(callback), std::move(uarg_foo));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse NestedContainersAsyncProcessor::return_listSet(apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  ::cpp2::NestedContainers_listSet_presult result;
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void NestedContainersAsyncProcessor::throw_wrapped_listSet(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "listSet");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NestedContainersAsyncProcessor::setUpAndProcess_turtles(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &NestedContainersAsyncProcessor::executeRequest_turtles<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NestedContainersAsyncProcessor::executeRequest_turtles(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::NestedContainers_turtles_pargs args;
  auto uarg_foo = std::make_unique<::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>>();
  args.get<0>().value = uarg_foo.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "NestedContainers.turtles", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "turtles", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "turtles");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::requestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::concurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_turtles<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_turtles<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification.first, requestPileNotification.second
    , concurrencyControllerNotification.first, concurrencyControllerNotification.second
    );
  iface_->async_tm_turtles(std::move(callback), std::move(uarg_foo));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NestedContainersAsyncProcessor::process_turtles(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::NestedContainers_turtles_pargs args;
  auto uarg_foo = std::make_unique<::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>>();
  args.get<0>().value = uarg_foo.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "NestedContainers.turtles", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew, std::move(req), ctx, eb, "turtles");
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_turtles<ProtocolIn_,ProtocolOut_>, throw_wrapped_turtles<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  iface_->async_tm_turtles(std::move(callback), std::move(uarg_foo));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse NestedContainersAsyncProcessor::return_turtles(apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  ::cpp2::NestedContainers_turtles_presult result;
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void NestedContainersAsyncProcessor::throw_wrapped_turtles(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "turtles");
    return;
  }
}


} // cpp2
