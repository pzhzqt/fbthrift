/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::test::fixtures::enumstrict::EmptyEnum>::size;
folly::Range<::test::fixtures::enumstrict::EmptyEnum const*> const TEnumTraits<::test::fixtures::enumstrict::EmptyEnum>::values = {};
folly::Range<folly::StringPiece const*> const TEnumTraits<::test::fixtures::enumstrict::EmptyEnum>::names = {};

char const* TEnumTraits<::test::fixtures::enumstrict::EmptyEnum>::findName(type value) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value);
}

bool TEnumTraits<::test::fixtures::enumstrict::EmptyEnum>::findValue(char const* name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift

namespace test { namespace fixtures { namespace enumstrict {
#ifndef ANDROID
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _EmptyEnum_EnumMapFactory::ValuesToNamesMapType _EmptyEnum_VALUES_TO_NAMES = _EmptyEnum_EnumMapFactory::makeValuesToNamesMap();
const _EmptyEnum_EnumMapFactory::NamesToValuesMapType _EmptyEnum_NAMES_TO_VALUES = _EmptyEnum_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING
#endif
}}} // test::fixtures::enumstrict

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::test::fixtures::enumstrict::MyEnum>::size;
folly::Range<::test::fixtures::enumstrict::MyEnum const*> const TEnumTraits<::test::fixtures::enumstrict::MyEnum>::values = folly::range(TEnumDataStorage<::test::fixtures::enumstrict::MyEnum>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::test::fixtures::enumstrict::MyEnum>::names = folly::range(TEnumDataStorage<::test::fixtures::enumstrict::MyEnum>::names);

char const* TEnumTraits<::test::fixtures::enumstrict::MyEnum>::findName(type value) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value);
}

bool TEnumTraits<::test::fixtures::enumstrict::MyEnum>::findValue(char const* name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift

namespace test { namespace fixtures { namespace enumstrict {
#ifndef ANDROID
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _MyEnum_EnumMapFactory::ValuesToNamesMapType _MyEnum_VALUES_TO_NAMES = _MyEnum_EnumMapFactory::makeValuesToNamesMap();
const _MyEnum_EnumMapFactory::NamesToValuesMapType _MyEnum_NAMES_TO_VALUES = _MyEnum_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING
#endif
}}} // test::fixtures::enumstrict

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::test::fixtures::enumstrict::MyBigEnum>::size;
folly::Range<::test::fixtures::enumstrict::MyBigEnum const*> const TEnumTraits<::test::fixtures::enumstrict::MyBigEnum>::values = folly::range(TEnumDataStorage<::test::fixtures::enumstrict::MyBigEnum>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::test::fixtures::enumstrict::MyBigEnum>::names = folly::range(TEnumDataStorage<::test::fixtures::enumstrict::MyBigEnum>::names);

char const* TEnumTraits<::test::fixtures::enumstrict::MyBigEnum>::findName(type value) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value);
}

bool TEnumTraits<::test::fixtures::enumstrict::MyBigEnum>::findValue(char const* name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift

namespace test { namespace fixtures { namespace enumstrict {
#ifndef ANDROID
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _MyBigEnum_EnumMapFactory::ValuesToNamesMapType _MyBigEnum_VALUES_TO_NAMES = _MyBigEnum_EnumMapFactory::makeValuesToNamesMap();
const _MyBigEnum_EnumMapFactory::NamesToValuesMapType _MyBigEnum_NAMES_TO_VALUES = _MyBigEnum_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING
#endif
}}} // test::fixtures::enumstrict

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::test::fixtures::enumstrict::MyStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::test::fixtures::enumstrict::MyStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace test { namespace fixtures { namespace enumstrict {


MyStruct::MyStruct(apache::thrift::FragileConstructor, ::test::fixtures::enumstrict::MyEnum myEnum__arg, ::test::fixtures::enumstrict::MyBigEnum myBigEnum__arg) :
    __fbthrift_field_myEnum(std::move(myEnum__arg)),
    __fbthrift_field_myBigEnum(std::move(myBigEnum__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
}


void MyStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_myEnum = ::test::fixtures::enumstrict::MyEnum();
  this->__fbthrift_field_myBigEnum = ::test::fixtures::enumstrict::MyBigEnum();
  __isset = {};
}

bool MyStruct::__fbthrift_is_empty() const {
  return false;
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.myEnum_ref() == rhs.myEnum_ref())) {
    return false;
  }
  if (!(lhs.myBigEnum_ref() == rhs.myBigEnum_ref())) {
    return false;
  }
  return true;
}

bool MyStruct::operator<(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.myEnum_ref() == rhs.myEnum_ref())) {
    return lhs.myEnum_ref() < rhs.myEnum_ref();
  }
  if (!(lhs.myBigEnum_ref() == rhs.myBigEnum_ref())) {
    return lhs.myBigEnum_ref() < rhs.myBigEnum_ref();
  }
  return false;
}


void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  swap(a.myEnum_ref().value(), b.myEnum_ref().value());
  swap(a.myBigEnum_ref().value(), b.myBigEnum_ref().value());
  swap(a.__isset, b.__isset);
}

template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



}}} // test::fixtures::enumstrict

namespace test { namespace fixtures { namespace enumstrict { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}}}} // test::fixtures::enumstrict
