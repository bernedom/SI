#include <catch.hpp>

#include <length.h>

using namespace SI;

// stream operator needed to expand in test output
template <class R = std::ratio<1>>
std::ostream &operator<<(std::ostream &os, const length_t<R> &l) {
  os << l.raw_value();
  return os;
}
TEST_CASE("km returns ratio 1000 to 1 floating point") {
  const auto one_k = 1.0_km;
  static_assert(decltype(one_k)::ratio::num == 1000, "one km is 1000 / 1");
  static_assert(decltype(one_k)::ratio::den == 1, "one km is 1000/ 1");
}

TEST_CASE("mm returns ratio 1 to 1000 floating point") {
  const auto one_mm = 1.0_mm;
  static_assert(decltype(one_mm)::ratio::num == 1, "one mm is 1/ 1000");
  static_assert(decltype(one_mm)::ratio::den == 1000, "one kmmm is 1/ 1000");
}

TEST_CASE("m returns ratio 1 to 1 floating point") {
  const auto one_m = 1.0_m;
  static_assert(decltype(one_m)::ratio::num == 1, "one mm is 1/ 1");
  static_assert(decltype(one_m)::ratio::den == 1, "one kmmm is 1/ 1");
}