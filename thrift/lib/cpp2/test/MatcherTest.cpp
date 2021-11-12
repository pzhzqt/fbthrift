/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <optional>
#include <thrift/lib/cpp2/test/Matcher.h>
#include <thrift/lib/cpp2/test/gen-cpp2/Matcher_types.h>

#include <folly/portability/GTest.h>

// portability/GTest must be imported before any other gtest header
#include <gtest/gtest-spi.h>

using apache::thrift::test::Person;
using apache::thrift::test::ThriftField;
using testing::_;
using testing::A;
using testing::Eq;
using testing::Optional;

TEST(MatcherTest, ThriftField) {
  auto p = Person();
  p.name() = "Zaphod";
  EXPECT_THAT(p, ThriftField(&Person::name<>, Eq("Zaphod")));
  p.id() = 42;
  EXPECT_THAT(p, ThriftField(&Person::id<>, Eq(42)));
}

TEST(MatcherTest_ThriftMacher, FieldRef) {
  namespace field = apache::thrift::tag;
  int value = 42;

  auto p = Person();
  p.id() = value;
  EXPECT_THAT(p, ThriftField<field::id>(Eq(value)));
  EXPECT_NONFATAL_FAILURE(
      EXPECT_THAT(p, ThriftField<field::id>(Eq(value + 1))), "");
}

TEST(MatcherTest_ThriftMacher, OptionalRef) {
  namespace field = apache::thrift::tag;
  std::string value = "Zaphod";
  std::string wrong = "wrong";

  auto p = Person();
  EXPECT_THAT(p, ThriftField<field::name>(Eq(std::nullopt)));
  EXPECT_NONFATAL_FAILURE(
      EXPECT_THAT(p, ThriftField<field::name>(Optional(_))), "");
  // An unset optional_field_ref always compares false to the inner type
  EXPECT_NONFATAL_FAILURE(EXPECT_THAT(p, ThriftField<field::name>(wrong)), "");

  p.name() = value;
  EXPECT_THAT(p, ThriftField<field::name>(value));
  EXPECT_THAT(p, ThriftField<field::name>(Optional(Eq(value))));
  EXPECT_NONFATAL_FAILURE(
      EXPECT_THAT(p, ThriftField<field::name>(Eq(wrong))), "");
  EXPECT_NONFATAL_FAILURE(
      EXPECT_THAT(p, ThriftField<field::name>(Optional(Eq(wrong)))), "");
}
