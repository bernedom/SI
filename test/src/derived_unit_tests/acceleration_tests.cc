#include <catch.hpp>

#include <SI/acceleration.h>

using namespace SI::literals;

TEMPLATE_TEST_CASE(
    "GIVEN velocity value WHEN divided by time value THEN result is "
    "an acceleration value",
    "[acceleration][operators]", int64_t, long double) {

  constexpr SI::velocity_t<TestType, std::ratio<1>> one_ms{1};
  constexpr SI::time_t<TestType, std::ratio<1>> one_s{1};
  constexpr auto acceleration = one_ms / one_s;

  STATIC_REQUIRE(
      std::is_same<decltype(acceleration),
                   const SI::acceleration_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a length value WHEN divided by time squared THEN result is an "
    "acceleration value",
    "[acceleration][operators]", int64_t, long double) {
  constexpr SI::time_t<TestType, std::ratio<1>> one_s{1};
  constexpr SI::length_t<TestType, std::ratio<1>> one_m{1};

  constexpr auto one_square_s = one_s * one_s;
  constexpr auto acceleration = one_m / one_square_s;

  STATIC_REQUIRE(
      std::is_same<decltype(acceleration),
                   const SI::acceleration_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN an acceleration value WHEN multiplied by time squared THEN "
    "result is a length value",
    "[acceleration][operators]", int64_t, long double) {

  constexpr SI::time_t<TestType, std::ratio<1>> one_s{1};
  constexpr SI::length_t<TestType, std::ratio<1>> one_m{1};

  constexpr auto one_square_s = one_s * one_s;
  constexpr auto acceleration = one_m / one_square_s;
  constexpr auto length = acceleration * one_square_s;
  constexpr auto length_commutative = one_square_s * acceleration;

  STATIC_REQUIRE(
      std::is_same<decltype(length),
                   const SI::length_t<TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(length_commutative),
                   const SI::length_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN an acceleration value WHEN multiplied by time THEN "
                   "result is a velocity value",
                   "[acceleration][operators]", int64_t, long double) {

  constexpr SI::time_t<TestType, std::ratio<1>> one_s{1};
  constexpr SI::acceleration_t<TestType, std::ratio<1>> acceleration{1};
  constexpr auto velocity = acceleration * one_s;
  constexpr auto velocity_commutative = one_s * acceleration;

  STATIC_REQUIRE(
      std::is_same<decltype(velocity),
                   const SI::velocity_t<TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(velocity_commutative), decltype(velocity)>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a velocity value WHEN divided by acceleration THEN result is "
    "a time value",
    "[acceleration][operators]", int64_t, long double) {
  constexpr SI::velocity_t<TestType, std::ratio<1>> v{1};
  constexpr SI::acceleration_t<TestType, std::ratio<1>> a{1};

  constexpr auto result = v / a;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::time_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a length value WHEN divided by acceleration THEN result is "
    "a time squared value",
    "[acceleration][operators]", int64_t, long double) {
  constexpr SI::length_t<TestType, std::ratio<1>> L{1};
  constexpr SI::acceleration_t<TestType, std::ratio<1>> a{1};

  constexpr auto result = L / a;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::time_squared_t<TestType, std::ratio<1>>>::value);
}