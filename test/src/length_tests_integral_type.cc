#include <catch.hpp>

#include <limits>

#include <SI/length.h>

using namespace SI;

// stream operator needed to expand in test output
template <class R = std::ratio<1>>
std::ostream &operator<<(std::ostream &os, const length_t<R> &l) {
  os << l.raw_value();
  return os;
}

TEST_CASE("km returns ratio 1000 to 1") {
  constexpr auto one_k = 1_km;
  static_assert(decltype(one_k)::ratio::num == 1000, "One km is 1000 / 1");
  static_assert(decltype(one_k)::ratio::den == 1, "One km is 1000 / 1");
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

TEST_CASE("one cm is 10 mm") {
  const auto one_cm = 1_cm;
  const auto one_mm = 1_mm;

  REQUIRE(one_cm == one_mm * 100);
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
TEST_CASE("Assert on overflow for mm") {
  REQUIRE_THROWS(0xffffffffffffffff_mm);
}