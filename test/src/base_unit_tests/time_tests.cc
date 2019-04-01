#include <catch.hpp>

#include <SI/time.h>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _as THEN result is a "
          "force type AND ratio 1 to 10^15") {
  constexpr auto one = 1_as;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::time_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_as;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::time_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fs THEN result is a "
          "force type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fs;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::time_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fs;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::time_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ps THEN result is a "
          "force type AND ratio 1 to 10^12") {
  constexpr auto one = 1_ps;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::time_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_ps;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::time_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ns THEN result is a "
          "force type AND ratio 1 to 10^9") {
  constexpr auto one = 1_ns;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::time_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_ns;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::time_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _us THEN resulting "
          "value is of time type AND ratio micro") {
  constexpr auto one = 1_us;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::time_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_us;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::time_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ms THEN resulting "
          "value is of time type AND ratio milli") {
  constexpr auto one = 1_ms;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::time_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_ms;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::time_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _s THEN resulting value "
          "is of time type AND ratio 1 to 1") {
  constexpr auto one = 1_s;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::time_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_s;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::time_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _min THEN resulting "
          "value is of time type AND ratio 60 to 1") {
  constexpr auto one = 1_min;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::time_t<int64_t, std::ratio<60, 1>>>::value);

  constexpr auto one_f = 1.0_min;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::time_t<long double, std::ratio<60, 1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _h THEN resulting value "
          "is of time type AND ratio 3600 to 1") {
  constexpr auto one = 1_h;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::time_t<int64_t, std::ratio<3600, 1>>>::value);

  constexpr auto one_f = 1.0_h;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::time_t<long double, std::ratio<3600, 1>>>::value);
}

TEST_CASE(
    "GIVEN a value WHEN constructed with literal _negative duration test") {
  constexpr auto minus_one = -1_s;
  STATIC_REQUIRE(minus_one.raw_value() == -1);
}
