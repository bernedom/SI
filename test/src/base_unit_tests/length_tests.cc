#include <catch.hpp>

#include <SI/length.h>

using namespace SI;

/// @todo adjust test names
TEST_CASE("km returns ratio 1000 to 1") {
  constexpr auto one_k = 1_km;
  STATIC_REQUIRE(decltype(one_k)::ratio::num == 1000);
  STATIC_REQUIRE(decltype(one_k)::ratio::den == 1);
}

TEST_CASE("one km is thousand m") {
  constexpr auto one_k = 1_km;
  constexpr auto one_m = 1_m;
  STATIC_REQUIRE(one_k == (one_m * 1000));
}

TEST_CASE("one m is 100 cm") {
  constexpr auto one_cm = 1_cm;
  constexpr auto one_m = 1_m;

  STATIC_REQUIRE(one_m == one_cm * 100);
}

TEST_CASE("one cm is 10 mm") {
  constexpr auto one_cm = 1_cm;
  constexpr auto one_mm = 1_mm;

  STATIC_REQUIRE(one_cm == one_mm * 10);
}

TEST_CASE("1m == 1m * -1") {
  constexpr auto one_m = 1_m;
  constexpr auto neg_one_m = -1_m;

  STATIC_REQUIRE(one_m * -1 == neg_one_m);
}

TEST_CASE("km returns ratio 1000 to 1 floating point") {
  constexpr auto one_k = 1.0_km;
  STATIC_REQUIRE(decltype(one_k)::ratio::num == 1000);
  STATIC_REQUIRE(decltype(one_k)::ratio::den == 1);
}

TEST_CASE("mm returns ratio 1 to 1000 floating point") {
  constexpr auto one_mm = 1.0_mm;
  STATIC_REQUIRE(decltype(one_mm)::ratio::num == 1);
  STATIC_REQUIRE(decltype(one_mm)::ratio::den == 1000);
}

TEST_CASE("m returns ratio 1 to 1 floating point") {
  constexpr auto one_m = 1.0_m;
  STATIC_REQUIRE(decltype(one_m)::ratio::num == 1);
  STATIC_REQUIRE(decltype(one_m)::ratio::den == 1);
}

TEST_CASE("cm returns ratio 1 to 100 floating point") {
  constexpr auto one_cm = 1.0_cm;
  STATIC_REQUIRE(std::ratio_equal<decltype(one_cm)::ratio, std::centi>::value);
}

/* Examples commented out fail to compile
TEST_CASE("Assert on overflow for m") { REQUIRE_THROWS(0xffffffffffffffff_m); }
TEST_CASE("Assert on overflow for km") {
  REQUIRE_THROWS(0xffffffffffffffff_km);
}
TEST_CASE("Assert on overflow for cm") {
  REQUIRE_THROWS(0xffffffffffffffff_cm);
}
TEST_CASE("Assert on overflow for mm") {
  REQUIRE_THROWS(0xffffffffffffffff_mm);
}
*/