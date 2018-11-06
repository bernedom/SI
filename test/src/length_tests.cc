#include <catch.hpp>

#include <limits>

#include <length.h>

// stream operator needed to expand in test output
std::ostream &operator<<(std::ostream &os, const length_t &l) {
  os << l.length_;
  return os;
}

TEST_CASE("one km is tousand m") {
  const auto one_k = 1_km;
  const auto one_m = 1_m;
  REQUIRE(one_k == (one_m * 1000));
}

TEST_CASE("one m is 100 cm") {
  const auto one_cm = 1_cm;
  const auto one_m = 1_m;

  REQUIRE(one_m == one_cm * 100);
}

TEST_CASE("1m == 1m * -1") {
  const auto one_m = 1_m;
  const auto neg_one_m = -1_m;

  REQUIRE(one_m * -1 == neg_one_m);
}

TEST_CASE("Assert on overflow for m") { REQUIRE_THROWS(0xffffffffffffffff_m); }
TEST_CASE("Assert on overflow for km") {
  REQUIRE_THROWS(0xffffffffffffffff_km);
}
TEST_CASE("Assert on overflow for cm") {
  REQUIRE_THROWS(0xffffffffffffffff_cm);
}