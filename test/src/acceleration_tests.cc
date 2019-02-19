#include <catch.hpp>

#include <SI/acceleration.h>
#include <SI/time.h>

using namespace SI::literals;

/// @todo add decay to L, a and t&2

TEST_CASE("GIVEN velocity value WHEN divided by time value THEN result is "
          "an acceleration value") {

  constexpr SI::velocity_t<std::ratio<1>, int64_t> one_ms{1};
  constexpr auto acceleration = one_ms / 1_s;

  static_assert(
      std::is_same<decltype(acceleration),
                   const SI::acceleration_t<std::ratio<1>, int64_t>>::value);
}

TEST_CASE("GIVEN a length value WHEN divided by time squared THEN result is an "
          "acceleration value") {
  constexpr auto one_m = 1_m;
  constexpr auto one_square_s = 1_s * 1_s;
  constexpr auto acceleration = one_m / one_square_s;

  static_assert(
      std::is_same<decltype(acceleration),
                   const SI::acceleration_t<std::ratio<1>, int64_t>>::value);
}

TEST_CASE("GIVEN an acceleration value WHEN multiplied by time squared THEN "
          "result is a length value") {

  constexpr auto one_square_s = 1_s * 1_s;
  constexpr auto acceleration = 1_m / one_square_s;
  constexpr auto length = acceleration * one_square_s;
  constexpr auto length_commutative = one_square_s * acceleration;

  static_assert(
      std::is_same<decltype(length),
                   const SI::length_t<std::ratio<1>, int64_t>>::value);
  static_assert(
      std::is_same<decltype(length_commutative),
                   const SI::length_t<std::ratio<1>, int64_t>>::value);
}

TEST_CASE("GIVEN an acceleration value WHEN multiplied by time THEN "
          "result is a velocity value") {

  constexpr auto one_s = 1_s;
  constexpr SI::acceleration_t<std::ratio<1>, int64_t> acceleration{1};
  constexpr auto velocity = acceleration * one_s;
  constexpr auto velocity_commutative = one_s * acceleration;

  static_assert(
      std::is_same<decltype(velocity),
                   const SI::velocity_t<std::ratio<1>, int64_t>>::value);
  static_assert(
      std::is_same<decltype(velocity_commutative), decltype(velocity)>::value);
}

TEST_CASE("GIVEN an acceleration value WHEN multiplied by velocity THEN "
          "result is a time value") {

  constexpr SI::velocity_t<std::ratio<1>, int64_t> velocity{1};
  constexpr SI::acceleration_t<std::ratio<1>, int64_t> acceleration{1};
  constexpr auto time = acceleration * velocity;
  constexpr auto time_commutative = velocity * acceleration;

  static_assert(
      std::is_same<decltype(time),
                   const SI::time_t<1, std::ratio<1>, int64_t>>::value);
  static_assert(
      std::is_same<decltype(time_commutative), decltype(time)>::value);
}