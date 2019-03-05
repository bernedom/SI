#include <catch.hpp>

#include <SI/detail/detail.h>
#include <SI/detail/unit.h>

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
    "[detail][epsequal]", long double, double) {
  constexpr TestType non_zero{1234.345};
  constexpr TestType half_eps =
      non_zero + -std::numeric_limits<TestType>::epsilon() / 2;

  static_assert(SI::detail::epsEqual(non_zero, half_eps), "is equal");
  static_assert(SI::detail::epsEqual(half_eps, non_zero), "is equal");
}

// not covered by the template test case abofe because of the differnt literal
// construction using 'f'-suffix
TEST_CASE(
    "EpsEqual comparison of non_zero and -epsilon/2 returns true for floats",
    "[detail][epsequal]") {
  constexpr float non_zero = 1234.345f;
  constexpr float half_eps =
      non_zero + -std::numeric_limits<float>::epsilon() / 2;

  static_assert(SI::detail::epsEqual(non_zero, half_eps), "is equal");
  static_assert(SI::detail::epsEqual(half_eps, non_zero), "is equal");
}

TEMPLATE_TEST_CASE("EpsEqual comparison of non_zero and epsilon/2 returns true",
                   "[detail][epsequal]", long double, double) {
  constexpr TestType non_zero{1234.345};
  constexpr TestType half_eps{non_zero +
                              std::numeric_limits<TestType>::epsilon() / 2};

  static_assert(SI::detail::epsEqual(non_zero, half_eps), "is equal");
  static_assert(SI::detail::epsEqual(half_eps, non_zero), "is equal");
}

TEST_CASE(
    "EpsEqual comparison of non_zero and epsilon/2 returns true for floats",
    "[detail][epsequal]") {
  constexpr float non_zero{1234.345f};
  constexpr float half_eps{non_zero +
                           std::numeric_limits<float>::epsilon() / 2};

  static_assert(SI::detail::epsEqual(non_zero, half_eps), "is equal");
  static_assert(SI::detail::epsEqual(half_eps, non_zero), "is equal");
}

TEMPLATE_TEST_CASE(
    "EpsEqual comparison of non_zero and quiet_NaN returns false",
    "[detail][epsequal][runtime]", long double, double, float) {
  constexpr TestType zero{0};
  constexpr const TestType nan{std::numeric_limits<TestType>::quiet_NaN()};

  REQUIRE(!SI::detail::epsEqual(zero, nan));
  REQUIRE(!SI::detail::epsEqual(nan, zero));
}

TEMPLATE_TEST_CASE(
    "EpsEqual comparison of quiet_NaN and quiet_NaN returns false",
    "[detail][epsequal][runtime]", long double, double, float) {

  constexpr const TestType nan{std::numeric_limits<TestType>::quiet_NaN()};

  REQUIRE(!SI::detail::epsEqual(nan, nan));
}

TEMPLATE_TEST_CASE(
    "EpsEqual comparison of signaling_NaN and quiet_NaN returns false",
    "[detail][epsequal][runtime]", long double, double, float) {

  constexpr const TestType signaling_nan{
      std::numeric_limits<TestType>::signaling_NaN()};
  constexpr const TestType quiet_nan{
      std::numeric_limits<TestType>::quiet_NaN()};

  REQUIRE(!SI::detail::epsEqual(signaling_nan, quiet_nan));
}

TEMPLATE_TEST_CASE(
    "EpsEqual comparison of signaling_NaN and signaling_NaN returns false",
    "[detail][epsequal][runtime]", long double, double, float) {

  constexpr const TestType signaling_nan{
      std::numeric_limits<TestType>::signaling_NaN()};
  constexpr const TestType quiet_nan{
      std::numeric_limits<TestType>::signaling_NaN()};

  REQUIRE(!SI::detail::epsEqual(signaling_nan, quiet_nan));
}

template <typename _Ratio, typename _Type = int64_t>
using resulting_t = SI::unit_t<'Y', 1, _Ratio, _Type>;

TEST_CASE("GIVEN a value of an integral type AND a value of floating point "
          "type WHEN divided THEN result is of left hand type") {
  constexpr SI::unit_t<'X', 1, std::ratio<1>, long double> v1{1};
  constexpr SI::unit_t<'X', 1, std::ratio<1>, int64_t> v2{1};

  constexpr auto result = SI::detail::cross_unit_multiply<resulting_t>(v1, v2);

  static_assert(std::is_same<long double,
                             typename decltype(result)::internal_type>::value);
}