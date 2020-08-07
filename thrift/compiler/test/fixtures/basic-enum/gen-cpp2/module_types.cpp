/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::test::fixtures::enumstrict::EmptyEnum>::size;
folly::Range<::test::fixtures::enumstrict::EmptyEnum const*> const TEnumTraits<::test::fixtures::enumstrict::EmptyEnum>::values = {};
folly::Range<folly::StringPiece const*> const TEnumTraits<::test::fixtures::enumstrict::EmptyEnum>::names = {};

char const* TEnumTraits<::test::fixtures::enumstrict::EmptyEnum>::findName(type value) {
  using factory = ::test::fixtures::enumstrict::_EmptyEnum_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::test::fixtures::enumstrict::EmptyEnum>::findValue(char const* name, type* out) {
  using factory = ::test::fixtures::enumstrict::_EmptyEnum_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace test { namespace fixtures { namespace enumstrict {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _EmptyEnum_EnumMapFactory::ValuesToNamesMapType _EmptyEnum_VALUES_TO_NAMES = _EmptyEnum_EnumMapFactory::makeValuesToNamesMap();
const _EmptyEnum_EnumMapFactory::NamesToValuesMapType _EmptyEnum_NAMES_TO_VALUES = _EmptyEnum_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

}}} // test::fixtures::enumstrict

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::test::fixtures::enumstrict::MyEnum>::size;
folly::Range<::test::fixtures::enumstrict::MyEnum const*> const TEnumTraits<::test::fixtures::enumstrict::MyEnum>::values = folly::range(TEnumDataStorage<::test::fixtures::enumstrict::MyEnum>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::test::fixtures::enumstrict::MyEnum>::names = folly::range(TEnumDataStorage<::test::fixtures::enumstrict::MyEnum>::names);

char const* TEnumTraits<::test::fixtures::enumstrict::MyEnum>::findName(type value) {
  using factory = ::test::fixtures::enumstrict::_MyEnum_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::test::fixtures::enumstrict::MyEnum>::findValue(char const* name, type* out) {
  using factory = ::test::fixtures::enumstrict::_MyEnum_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace test { namespace fixtures { namespace enumstrict {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _MyEnum_EnumMapFactory::ValuesToNamesMapType _MyEnum_VALUES_TO_NAMES = _MyEnum_EnumMapFactory::makeValuesToNamesMap();
const _MyEnum_EnumMapFactory::NamesToValuesMapType _MyEnum_NAMES_TO_VALUES = _MyEnum_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

}}} // test::fixtures::enumstrict

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::test::fixtures::enumstrict::MyBigEnum>::size;
folly::Range<::test::fixtures::enumstrict::MyBigEnum const*> const TEnumTraits<::test::fixtures::enumstrict::MyBigEnum>::values = folly::range(TEnumDataStorage<::test::fixtures::enumstrict::MyBigEnum>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::test::fixtures::enumstrict::MyBigEnum>::names = folly::range(TEnumDataStorage<::test::fixtures::enumstrict::MyBigEnum>::names);

char const* TEnumTraits<::test::fixtures::enumstrict::MyBigEnum>::findName(type value) {
  using factory = ::test::fixtures::enumstrict::_MyBigEnum_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::test::fixtures::enumstrict::MyBigEnum>::findValue(char const* name, type* out) {
  using factory = ::test::fixtures::enumstrict::_MyBigEnum_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace test { namespace fixtures { namespace enumstrict {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _MyBigEnum_EnumMapFactory::ValuesToNamesMapType _MyBigEnum_VALUES_TO_NAMES = _MyBigEnum_EnumMapFactory::makeValuesToNamesMap();
const _MyBigEnum_EnumMapFactory::NamesToValuesMapType _MyBigEnum_NAMES_TO_VALUES = _MyBigEnum_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

}}} // test::fixtures::enumstrict

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::test::fixtures::enumstrict::MyStruct>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "myEnum") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "myBigEnum") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_I32;
  }
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace test { namespace fixtures { namespace enumstrict {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyStruct::MyStruct(apache::thrift::FragileConstructor,  ::test::fixtures::enumstrict::MyEnum myEnum__arg,  ::test::fixtures::enumstrict::MyBigEnum myBigEnum__arg) :
    myEnum(std::move(myEnum__arg)),
    myBigEnum(std::move(myBigEnum__arg)) {
  __isset.myEnum = true;
  __isset.myBigEnum = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void MyStruct::__clear() {
  // clear all fields
  myEnum = static_cast< ::test::fixtures::enumstrict::MyEnum>(0);
  myBigEnum =  ::test::fixtures::enumstrict::MyBigEnum::ONE;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.myEnum == rhs.myEnum)) {
    return false;
  }
  if (!(lhs.myBigEnum == rhs.myBigEnum)) {
    return false;
  }
  return true;
}

bool MyStruct::operator<(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.myEnum == rhs.myEnum)) {
    return lhs.myEnum < rhs.myEnum;
  }
  if (!(lhs.myBigEnum == rhs.myBigEnum)) {
    return lhs.myBigEnum < rhs.myBigEnum;
  }
  return false;
}


void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  swap(a.myEnum, b.myEnum);
  swap(a.myBigEnum, b.myBigEnum);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
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

namespace test { namespace fixtures { namespace enumstrict {
//  if this struct is generated with extern template instances for simple-json
//  protocol, enforce that all its dependencies are too
static_assert(
    ::apache::thrift::detail::st::gen_check<
        ::apache::thrift::detail::st::gen_check_get_json,
        MyStruct,
        ::folly::tag_t<void
          , ::apache::thrift::type_class::enumeration
          , ::apache::thrift::type_class::enumeration
          >,
        ::folly::tag_t<void
          ,  ::test::fixtures::enumstrict::MyEnum
          ,  ::test::fixtures::enumstrict::MyBigEnum
          >>,
    "inconsistent use of json option");

//  if this struct is generated with extern template instances for nimble
//  protocol, enforce that all its dependencies are too
static_assert(
    ::apache::thrift::detail::st::gen_check<
        ::apache::thrift::detail::st::gen_check_get_nimble,
        MyStruct,
        ::folly::tag_t<void
          , ::apache::thrift::type_class::enumeration
          , ::apache::thrift::type_class::enumeration
          >,
        ::folly::tag_t<void
          ,  ::test::fixtures::enumstrict::MyEnum
          ,  ::test::fixtures::enumstrict::MyBigEnum
          >>,
    "inconsistent use of nimble option");

}}} // test::fixtures::enumstrict
