#include <catch.hpp>

#include <SI/detail/unit.h>

using namespace SI::detail;

TEST_CASE("GIVEN a variable of type unit_t WHEN passed to is_unit THEN result "
          "is true") {
  constexpr unit_t<'X', 1, int64_t> v1{0};
  STATIC_REQUIRE(is_unit_t<decltype(v1)>::value == true);
}

TEMPLATE_TEST_CASE("GIVEN a variable of simple type WHEN passed to is?unit "
                   "THEN result false",
                   "[is unit test]", int, char, float, double) {

  constexpr TestType v1{0};
  STATIC_REQUIRE(is_unit_t<decltype(v1)>::value == false);
}

TEST_CASE("GIVEN derived type derived from unit_t WHEN catsed AND passed to "
          "is_unit  THEN return value is true ") {

  struct to_test : unit_t<'X', 1, int64_t> {};
  constexpr to_test v1{0};

  STATIC_REQUIRE(is_unit_t<decltype(static_cast<const unit_t<'X', 1, int64_t>>(
                     v1))>::value == true);
}

TEST_CASE("GIVEN two units of the same dimension type, ratio and value WHEN "
          "cast from one to "
          "another THEN units stay the same") {
  constexpr unit_t<'X', 1, int64_t> v1{0};

  constexpr auto result = unit_cast<decltype(v1)>(v1);
  STATIC_REQUIRE(result == v1);
  STATIC_REQUIRE(std::is_same<decltype(result), decltype(v1)>::value);
}

TEST_CASE("GIVEN a value AND ratio is small AND type is integral WHEN "
          "unit_cast to unit with ratio that exceeds value THEN value is 0") {
  constexpr unit_t<'X', 1, int64_t, std::ratio<1>> v1{1};
  constexpr auto result = unit_cast<unit_t<'X', 1, int64_t, std::kilo>>(v1);

  STATIC_REQUIRE(result.raw_value() == 0);
}
TEST_CASE(
    "GIVEN a value AND ratio is small AND type is double WHEN "
    "unit_cast to unit with ratio that exceeds value THEN value is added") {
  constexpr unit_t<'X', 1, long double, std::ratio<1>> v1{1};
  constexpr auto result = unit_cast<unit_t<'X', 1, long double, std::kilo>>(v1);
  constexpr unit_t<'X', 1, long double, std::kilo> expected(0.001);

  STATIC_REQUIRE(result == expected);
}

TEMPLATE_TEST_CASE(
    "GIVEN two units of same dimension type AND different ratio WHEN "
    "cast from one to another THEN value is according to the ratio",
    "[unit_t][unit_cast]", int64_t, long double) {
  constexpr unit_t<'X', 1, TestType, std::milli> v1{1000};
  constexpr auto result =
      unit_cast<unit_t<'X', 1, TestType, std::ratio<1>>>(v1);

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const unit_t<'X', 1, TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(result.raw_value() == 1);
}

TEMPLATE_TEST_CASE(
    "GIVEN two units of the same symbol AND with same type AND with different "
    "ratios WHEN executed with common type THEN ratio of resulting type is "
    "greatest common denominator of the two input ratios",
    "[unit_t][common_type]", int64_t, long double) {

  constexpr unit_t<'X', 1, TestType, std::ratio<1>> v1{1};
  constexpr unit_t<'X', 1, TestType, std::milli> v2{1};

  using result_type =
      typename unit_with_common_ratio<decltype(v1), decltype(v2)>::type;

  STATIC_REQUIRE(
      std::is_same<result_type, unit_t<'X', 1, TestType, std::milli>>::value);
}