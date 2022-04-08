/**
 * Autogenerated by Thrift for src/includes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>

#include <thrift/lib/cpp2/type/Tag.h>

#include "folly/sorted_vector_types.h"

namespace apache {
namespace thrift {
namespace tag {
struct FieldA;
struct FieldA;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_FieldA
#define APACHE_THRIFT_ACCESSOR_FieldA
APACHE_THRIFT_DEFINE_ACCESSOR(FieldA);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_FieldA
#define APACHE_THRIFT_ACCESSOR_FieldA
APACHE_THRIFT_DEFINE_ACCESSOR(FieldA);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace a { namespace different { namespace ns {

enum class AnEnum {
  FIELDA = 2,
  FIELDB = 4,
};




}}} // a::different::ns

namespace std {
template<> struct hash<::a::different::ns::AnEnum> :
  ::apache::thrift::detail::enum_hash<::a::different::ns::AnEnum> {};
} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::a::different::ns::AnEnum>;

template <> struct TEnumTraits<::a::different::ns::AnEnum> {
  using type = ::a::different::ns::AnEnum;

  static constexpr std::size_t const size = 2;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value) noexcept;
  static bool findValue(char const* name, type* out) noexcept;

  static constexpr type min() { return type::FIELDA; }
  static constexpr type max() { return type::FIELDB; }
};


}} // apache::thrift

namespace a { namespace different { namespace ns {

using _AnEnum_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<AnEnum>;
#ifndef ANDROID
[[deprecated("use apache::thrift::util::enumNameSafe, apache::thrift::util::enumName, or apache::thrift::TEnumTraits")]]
extern const _AnEnum_EnumMapFactory::ValuesToNamesMapType _AnEnum_VALUES_TO_NAMES;
[[deprecated("use apache::thrift::TEnumTraits")]]
extern const _AnEnum_EnumMapFactory::NamesToValuesMapType _AnEnum_NAMES_TO_VALUES;
#endif
}}} // a::different::ns

// END declare_enums
// BEGIN forward_declare
namespace a { namespace different { namespace ns {
class AStruct;
class AStructB;
}}} // a::different::ns
// END forward_declare
// BEGIN typedefs
namespace a { namespace different { namespace ns {
typedef ::std::int64_t IncludedInt64;

}}} // a::different::ns
// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace a { namespace different { namespace ns {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
}}} // a::different::ns
namespace a { namespace different { namespace ns {
class AStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = true;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = AStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  AStruct() :
      __fbthrift_field_FieldA() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  AStruct(apache::thrift::FragileConstructor, ::std::int32_t FieldA__arg);

  AStruct(AStruct&&) = default;

  AStruct(const AStruct&) = default;


  AStruct& operator=(AStruct&&) = default;

  AStruct& operator=(const AStruct&) = default;
 private:
  ::std::int32_t __fbthrift_field_FieldA;
 private:
  apache::thrift::detail::isset_bitset<1, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const AStruct&) const;
  bool operator<(const AStruct&) const;

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> FieldA_ref() const& {
    return {this->__fbthrift_field_FieldA, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> FieldA_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_FieldA), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> FieldA_ref() & {
    return {this->__fbthrift_field_FieldA, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> FieldA_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_FieldA), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> FieldA() const& {
    return {this->__fbthrift_field_FieldA, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> FieldA() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_FieldA), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> FieldA() & {
    return {this->__fbthrift_field_FieldA, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> FieldA() && {
    return {static_cast<T&&>(this->__fbthrift_field_FieldA), __isset.at(0), __isset.bit(0)};
  }

  ::std::int32_t get_FieldA() const {
    return __fbthrift_field_FieldA;
  }

  [[deprecated("Use `FOO.FieldA_ref() = BAR;` instead of `FOO.set_FieldA(BAR);`")]]
  ::std::int32_t& set_FieldA(::std::int32_t FieldA_) {
    FieldA_ref() = FieldA_;
    return __fbthrift_field_FieldA;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<AStruct>;
  friend void swap(AStruct& a, AStruct& b);
};

template <class Protocol_>
unsigned long AStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // a::different::ns
namespace a { namespace different { namespace ns {
class AStructB final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = true;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = AStructB;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  AStructB() :
      FieldA(std::make_shared<::a::different::ns::AStruct>()) {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  AStructB(apache::thrift::FragileConstructor, ::std::shared_ptr<const ::a::different::ns::AStruct> FieldA__arg);

  AStructB(AStructB&&) noexcept;

  AStructB(const AStructB& src);


  AStructB& operator=(AStructB&&) noexcept;
  AStructB& operator=(const AStructB& src);
 public:
  ::std::shared_ptr<const ::a::different::ns::AStruct> FieldA;

 public:

  bool operator==(const AStructB&) const;
  bool operator<(const AStructB&) const;
  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE T& FieldA_ref() & { return FieldA; }

  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE const T& FieldA_ref() const& { return FieldA; }

  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE T&& FieldA_ref() && { return static_cast<T&&>(FieldA); }

  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE const T&& FieldA_ref() const&& { return static_cast<const T&&>(FieldA); }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<AStructB>;
  friend void swap(AStructB& a, AStructB& b);
};

template <class Protocol_>
unsigned long AStructB::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // a::different::ns
