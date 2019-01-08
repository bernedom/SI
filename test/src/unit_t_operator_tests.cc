#include <catch.hpp>

#include <SI/unit.h>
#include <ratio>
#include <type_traits>

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

  constexpr unit_t<'X', 1, std::deci> v1{2};
  constexpr unit_t<'X'> v2{30};

  constexpr auto result = v1 * v2;

  static_assert(result.raw_value() == 600, "Raw value matches");
}

TEST_CASE(
    "given two units with different values and different ratio and unit WHEN "
    "multiplied THEN resulting value is correct") {

  constexpr unit_t<'X', 1, std::deci> v1{2};
  constexpr unit_t<'X'> v2{-30};

  constexpr auto result = v1 * v2;

  static_assert(result.raw_value() == -600, "Raw value matches");
  static_assert(
      std::ratio_equal<decltype(result)::ratio, decltype(v1)::ratio>::value,
      "left hand side binds unit");
}

TEST_CASE(
    "given two units with different values and ratio of rhs is small WHEN "
    "multiplied THEN resulting type is of left hand side and value is 0") {

  constexpr unit_t<'X'> v1{2};
  constexpr unit_t<'X', 1, std::milli> v2{30};

  constexpr auto result = v1 * v2;

  static_assert(result.raw_value() == 0, "Raw value matches");
  static_assert(
      std::ratio_equal<decltype(result)::ratio, decltype(v1)::ratio>::value,
      "left hand side binds unit");
}

TEST_CASE("GIVEN two units with different exponents WHEN divided THEN "
          "resulting exopnent is left exponent - right exponent") {
  constexpr unit_t<'X', 3, std::ratio<1>> v1{1};
  constexpr unit_t<'X', 2, std::ratio<1>> v2{1};

  constexpr auto result = v1 / v2;

  static_assert(decltype(result)::exponent::value == 1,
                "Exponent is subtracted");
}

TEST_CASE(
    "GIVEN two units with exponent 1 WHEN divided result in a raw integer") {
  constexpr unit_t<'X', 1, std::ratio<1>> v1{1};
  constexpr auto result = v1 / v1;

  static_assert(std::is_same<std::remove_const<decltype(result)>::type,
                             decltype(v1)::internal_type>::value,
                "raw internal type is returned");
}

TEST_CASE("GIVEN two units with the same ratio exponent 1  WHEN divided result "
          "is lhs.value / "
          "rhs.value") {
  constexpr unit_t<'X', 1, std::ratio<1>> v1{1000};
  constexpr unit_t<'X', 1, std::ratio<1>> v2{10};
  constexpr auto result = v1 / v2;

  static_assert(std::is_same<std::remove_const<decltype(result)>::type,
                             decltype(v1)::internal_type>::value,
                "raw internal type is returned");
  static_assert(result == 100, "division by 10");
}

TEST_CASE("GIVEN a unit and a scalar WHEN scalar is divided by unit THEN unit "
          "exponent is negative") {
  constexpr int64_t v1{1};
  constexpr unit_t<'X', 1, std::ratio<1>> v2{1};
  constexpr auto result = v1 / v2;

  static_assert(decltype(result)::exponent::value == -1,
                "Exponent is negative");
}

TEST_CASE("GIVEN a unit with ratio<1> and a scalar WHEN scalar is divided by "
          "unit THEN resulting  value is scalar / unit.value ") {
  constexpr int64_t v1{1000};
  constexpr unit_t<'X', 1, std::ratio<1>> v2{2};
  constexpr auto result = v1 / v2;

  static_assert(result.raw_value() == 500, "1000 / 2 = 500");
}

TEST_CASE("GIVEN a unit with ratio<1, 1000> and a scalar WHEN scalar is dived "
          "by unit THEN resulting value is adjusted by ratio") {
  constexpr int64_t v1{1000};
  constexpr unit_t<'X', 1, std::deca> v2{2};

  constexpr auto result = v1 / v2;
  constexpr unit_t<'X', -1, std::deca> expected{5};
  static_assert(v2.raw_value() == 2, "Is 2");
  static_assert(std::ratio_equal<std::deca, decltype(result)::ratio>::value,
                "Is of deca type");
  static_assert(result.raw_value() == 5, "1000 / 20 = 50");
  static_assert(result == expected, "1000 / 20 = 50");
}

TEST_CASE("GIVEN a unit WHEN added to itself THEN resulting value value * 2") {
  constexpr unit_t<'X', 1, std::ratio<1>> v1{1};
  constexpr auto result = v1 + v1;

  static_assert(result.raw_value() == 2, "Result is raw_value * 2");
}

TEST_CASE(
    "GIVEN two units with different ratios WHEN added together THEN result is "
    "lhs + rhs with ratio considered AND result is of ratio of lhs") {
  constexpr unit_t<'X', 1, std::ratio<1>> v1{1};
  constexpr unit_t<'X', 1, std::kilo> v2{1};

  constexpr auto result = v1 + v2;
  static_assert(
      std::ratio_equal<decltype(result)::ratio, decltype(v1)::ratio>::value ==
          true,
      "ratio is of same ratio as left hand side");
  static_assert(result.raw_value() == 1001, "Result is correct");
}

TEST_CASE("GIVEN two units with floating point types with value difference "
          "smaller than type::epsilon WHEN compared "
          "THEN result is true") {
  constexpr unit_t<'X', 1, std::ratio<1>, long double> v1{0};
  constexpr unit_t<'X', 1, std::ratio<1>, long double> v2{
      std::numeric_limits<long double>::epsilon() / 2.0};

  static_assert(v1 == v2, "Result is the same");
  static_assert(!(v1 != v2), "Result is the same");
}

TEST_CASE("GIVEN two units with floating point types with value difference of "
          "epsilon WHEN compared "
          "THEN result is false") {
  constexpr unit_t<'X', 1, std::ratio<1>, long double> v1{0};
  constexpr unit_t<'X', 1, std::ratio<1>, long double> v2{
      std::numeric_limits<long double>::epsilon()};

  static_assert(v1 != v2, "Result is the not the same");
  static_assert(!(v1 == v2), "Result is the not the same");
}

TEST_CASE("GIVEN two units same absolute value AND different ratios WHEN "
          "compared THEN result in true") {
  constexpr unit_t<'X', 1, std::milli> v1{1000};
  constexpr unit_t<'X', 1, std::ratio<1>> v2{1};

  static_assert(v1 == v2, "values are equal");
  static_assert(v2 == v1, "values are equal");
}