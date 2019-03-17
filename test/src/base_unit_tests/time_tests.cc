#include <catch.hpp>

#include <SI/time.h>
#include <ratio>

using namespace SI::literals;

/// @todo add test for return type

TEST_CASE("GIVEN a value WHEN constructed with literal _s THEN resulting value "
          "is of time type AND ratio 1 to 1") {
  constexpr auto one = 1_s;
  STATIC_REQUIRE(decltype(one)::ratio::num == 1);
  STATIC_REQUIRE(decltype(one)::ratio::den == 1);

  constexpr auto one_f = 1.0_s;

  STATIC_REQUIRE(decltype(one_f)::ratio::num == 1);
  STATIC_REQUIRE(decltype(one_f)::ratio::den == 1);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _us THEN resulting "
          "value is of time type AND ratio micro") {
  constexpr auto one = 1_us;
  STATIC_REQUIRE(std::ratio_equal<decltype(one)::ratio, std::micro>::value);

  constexpr auto one_f = 1.0_us;
  STATIC_REQUIRE(std::ratio_equal<decltype(one_f)::ratio, std::micro>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ms THEN resulting "
          "value is of time type AND ratio milli") {
  constexpr auto one = 1_ms;
  STATIC_REQUIRE(std::ratio_equal<decltype(one)::ratio, std::milli>::value);

  constexpr auto one_f = 1.0_ms;
  STATIC_REQUIRE(std::ratio_equal<decltype(one_f)::ratio, std::milli>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _min THEN resulting "
          "value is of time type AND ratio 60 to 1") {
  constexpr auto one = 1_min;
  STATIC_REQUIRE(decltype(one)::ratio::num == 60);
  STATIC_REQUIRE(decltype(one)::ratio::den == 1);

  constexpr auto one_f = 1.0_min;
  STATIC_REQUIRE(decltype(one_f)::ratio::num == 60);
  STATIC_REQUIRE(decltype(one_f)::ratio::den == 1);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _h THEN resulting value "
          "is of time type AND ratio 3600 to 1") {
  constexpr auto one = 1_h;
  STATIC_REQUIRE(
      std::ratio_equal<decltype(one)::ratio, std::ratio<3600, 1>>::value);

  constexpr auto one_f = 1.0_h;
  STATIC_REQUIRE(
      std::ratio_equal<decltype(one_f)::ratio, std::ratio<3600, 1>>::value);
}

TEST_CASE(
    "GIVEN a value WHEN constructed with literal _negative duration test") {
  constexpr auto minus_one = -1_s;
  STATIC_REQUIRE(minus_one.raw_value() == -1);
}
