#include <catch.hpp>

#include <SI/detail/unit.h>

using namespace SI::detail;

namespace {
template <typename _Type, typename _Ratio>
using unit_Z_t = SI::detail::unit_t<'Z', 1, _Type, _Ratio>;

template <typename _Type, typename _Ratio>
using unit_X_t = SI::detail::unit_t<'X', 1, _Type, _Ratio>;
} // namespace

TEMPLATE_TEST_CASE("GIVEN to values of different type AND ratio is the same "
                   "WHEN divided THEN resulting unit is as specified AND ratio "
                   "is the same AND exponent is specified by resulting unit",
                   "[unit_t][helpers]", int64_t, long double) {
  constexpr unit_t<'X', 1, TestType, std::ratio<1>> v1{1};
  constexpr unit_t<'Y', 1, TestType, std::ratio<1>> v2{1};

  constexpr auto result = SI::detail::cross_unit_divide<unit_Z_t>(v1, v2);
  STATIC_REQUIRE(std::is_same<decltype(result),
                              const unit_Z_t<TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(decltype(result)::exponent::value == 1);
}

TEMPLATE_TEST_CASE(
    "GIVEN to values of different type AND ratio is different "
    "WHEN divided THEN resulting unit is as specified AND ratio is divided",
    "[unit_t][helpers]", int64_t, long double) {
  constexpr unit_t<'X', 1, TestType, std::milli> v1{1};
  constexpr unit_t<'Y', 1, TestType, std::kilo> v2{1};

  constexpr auto result = SI::detail::cross_unit_divide<unit_Z_t>(v1, v2);
  STATIC_REQUIRE(std::is_same<decltype(result),
                              const unit_Z_t<TestType, std::micro>>::value);
  STATIC_REQUIRE(decltype(result)::exponent::value == 1);
}

TEMPLATE_TEST_CASE(
    "GIVEN to values of different type AND ratio is the same "
    "WHEN multiplied THEN resulting unit is as specified AND ratio is the same",
    "[unit_t][helpers]", int64_t, long double) {
  constexpr unit_t<'X', 1, TestType, std::ratio<1>> v1{1};
  constexpr unit_t<'Y', 1, TestType, std::ratio<1>> v2{1};

  constexpr auto result = SI::detail::cross_unit_multiply<unit_Z_t>(v1, v2);
  STATIC_REQUIRE(std::is_same<decltype(result),
                              const unit_Z_t<TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(decltype(result)::exponent::value == 1);
}

TEMPLATE_TEST_CASE("GIVEN to values of different type AND ratio is different "
                   "WHEN multiplied THEN resulting unit is as specified AND "
                   "ratio is multiplied",
                   "[unit_t][helpers]", int64_t, long double) {
  constexpr unit_t<'X', 1, TestType, std::milli> v1{1};
  constexpr unit_t<'Y', 1, TestType, std::kilo> v2{1};

  constexpr auto result = SI::detail::cross_unit_multiply<unit_Z_t>(v1, v2);
  STATIC_REQUIRE(std::is_same<decltype(result),
                              const unit_Z_t<TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(decltype(result)::exponent::value == 1);
}

TEMPLATE_TEST_CASE(
    "GIVEN two units of same type AND different ratio WHEN passed to "
    "unit_with_common_ratio THEN resulting ratio is gcd",
    "[unit_t][helpers]", int64_t, long double) {
  using common_unit = typename SI::detail::unit_with_common_ratio<
      unit_t<'X', 1, TestType, std::ratio<1>>,
      unit_t<'X', 1, TestType, std::milli>>::type;

  STATIC_REQUIRE(
      std::ratio_equal<typename common_unit::ratio, std::milli>::value);
  STATIC_REQUIRE(
      std::is_same<common_unit,
                   SI::detail::unit_t<'X', 1, TestType, std::milli>>::value);
}

TEST_CASE("GIVEN two values AND ratio is 1 WHEN multiplied with each other AND "
          "multiplication "
          "function is different THEN ratio for both units is 1 AND "
          "exponent is different") {
  constexpr unit_t<'X', 1, int64_t, std::ratio<1>> v1{1};
  constexpr unit_t<'X', 1, int64_t, std::ratio<1>> v2{1};
  constexpr unit_t<'Y', 1, int64_t, std::ratio<1>> v3{1};

  constexpr auto result_operator = v1 * v2;
  constexpr auto result_func =
      SI::detail::cross_unit_multiply<unit_X_t>(v1, v3);
  STATIC_REQUIRE(
      std::ratio_equal<decltype(result_func)::ratio, std::ratio<1>>::value);
  STATIC_REQUIRE(std::ratio_equal<decltype(result_func)::ratio,
                                  decltype(result_operator)::ratio>::value);
  STATIC_REQUIRE(decltype(result_func)::exponent::value <
                 decltype(result_operator)::exponent::value);
}
