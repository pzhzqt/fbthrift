/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/annotation/gen-py3/hack/metadata.h"

namespace cpp2 {
::apache::thrift::metadata::ThriftMetadata hack_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::StructMetadata<FieldWrapper>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<SkipCodegen>::gen(metadata);
  return metadata;
}
} // namespace cpp2