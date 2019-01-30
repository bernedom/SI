#include <catch.hpp>

#include <SI/detail.h>
#include <SI/unit.h>

TEMPLATE_TEST_CASE("EpsEqual comparison of 0 and 0 returns true",
                   "[detail][epsequal]", long double, double, float) {
  constexpr TestType zero{0};

  static_assert(SI::detail::epsEqual(zero, zero), "is equal");
}

TEMPLATE_TEST_CASE("EpsEqual comparison of 0 and epsilon returns false",
                   "[detail][epsequal]", long double, double, float) {
  constexpr TestType zero{0};
  constexpr TestType half_eps{std::numeric_limits<TestType>::epsilon()};

  static_assert(!SI::detail::epsEqual(zero, half_eps), "is equal");
  static_assert(!SI::detail::epsEqual(half_eps, zero), "is equal");
}

TEMPLATE_TEST_CASE("EpsEqual comparison of 0 and -epsilon returns false",
                   "[detail][epsequal]", long double, double, float) {
  constexpr TestType zero{0};
  constexpr TestType half_eps{-std::numeric_limits<TestType>::epsilon()};

  static_assert(!SI::detail::epsEqual(zero, half_eps), "is equal");
  static_assert(!SI::detail::epsEqual(half_eps, zero), "is equal");
}

TEMPLATE_TEST_CASE("EpsEqual comparison of 0 and epsilon/2 returns true",
                   "[detail][epsequal]", long double, double, float) {
  constexpr TestType zero{0};
  constexpr TestType half_eps{std::numeric_limits<TestType>::epsilon() / 2};

  static_assert(SI::detail::epsEqual(zero, half_eps), "is equal");
  static_assert(SI::detail::epsEqual(half_eps, zero), "is equal");
}

TEMPLATE_TEST_CASE("EpsEqual comparison of 0 and -epsilon/2 returns true",
                   "[detail][epsequal]", long double, double, float) {
  constexpr TestType zero{0};
  constexpr TestType half_eps{-std::numeric_limits<TestType>::epsilon() / 2};

  static_assert(SI::detail::epsEqual(zero, half_eps), "is equal");
  static_assert(SI::detail::epsEqual(half_eps, zero), "is equal");
}

TEMPLATE_TEST_CASE(
    "EpsEqual comparison of non_zero and -epsilon/2 returns true",
    "[detail][epsequal]", long double, double, float) {
  constexpr TestType non_zero{1234.345};
  constexpr TestType half_eps{non_zero +
                              -std::numeric_limits<TestType>::epsilon() / 2};

  static_assert(SI::detail::epsEqual(non_zero, half_eps), "is equal");
  static_assert(SI::detail::epsEqual(half_eps, non_zero), "is equal");
}

TEMPLATE_TEST_CASE("EpsEqual comparison of non_zero and epsilon/2 returns true",
                   "[detail][epsequal]", long double, double, float) {
  constexpr TestType non_zero{1234.345};
  constexpr TestType half_eps{non_zero +
                              std::numeric_limits<TestType>::epsilon() / 2};

  static_assert(SI::detail::epsEqual(non_zero, half_eps), "is equal");
  static_assert(SI::detail::epsEqual(half_eps, non_zero), "is equal");
}

TEMPLATE_TEST_CASE("EpsEqual comparison of non_zero and epsilon/2 returns true",
                   "[detail][epsequal]", long double, double, float) {
  constexpr TestType non_zero{std::numeric_limits<TestType>::NaN};
  constexpr TestType half_eps{non_zero +
                              std::numeric_limits<TestType>::epsilon() / 2};

  static_assert(SI::detail::epsEqual(non_zero, half_eps), "is equal");
  static_assert(SI::detail::epsEqual(half_eps, non_zero), "is equal");
}