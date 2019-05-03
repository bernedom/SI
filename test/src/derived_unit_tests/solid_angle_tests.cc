#include <catch.hpp>

#include <SI/solid_angle.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _asr THEN result is a "
          "solid angle type AND ratio 1 to 10^15") {
  constexpr auto one = 1_asr;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::solid_angle_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_asr;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::solid_angle_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fsr THEN result is a "
          "solid angle type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fsr;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::solid_angle_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fsr;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::solid_angle_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _psr THEN result is a "
          "solid angle type AND ratio 1 to 10^12") {
  constexpr auto one = 1_psr;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::solid_angle_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_psr;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::solid_angle_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nsr THEN result is a "
          "solid angle type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nsr;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::solid_angle_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nsr;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::solid_angle_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _usr THEN result is a "
          "solid angle type AND ratio 1 to 10^6") {
  constexpr auto one = 1_usr;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::solid_angle_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_usr;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::solid_angle_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _msr THEN result is a "
          "solid angle type AND ratio 1 to 1000") {
  constexpr auto one = 1_msr;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::solid_angle_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_msr;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::solid_angle_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _sr THEN result is a "
          "solid angle type AND ratio 1 to 1") {
  constexpr auto one = 1_sr;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::solid_angle_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_sr;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::solid_angle_t<long double, std::ratio<1>>>::value);
}