#include <catch.hpp>

#include <SI/value_holder.h>
#include <ratio>

using namespace SI;

TEST_CASE(
    "given two values with exponent 1 WHEN multiplied THEN exponent is 2") {
  constexpr unit_t<'X'> v1{0};
  constexpr unit_t<'X'> v2{0};

  constexpr auto result = v1 * v2;

  static_assert(decltype(v1)::exponent::value == 1, "Exponent value is 1");
  static_assert(decltype(v2)::exponent::value == 1, "Exponent value is 1");
  static_assert(decltype(result)::exponent::value == 2,
                "Exponent value is two");
}

TEST_CASE("given two units with different non-negative values but same ratio "
          "and unit WHEN "
          "multiplied THEN resulting value is correct") {

  constexpr unit_t<'X'> v1{20};
  constexpr unit_t<'X'> v2{30};

  constexpr auto result = v1 * v2;

  static_assert(result.raw_value() == 600, "Raw value matches");
}

TEST_CASE(
    "given two units with different non-negative values and different ratio "
    "and unit WHEN "
    "multiplied THEN resulting value is correct") {

  constexpr unit_t<'X', std::deci> v1{2};
  constexpr unit_t<'X'> v2{30};

  constexpr auto result = v1 * v2;

  static_assert(result.raw_value() == 600, "Raw value matches");
}

TEST_CASE(
    "given two units with different values and different ratio and unit WHEN "
    "multiplied THEN resulting value is correct") {

  constexpr unit_t<'X', std::deci> v1{2};
  constexpr unit_t<'X'> v2{-30};

  constexpr auto result = v1 * v2;

  static_assert(result.raw_value() == -600, "Raw value matches");
  static_assert(
      std::ratio_equal<decltype(result)::ratio, decltype(v1)::ratio>::value,
      "left hand side binds unit");
}

TEST_CASE(
    "given two units with different values and different ratio and unit WHEN "
    "multiplied THEN resulting value is correct 2") {

  constexpr unit_t<'X'> v1{2};
  constexpr unit_t<'X', std::milli> v2{30};

  constexpr auto result = v1 * v2;

  static_assert(result.raw_value() == 0, "Raw value matches");
  static_assert(
      std::ratio_equal<decltype(result)::ratio, decltype(v1)::ratio>::value,
      "left hand side binds unit");
}
