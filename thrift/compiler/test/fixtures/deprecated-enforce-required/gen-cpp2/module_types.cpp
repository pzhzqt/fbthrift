/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/deprecated-enforce-required/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/deprecated-enforce-required/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/deprecated-enforce-required/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Foo>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "bar") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Foo::Foo(apache::thrift::FragileConstructor, int32_t bar__arg) :
    bar(std::move(bar__arg)) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void Foo::__clear() {
  // clear all fields
  bar = 0;
}

bool Foo::operator==(const Foo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.bar == rhs.bar)) {
    return false;
  }
  return true;
}

bool Foo::operator<(const Foo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.bar == rhs.bar)) {
    return lhs.bar < rhs.bar;
  }
  return false;
}


void swap(Foo& a, Foo& b) {
  using ::std::swap;
  swap(a.bar, b.bar);
}

template void Foo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Foo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2

namespace cpp2 {
//  if this struct is generated with extern template instances for simple-json
//  protocol, enforce that all its dependencies are too
static_assert(
    ::apache::thrift::detail::st::gen_check<
        ::apache::thrift::detail::st::gen_check_get_json,
        Foo,
        ::folly::tag_t<void
          , ::apache::thrift::type_class::integral
          >,
        ::folly::tag_t<void
          , int32_t
          >>,
    "inconsistent use of json option");

//  if this struct is generated with extern template instances for nimble
//  protocol, enforce that all its dependencies are too
static_assert(
    ::apache::thrift::detail::st::gen_check<
        ::apache::thrift::detail::st::gen_check_get_nimble,
        Foo,
        ::folly::tag_t<void
          , ::apache::thrift::type_class::integral
          >,
        ::folly::tag_t<void
          , int32_t
          >>,
    "inconsistent use of nimble option");

} // cpp2
