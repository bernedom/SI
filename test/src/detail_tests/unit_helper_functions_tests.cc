#include <catch.hpp>

#include <SI/detail/unit.h>

using namespace SI::detail;

namespace {
template <typename _Type, typename _Ratio>
using expected_unit = SI::detail::unit_t<'Z', 1, _Type, _Ratio>;
}

TEMPLATE_TEST_CASE(
    "GIVEN to values of different type AND ratio is the same "
    "WHEN divided THEN resulting unit is as specified AND ratio is the same",
    "[unit_t][helpers]", int64_t, long double) {
  constexpr unit_t<'X', 1, TestType, std::ratio<1>> v1{1};
  constexpr unit_t<'Y', 1, TestType, std::ratio<1>> v2{1};

  constexpr auto result = SI::detail::cross_unit_divide<expected_unit>(v1, v2);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const expected_unit<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN to values of different type AND ratio is different "
    "WHEN divided THEN resulting unit is as specified AND ratio is divided",
    "[unit_t][helpers]", int64_t, long double) {
  constexpr unit_t<'X', 1, TestType, std::milli> v1{1};
  constexpr unit_t<'Y', 1, TestType, std::kilo> v2{1};

  constexpr auto result = SI::detail::cross_unit_divide<expected_unit>(v1, v2);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const expected_unit<TestType, std::micro>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN to values of different type AND ratio is the same "
    "WHEN multiplied THEN resulting unit is as specified AND ratio is the same",
    "[unit_t][helpers]", int64_t, long double) {
  constexpr unit_t<'X', 1, TestType, std::ratio<1>> v1{1};
  constexpr unit_t<'Y', 1, TestType, std::ratio<1>> v2{1};

  constexpr auto result =
      SI::detail::cross_unit_multiply<expected_unit>(v1, v2);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const expected_unit<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN to values of different type AND ratio is different "
                   "WHEN multiplied THEN resulting unit is as specified AND "
                   "ratio is multiplied",
                   "[unit_t][helpers]", int64_t, long double) {
  constexpr unit_t<'X', 1, TestType, std::milli> v1{1};
  constexpr unit_t<'Y', 1, TestType, std::kilo> v2{1};

  constexpr auto result =
      SI::detail::cross_unit_multiply<expected_unit>(v1, v2);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const expected_unit<TestType, std::ratio<1>>>::value);
}