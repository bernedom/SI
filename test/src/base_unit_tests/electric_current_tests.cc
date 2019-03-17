#include <catch.hpp>

#include <SI/electric_current.h>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _A THEN result is a "
          "electric_current type AND ratio 1 to 1") {
  constexpr auto one = 1_A;
  STATIC_REQUIRE(std::is_same<
                 decltype(one),
                 const SI::electric_current_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_A;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_current_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mA THEN result is a "
          "electric_current type AND ratio 1 to 1000") {
  constexpr auto one = 1_mA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kA THEN result is a "
          "electric_current type AND ratio 1000 to 1") {
  constexpr auto one = 1_kA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::kilo>>::value);
}
