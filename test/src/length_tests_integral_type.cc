#include <catch.hpp>

#include <limits>

#include <SI/length.h>

using namespace SI;
using namespace SI::literals;

TEST_CASE("km returns ratio 1000 to 1") {
  constexpr auto one_k = 1_km;
  static_assert(decltype(one_k)::ratio::num == 1000, "One km is 1000 / 1");
  static_assert(decltype(one_k)::ratio::den == 1, "One km is 1000 / 1");
}

TEST_CASE("one km is thousand m") {
  constexpr auto one_k = 1_km;
  constexpr auto one_m = 1_m;
  static_assert(one_k == (one_m * 1000), "one km is thousand m");
}

TEST_CASE("one m is 100 cm") {
  constexpr auto one_cm = 1_cm;
  constexpr auto one_m = 1_m;

  static_assert(one_m == one_cm * 100, "one m is 100 cm");
}

TEST_CASE("one cm is 10 mm") {
  constexpr auto one_cm = 1_cm;
  constexpr auto one_mm = 1_mm;

  static_assert(one_cm == one_mm * 10, "one cm is 10 mm");
}

TEST_CASE("1m == 1m * -1") {
  constexpr auto one_m = 1_m;
  constexpr auto neg_one_m = -1_m;

  static_assert(one_m * -1 == neg_one_m, "Negation");
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