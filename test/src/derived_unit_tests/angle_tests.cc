#include <catch.hpp>

#include <SI/angle.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _arad THEN result is a "
          "angle type AND ratio 1 to 10^15") {
  constexpr auto one = 1_arad;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::angle_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_arad;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::angle_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _frad THEN result is a "
          "angle type AND ratio 1 to 10^15") {
  constexpr auto one = 1_frad;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::angle_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_frad;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::angle_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _prad THEN result is a "
          "angle type AND ratio 1 to 10^12") {
  constexpr auto one = 1_prad;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::angle_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_prad;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::angle_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nrad THEN result is a "
          "angle type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nrad;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::angle_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nrad;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::angle_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _urad THEN result is a "
          "angle type AND ratio 1 to 10^6") {
  constexpr auto one = 1_urad;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::angle_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_urad;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::angle_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mrad THEN result is a "
          "angle type AND ratio 1 to 1000") {
  constexpr auto one = 1_mrad;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::angle_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mrad;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::angle_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _rad THEN result is a "
          "angle type AND ratio 1 to 1") {
  constexpr auto one = 1_rad;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::angle_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_rad;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::angle_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a 1 atto radiant WHEN passed to a streaming operator THEN "
          "result is '1arad'") {
  constexpr auto value = 1_arad;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1arad");
}

TEST_CASE("GIVEN a 1 femto radiant WHEN passed to a streaming operator THEN "
          "result is '1frad'") {
  constexpr auto value = 1_frad;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1frad");
}

TEST_CASE("GIVEN a 1 pico radiant WHEN passed to a streaming operator THEN "
          "result is '1prad'") {
  constexpr auto value = 1_prad;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1prad");
}

TEST_CASE("GIVEN a 1 nano radiant WHEN passed to a streaming operator THEN "
          "result is '1prad'") {
  constexpr auto value = 1_nrad;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1nrad");
}

TEST_CASE("GIVEN a 1 micro radiant WHEN passed to a streaming operator THEN "
          "result is '1urad'") {
  constexpr auto value = 1_urad;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1urad");
}

TEST_CASE("GIVEN a 1 milli radiant WHEN passed to a streaming operator THEN "
          "result is '1mrad'") {
  constexpr auto value = 1_mrad;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1mrad");
}

TEST_CASE(
    "GIVEN a 1 radiant WHEN passed to a streaming operator THEN result is "
    "'1rad'") {
  constexpr auto value = 1_rad;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1rad");
}