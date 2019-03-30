#include <SI/area.h>
#include <catch.hpp>

using namespace SI::literals;

TEST_CASE("GIVEN value AND value is integral WHEN constructed with literal _m2 "
          "THEN ratio is 1 AND exponent is 2") {
  constexpr auto a = 1_m2;
  STATIC_REQUIRE(std::ratio_equal<decltype(a)::ratio, std::ratio<1>>::value);
  STATIC_REQUIRE(decltype(a)::exponent::value == 2);
}

TEST_CASE(
    "GIVEN value AND value is floating point WHEN constructed with literal _m2 "
    "THEN ratio is 1 AND exponent is 2") {
  constexpr auto a = 1.0_m2;
  STATIC_REQUIRE(std::ratio_equal<decltype(a)::ratio, std::ratio<1>>::value);
  STATIC_REQUIRE(decltype(a)::exponent::value == 2);
}

TEST_CASE(
    "GIVEN value AND value is integral WHEN constructed with literal _cm2 "
    "THEN ratio is 10^-4 AND exponent is 2") {
  constexpr auto a = 1_cm2;
  STATIC_REQUIRE(
      std::ratio_equal<decltype(a)::ratio, std::ratio<1, 10000>>::value);
  STATIC_REQUIRE(decltype(a)::exponent::value == 2);
}

TEST_CASE(
    "GIVEN value AND value is floating point WHEN constructed with literal _m2 "
    "THEN ratio is 10^-4 AND exponent is 2") {
  constexpr auto a = 1.0_cm2;
  STATIC_REQUIRE(
      std::ratio_equal<decltype(a)::ratio, std::ratio<1, 10000>>::value);
  STATIC_REQUIRE(decltype(a)::exponent::value == 2);
}

TEST_CASE(
    "GIVEN value AND value is integral WHEN constructed with literal _mm2 "
    "THEN ratio is 10^-6 AND exponent is 2") {
  constexpr auto a = 1_mm2;
  STATIC_REQUIRE(std::ratio_equal<decltype(a)::ratio, std::micro>::value);
  STATIC_REQUIRE(decltype(a)::exponent::value == 2);
}

TEST_CASE("GIVEN value AND value is floating point WHEN constructed with "
          "literal _mm2 "
          "THEN ratio is 10^-6 AND exponent is 2") {
  constexpr auto a = 1.0_mm2;
  STATIC_REQUIRE(std::ratio_equal<decltype(a)::ratio, std::micro>::value);
  STATIC_REQUIRE(decltype(a)::exponent::value == 2);
}

TEST_CASE("GIVEN value AND value is integral WHEN constructed with literal _m3 "
          "THEN ratio is 1 AND exponent is 3") {
  constexpr auto a = 1_m3;
  STATIC_REQUIRE(std::ratio_equal<decltype(a)::ratio, std::ratio<1>>::value);
  STATIC_REQUIRE(decltype(a)::exponent::value == 3);
}

TEST_CASE(
    "GIVEN value AND value is floating point WHEN constructed with literal _m3 "
    "THEN ratio is 1 AND exponent is 2") {
  constexpr auto a = 1.0_m3;
  STATIC_REQUIRE(std::ratio_equal<decltype(a)::ratio, std::ratio<1>>::value);
  STATIC_REQUIRE(decltype(a)::exponent::value == 3);
}

TEST_CASE(
    "GIVEN value AND value is integral WHEN constructed with literal _cm3 "
    "THEN ratio is 10^-6 AND exponent is 3") {
  constexpr auto a = 1_cm3;
  STATIC_REQUIRE(std::ratio_equal<decltype(a)::ratio, std::micro>::value);
  STATIC_REQUIRE(decltype(a)::exponent::value == 3);
}

TEST_CASE(
    "GIVEN value AND value is floating point WHEN constructed with literal _m3 "
    "THEN ratio is 10^-6 AND exponent is 3") {
  constexpr auto a = 1.0_cm3;
  STATIC_REQUIRE(std::ratio_equal<decltype(a)::ratio, std::micro>::value);
  STATIC_REQUIRE(decltype(a)::exponent::value == 3);
}

TEST_CASE(
    "GIVEN value AND value is integral WHEN constructed with literal _mm3 "
    "THEN ratio is 10^-9 AND exponent is 3") {
  constexpr auto a = 1_mm3;
  STATIC_REQUIRE(std::ratio_equal<decltype(a)::ratio, std::nano>::value);
  STATIC_REQUIRE(decltype(a)::exponent::value == 3);
}

TEST_CASE("GIVEN value AND value is floating point WHEN constructed with "
          "literal _mm3 "
          "THEN ratio is 10^-9 AND exponent is 3") {
  constexpr auto a = 1.0_mm3;
  STATIC_REQUIRE(std::ratio_equal<decltype(a)::ratio, std::nano>::value);
  STATIC_REQUIRE(decltype(a)::exponent::value == 3);
}

TEST_CASE("GIVEN two length values in meters WHEN multiplied THEN result is "
          "square meters") {
  constexpr auto l = 1_m;
  constexpr auto a = l * l;

  constexpr auto expected = 1_m2;

  STATIC_REQUIRE(decltype(a)::exponent::value == 2);
  STATIC_REQUIRE(std::is_same<decltype(a), decltype(expected)>::value);
}

TEST_CASE("GIVEN three length values WHEN multiplied THEN result is volume") {
  constexpr auto l = 1_m;
  constexpr auto v = l * l * l;

  constexpr auto expected = 1_m3;

  STATIC_REQUIRE(decltype(v)::exponent::value == 3);
  STATIC_REQUIRE(std::is_same<decltype(v), decltype(expected)>::value);
}

TEST_CASE("GIVEN an area value AND a length value WHEN multiplied THEN result "
          "is volume type") {
  constexpr auto l = 1_m;
  constexpr auto a = l * l;
  constexpr auto v = a * l;

  constexpr auto expected = 1_m3;

  STATIC_REQUIRE(decltype(v)::exponent::value == 3);
  STATIC_REQUIRE(std::is_same<decltype(v), decltype(expected)>::value);
}

TEST_CASE("GIVEN two length values AND ratio is 10^-3 WHEN multiplied THEN "
          "ratio of result is 10^-6") {
  constexpr auto l = 2_mm;
  constexpr auto a = l * l;
  constexpr auto expected = 4_mm2;

  STATIC_REQUIRE(std::is_same<decltype(a), decltype(expected)>::value);
  STATIC_REQUIRE(expected == a);
}

TEST_CASE("GIVEN a lenght value with ratio 1 AND a length value with ratio "
          "10^-3 WHEN multiplied THEN ratio of result is 10^-6") {
  constexpr auto l = 2_m;
  constexpr auto l_mm = 2_mm;
  constexpr auto a = l * l_mm;
  constexpr auto a_commutative = l_mm * l;
  constexpr auto expected = 4000_mm2;

  STATIC_REQUIRE(std::is_same<decltype(a), decltype(expected)>::value);
  STATIC_REQUIRE(expected == a);
  STATIC_REQUIRE(a == a_commutative);
  STATIC_REQUIRE(a_commutative == a);
}