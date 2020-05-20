// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: wifi/wifi.proto

#include "wifi/wifi.pb.h"
#include "wifi/wifi.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace mavsdk {
namespace rpc {
namespace wifi {

static const char* WifiService_method_names[] = {
  "/mavsdk.rpc.wifi.WifiService/GetAccessPointConfiguration",
  "/mavsdk.rpc.wifi.WifiService/SetAccessPointConfiguration",
};

std::unique_ptr< WifiService::Stub> WifiService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< WifiService::Stub> stub(new WifiService::Stub(channel));
  return stub;
}

WifiService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetAccessPointConfiguration_(WifiService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetAccessPointConfiguration_(WifiService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status WifiService::Stub::GetAccessPointConfiguration(::grpc::ClientContext* context, const ::mavsdk::rpc::wifi::GetAccessPointConfigurationRequest& request, ::mavsdk::rpc::wifi::GetAccessPointConfigurationResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetAccessPointConfiguration_, context, request, response);
}

void WifiService::Stub::experimental_async::GetAccessPointConfiguration(::grpc::ClientContext* context, const ::mavsdk::rpc::wifi::GetAccessPointConfigurationRequest* request, ::mavsdk::rpc::wifi::GetAccessPointConfigurationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetAccessPointConfiguration_, context, request, response, std::move(f));
}

void WifiService::Stub::experimental_async::GetAccessPointConfiguration(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mavsdk::rpc::wifi::GetAccessPointConfigurationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetAccessPointConfiguration_, context, request, response, std::move(f));
}

void WifiService::Stub::experimental_async::GetAccessPointConfiguration(::grpc::ClientContext* context, const ::mavsdk::rpc::wifi::GetAccessPointConfigurationRequest* request, ::mavsdk::rpc::wifi::GetAccessPointConfigurationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetAccessPointConfiguration_, context, request, response, reactor);
}

void WifiService::Stub::experimental_async::GetAccessPointConfiguration(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mavsdk::rpc::wifi::GetAccessPointConfigurationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetAccessPointConfiguration_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::wifi::GetAccessPointConfigurationResponse>* WifiService::Stub::AsyncGetAccessPointConfigurationRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::wifi::GetAccessPointConfigurationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::wifi::GetAccessPointConfigurationResponse>::Create(channel_.get(), cq, rpcmethod_GetAccessPointConfiguration_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::wifi::GetAccessPointConfigurationResponse>* WifiService::Stub::PrepareAsyncGetAccessPointConfigurationRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::wifi::GetAccessPointConfigurationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::wifi::GetAccessPointConfigurationResponse>::Create(channel_.get(), cq, rpcmethod_GetAccessPointConfiguration_, context, request, false);
}

::grpc::Status WifiService::Stub::SetAccessPointConfiguration(::grpc::ClientContext* context, const ::mavsdk::rpc::wifi::SetAccessPointConfigurationRequest& request, ::mavsdk::rpc::wifi::SetAccessPointConfigurationResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetAccessPointConfiguration_, context, request, response);
}

void WifiService::Stub::experimental_async::SetAccessPointConfiguration(::grpc::ClientContext* context, const ::mavsdk::rpc::wifi::SetAccessPointConfigurationRequest* request, ::mavsdk::rpc::wifi::SetAccessPointConfigurationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetAccessPointConfiguration_, context, request, response, std::move(f));
}

void WifiService::Stub::experimental_async::SetAccessPointConfiguration(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mavsdk::rpc::wifi::SetAccessPointConfigurationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetAccessPointConfiguration_, context, request, response, std::move(f));
}

void WifiService::Stub::experimental_async::SetAccessPointConfiguration(::grpc::ClientContext* context, const ::mavsdk::rpc::wifi::SetAccessPointConfigurationRequest* request, ::mavsdk::rpc::wifi::SetAccessPointConfigurationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SetAccessPointConfiguration_, context, request, response, reactor);
}

void WifiService::Stub::experimental_async::SetAccessPointConfiguration(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mavsdk::rpc::wifi::SetAccessPointConfigurationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SetAccessPointConfiguration_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::wifi::SetAccessPointConfigurationResponse>* WifiService::Stub::AsyncSetAccessPointConfigurationRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::wifi::SetAccessPointConfigurationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::wifi::SetAccessPointConfigurationResponse>::Create(channel_.get(), cq, rpcmethod_SetAccessPointConfiguration_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::wifi::SetAccessPointConfigurationResponse>* WifiService::Stub::PrepareAsyncSetAccessPointConfigurationRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::wifi::SetAccessPointConfigurationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::wifi::SetAccessPointConfigurationResponse>::Create(channel_.get(), cq, rpcmethod_SetAccessPointConfiguration_, context, request, false);
}

WifiService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WifiService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WifiService::Service, ::mavsdk::rpc::wifi::GetAccessPointConfigurationRequest, ::mavsdk::rpc::wifi::GetAccessPointConfigurationResponse>(
          std::mem_fn(&WifiService::Service::GetAccessPointConfiguration), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WifiService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< WifiService::Service, ::mavsdk::rpc::wifi::SetAccessPointConfigurationRequest, ::mavsdk::rpc::wifi::SetAccessPointConfigurationResponse>(
          std::mem_fn(&WifiService::Service::SetAccessPointConfiguration), this)));
}

WifiService::Service::~Service() {
}

::grpc::Status WifiService::Service::GetAccessPointConfiguration(::grpc::ServerContext* context, const ::mavsdk::rpc::wifi::GetAccessPointConfigurationRequest* request, ::mavsdk::rpc::wifi::GetAccessPointConfigurationResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status WifiService::Service::SetAccessPointConfiguration(::grpc::ServerContext* context, const ::mavsdk::rpc::wifi::SetAccessPointConfigurationRequest* request, ::mavsdk::rpc::wifi::SetAccessPointConfigurationResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace wifi

