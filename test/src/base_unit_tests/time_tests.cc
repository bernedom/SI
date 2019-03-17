#include <catch.hpp>

#include <SI/time.h>
#include <ratio>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _s THEN resulting value "
          "is of time type AND ratio 1 to 1") {
  constexpr auto one = 1_s;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::time_single_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_s;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::time_single_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _us THEN resulting "
          "value is of time type AND ratio micro") {
  constexpr auto one = 1_us;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::time_single_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_us;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::time_single_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ms THEN resulting "
          "value is of time type AND ratio milli") {
  constexpr auto one = 1_ms;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::time_single_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_ms;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::time_single_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _min THEN resulting "
          "value is of time type AND ratio 60 to 1") {
  constexpr auto one = 1_min;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::time_single_t<int64_t, std::ratio<60, 1>>>::value);

  constexpr auto one_f = 1.0_min;
  STATIC_REQUIRE(
      std::is_same<
          decltype(one_f),
          const SI::time_single_t<long double, std::ratio<60, 1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _h THEN resulting value "
          "is of time type AND ratio 3600 to 1") {
  constexpr auto one = 1_h;
  STATIC_REQUIRE(std::is_same<
                 decltype(one),
                 const SI::time_single_t<int64_t, std::ratio<3600, 1>>>::value);

  constexpr auto one_f = 1.0_h;
  STATIC_REQUIRE(
      std::is_same<
          decltype(one_f),
          const SI::time_single_t<long double, std::ratio<3600, 1>>>::value);
}

TEST_CASE(
    "GIVEN a value WHEN constructed with literal _negative duration test") {
  constexpr auto minus_one = -1_s;
  STATIC_REQUIRE(minus_one.raw_value() == -1);
}
