#include <catch.hpp>

#include <SI/acceleration.h>
#include <SI/time.h>

using namespace SI::literals;

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

TEST_CASE("GIVEN a velocity value WHEN divided by acceleration THEN result is "
          "a time value") {
  constexpr SI::velocity_t<std::ratio<1>, int64_t> v{1};
  constexpr SI::acceleration_t<std::ratio<1>, int64_t> a{1};

  constexpr auto result = v / a;

  static_assert(
      std::is_same<decltype(result),
                   const SI::time_single_t<std::ratio<1>, int64_t>>::value);
}

TEST_CASE("GIVEN a length value WHEN divided by acceleration THEN result is "
          "a time squared value") {
  constexpr SI::length_t<std::ratio<1>, int64_t> L{1};
  constexpr SI::acceleration_t<std::ratio<1>, int64_t> a{1};

  constexpr auto result = L / a;

  static_assert(
      std::is_same<decltype(result),
                   const SI::time_squared_t<std::ratio<1>, int64_t>>::value);
}