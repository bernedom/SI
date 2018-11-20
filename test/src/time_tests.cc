#include <catch.hpp>

#include <SI/time.h>

TEST_CASE("s returns ratio 1 to 1") {
  constexpr auto one = 1_s;
  static_assert(decltype(one)::ratio::num == 1, "One km is 1000 / 1");
  static_assert(decltype(one)::ratio::den == 1, "One km is 1000 / 1");
}

TEST_CASE("Assert on overflow for s") { REQUIRE_THROWS(0xffffffffffffffff_s); }