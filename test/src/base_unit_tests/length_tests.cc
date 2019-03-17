#include <catch.hpp>

#include <SI/length.h>

using namespace SI;

/// @todo check tests for std::ratio_equal and resulting type
TEST_CASE("GIVEN a value WHEN constructed with literal _km  THEN result is a "
          "length type ratio 1000 to 1") {
  constexpr auto one_k = 1_km;
  STATIC_REQUIRE(decltype(one_k)::ratio::num == 1000);
  STATIC_REQUIRE(decltype(one_k)::ratio::den == 1);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _km THEN it is one "
          "thousand _m") {
  constexpr auto one_k = 1_km;
  constexpr auto one_m = 1_m;
  STATIC_REQUIRE(one_k == (one_m * 1000));
}

TEST_CASE(
    "GIVEN a value WHEN constructed with literal _m THEN result is 100 cm") {
  constexpr auto one_cm = 1_cm;
  constexpr auto one_m = 1_m;

  STATIC_REQUIRE(one_m == one_cm * 100);
}

TEST_CASE(
    "GIVEN a value WHEN constructed with literal _cm THEN result is 10 mm") {
  constexpr auto one_cm = 1_cm;
  constexpr auto one_mm = 1_mm;

  STATIC_REQUIRE(one_cm == one_mm * 10);
}

TEST_CASE("GIVEN a value of 1m WHEN multiplied with -1 THEN result is -1m") {
  constexpr auto one_m = 1_m;
  constexpr auto neg_one_m = -1_m;

  STATIC_REQUIRE(one_m * -1 == neg_one_m);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _km  THEN result is a "
          "length type ratio 1000 to 1 floating point") {
  constexpr auto one_k = 1.0_km;
  STATIC_REQUIRE(decltype(one_k)::ratio::num == 1000);
  STATIC_REQUIRE(decltype(one_k)::ratio::den == 1);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mm  THEN result is a "
          "length type ratio 1 to 1000 floating point") {
  constexpr auto one_mm = 1.0_mm;
  STATIC_REQUIRE(decltype(one_mm)::ratio::num == 1);
  STATIC_REQUIRE(decltype(one_mm)::ratio::den == 1000);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _m  THEN result is a "
          "length type ratio 1 to 1 floating point") {
  constexpr auto one_m = 1.0_m;
  STATIC_REQUIRE(decltype(one_m)::ratio::num == 1);
  STATIC_REQUIRE(decltype(one_m)::ratio::den == 1);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _cm  THEN result is a "
          "length type ratio 1 to 100 floating point") {
  constexpr auto one_cm = 1.0_cm;
  STATIC_REQUIRE(std::ratio_equal<decltype(one_cm)::ratio, std::centi>::value);
}

/* Examples commented out fail to compile
TEST_CASE("Assert on overflow for
m") { REQUIRE_THROWS(0xffffffffffffffff_m); } TEST_CASE("GIVEN a value WHEN
constructed with literal _Assert on overflow for km") {
  REQUIRE_THROWS(0xffffffffffffffff_km);
}
TEST_CASE("_Assert on overflow for
cm") { REQUIRE_THROWS(0xffffffffffffffff_cm);
}
TEST_CASE("_Assert on overflow for
mm") { REQUIRE_THROWS(0xffffffffffffffff_mm);
}
*/