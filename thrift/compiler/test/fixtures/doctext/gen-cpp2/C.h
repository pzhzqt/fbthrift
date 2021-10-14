/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/CAsyncClient.h"
#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_types.h"
#include <thrift/lib/cpp2/async/ServerStream.h>

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class CSvAsyncIf {
 public:
  virtual ~CSvAsyncIf() {}
  virtual void async_tm_f(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual folly::Future<folly::Unit> future_f() = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_f() = 0;
  virtual void async_tm_numbers(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<::cpp2::number>>> callback) = 0;
  virtual folly::Future<::apache::thrift::ServerStream<::cpp2::number>> future_numbers() = 0;
  virtual folly::SemiFuture<::apache::thrift::ServerStream<::cpp2::number>> semifuture_numbers() = 0;
  virtual void async_tm_thing(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback, ::std::int32_t p_a, std::unique_ptr<::std::string> p_b, std::unique_ptr<::std::set<::std::int32_t>> p_c) = 0;
  virtual folly::Future<std::unique_ptr<::std::string>> future_thing(::std::int32_t p_a, std::unique_ptr<::std::string> p_b, std::unique_ptr<::std::set<::std::int32_t>> p_c) = 0;
  virtual folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_thing(::std::int32_t p_a, std::unique_ptr<::std::string> p_b, std::unique_ptr<::std::set<::std::int32_t>> p_c) = 0;
};

class CAsyncProcessor;

class CSvIf : public CSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "C"; }

  typedef CAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;


  virtual void f();
  folly::Future<folly::Unit> future_f() override;
  folly::SemiFuture<folly::Unit> semifuture_f() override;
  void async_tm_f(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
  virtual ::apache::thrift::ServerStream<::cpp2::number> numbers();
  folly::Future<::apache::thrift::ServerStream<::cpp2::number>> future_numbers() override;
  folly::SemiFuture<::apache::thrift::ServerStream<::cpp2::number>> semifuture_numbers() override;
  void async_tm_numbers(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<::cpp2::number>>> callback) override;
  virtual void thing(::std::string& /*_return*/, ::std::int32_t /*a*/, std::unique_ptr<::std::string> /*b*/, std::unique_ptr<::std::set<::std::int32_t>> /*c*/);
  folly::Future<std::unique_ptr<::std::string>> future_thing(::std::int32_t p_a, std::unique_ptr<::std::string> p_b, std::unique_ptr<::std::set<::std::int32_t>> p_c) override;
  folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_thing(::std::int32_t p_a, std::unique_ptr<::std::string> p_b, std::unique_ptr<::std::set<::std::int32_t>> p_c) override;
  void async_tm_thing(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback, ::std::int32_t p_a, std::unique_ptr<::std::string> p_b, std::unique_ptr<::std::set<::std::int32_t>> p_c) override;
 private:
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_f{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_numbers{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_thing{apache::thrift::detail::si::InvocationType::AsyncTm};
};

class CSvNull : public CSvIf {
 public:
  void f() override;
  void thing(::std::string& /*_return*/, ::std::int32_t /*a*/, std::unique_ptr<::std::string> /*b*/, std::unique_ptr<::std::set<::std::int32_t>> /*c*/) override;
};

class CAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  CSvIf* iface_;
 public:
  // This is implemented in case the corresponding AsyncProcessorFactory did not implement createMethodMetadata.
  // This can happen if the service is using a custom AsyncProcessorFactory but re-using the same AsyncProcessor.
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  // By default, this overload will be called for generated services
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<CAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  static const CAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const CAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_f(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_f(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_f(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_f(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_numbers(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_numbers(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::ResponseAndServerStreamFactory return_numbers(apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, ::apache::thrift::ServerStream<::cpp2::number>&& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_numbers(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_thing(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_thing(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_thing(apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_thing(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  CAsyncProcessor(CSvIf* iface) :
      iface_(iface) {}
  ~CAsyncProcessor() override {}
};

} // cpp2
