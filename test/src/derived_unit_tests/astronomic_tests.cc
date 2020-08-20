#include <catch2/catch.hpp>

#include <SI/astronomic.h>
#include <SI/stream.h>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _AU THEN result is a "
          "length type AND ratio 149597870691 to 1") {
  constexpr auto one = 1_AU;
  STATIC_REQUIRE(
      std::is_same<
          decltype(one),
          const SI::length_t<int64_t, std::ratio<149597870691, 1>>>::value);

  constexpr auto one_f = 1.0_AU;
  STATIC_REQUIRE(
      std::is_same<
          decltype(one_f),
          const SI::length_t<long double, std::ratio<149597870691, 1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ly THEN result is a "
          "length type AND ratio 9460730777119564 to 1") {
  constexpr auto one = 1_ly;
  STATIC_REQUIRE(
      std::is_same<
          decltype(one),
          const SI::length_t<int64_t, std::ratio<9460730777119564, 1>>>::value);

  constexpr auto one_f = 1.0_ly;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double,
                                      std::ratio<9460730777119564, 1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pc THEN result is a "
          "length type AND ratio is 30856775812800000 to 1") {
  constexpr auto one = 1_pc;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::length_t<
                       int64_t, std::ratio<30856775814913700, 1>>>::value);

  constexpr auto one_f = 1.0_pc;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<
                       long double, std::ratio<30856775814913700, 1>>>::value);

  constexpr auto metres = 30.856775814913700_Pm;
  STATIC_REQUIRE(metres == one_f);
}
