#include <catch.hpp>

#include <SI/acceleration.h>

using namespace SI::literals;

TEST_CASE("GIVEN velocity value WHEN divided by time value THEN result is "
          "an acceleration value") {

  constexpr SI::velocity_t<int64_t, std::ratio<1>> one_ms{1};
  constexpr auto acceleration = one_ms / 1_s;

  STATIC_REQUIRE(
      std::is_same<decltype(acceleration),
                   const SI::acceleration_t<int64_t, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a length value WHEN divided by time squared THEN result is an "
          "acceleration value") {
  constexpr auto one_m = 1_m;
  constexpr auto one_square_s = 1_s * 1_s;
  constexpr auto acceleration = one_m / one_square_s;

  STATIC_REQUIRE(
      std::is_same<decltype(acceleration),
                   const SI::acceleration_t<int64_t, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN an acceleration value WHEN multiplied by time squared THEN "
          "result is a length value") {

  constexpr auto one_square_s = 1_s * 1_s;
  constexpr auto acceleration = 1_m / one_square_s;
  constexpr auto length = acceleration * one_square_s;
  constexpr auto length_commutative = one_square_s * acceleration;

  STATIC_REQUIRE(
      std::is_same<decltype(length),
                   const SI::length_t<int64_t, std::ratio<1>>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(length_commutative),
                   const SI::length_t<int64_t, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN an acceleration value WHEN multiplied by time THEN "
          "result is a velocity value") {

  constexpr auto one_s = 1_s;
  constexpr SI::acceleration_t<int64_t, std::ratio<1>> acceleration{1};
  constexpr auto velocity = acceleration * one_s;
  constexpr auto velocity_commutative = one_s * acceleration;

  STATIC_REQUIRE(
      std::is_same<decltype(velocity),
                   const SI::velocity_t<int64_t, std::ratio<1>>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(velocity_commutative), decltype(velocity)>::value);
}

TEST_CASE("GIVEN a velocity value WHEN divided by acceleration THEN result is "
          "a time value") {
  constexpr SI::velocity_t<int64_t, std::ratio<1>> v{1};
  constexpr SI::acceleration_t<int64_t, std::ratio<1>> a{1};

  constexpr auto result = v / a;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::time_single_t<int64_t, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a length value WHEN divided by acceleration THEN result is "
          "a time squared value") {
  constexpr SI::length_t<int64_t, std::ratio<1>> L{1};
  constexpr SI::acceleration_t<int64_t, std::ratio<1>> a{1};

  constexpr auto result = L / a;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::time_squared_t<int64_t, std::ratio<1>>>::value);
}