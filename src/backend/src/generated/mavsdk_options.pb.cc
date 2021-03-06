// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mavsdk_options.proto

#include "mavsdk_options.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace mavsdk {
namespace options {
}  // namespace options
}  // namespace mavsdk
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_mavsdk_5foptions_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_mavsdk_5foptions_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mavsdk_5foptions_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mavsdk_5foptions_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_mavsdk_5foptions_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024mavsdk_options.proto\022\016mavsdk.options\032 "
  "google/protobuf/descriptor.proto**\n\tAsyn"
  "cType\022\t\n\005ASYNC\020\000\022\010\n\004SYNC\020\001\022\010\n\004BOTH\020\002:6\n\r"
  "default_value\022\035.google.protobuf.FieldOpt"
  "ions\030\320\206\003 \001(\t:0\n\007epsilon\022\035.google.protobu"
  "f.FieldOptions\030\321\206\003 \001(\001:O\n\nasync_type\022\036.g"
  "oogle.protobuf.MethodOptions\030\320\206\003 \001(\0162\031.m"
  "avsdk.options.AsyncType:3\n\tis_finite\022\036.g"
  "oogle.protobuf.MethodOptions\030\321\206\003 \001(\010B\020\n\016"
  "options.mavsdkb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mavsdk_5foptions_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_mavsdk_5foptions_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mavsdk_5foptions_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mavsdk_5foptions_2eproto = {
  false, false, descriptor_table_protodef_mavsdk_5foptions_2eproto, "mavsdk_options.proto", 382,
  &descriptor_table_mavsdk_5foptions_2eproto_once, descriptor_table_mavsdk_5foptions_2eproto_sccs, descriptor_table_mavsdk_5foptions_2eproto_deps, 0, 1,
  schemas, file_default_instances, TableStruct_mavsdk_5foptions_2eproto::offsets,
  file_level_metadata_mavsdk_5foptions_2eproto, 0, file_level_enum_descriptors_mavsdk_5foptions_2eproto, file_level_service_descriptors_mavsdk_5foptions_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_mavsdk_5foptions_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_mavsdk_5foptions_2eproto)), true);
namespace mavsdk {
namespace options {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* AsyncType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_mavsdk_5foptions_2eproto);
  return file_level_enum_descriptors_mavsdk_5foptions_2eproto[0];
}
bool AsyncType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const std::string default_value_default("");
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  default_value(kDefaultValueFieldNumber, default_value_default);
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< double >, 1, false >
  epsilon(kEpsilonFieldNumber, 0);
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::EnumTypeTraits< ::mavsdk::options::AsyncType, ::mavsdk::options::AsyncType_IsValid>, 14, false >
  async_type(kAsyncTypeFieldNumber, static_cast< ::mavsdk::options::AsyncType >(0));
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false >
  is_finite(kIsFiniteFieldNumber, false);

// @@protoc_insertion_point(namespace_scope)
}  // namespace options
}  // namespace mavsdk
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
