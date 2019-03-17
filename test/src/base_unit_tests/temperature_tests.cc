#include <catch.hpp>

#include <SI/temperature.h>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _K THEN result is a "
          "value of temperature type AND ratio 1 to 1") {
  constexpr auto one = 1_K;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::thermodynamic_temperature_t<
                                      int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_K;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::thermodynamic_temperature_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mK THEN result is a "
          "value of temperature type AND ratio 1 to 1000") {
  constexpr auto one = 1_mK;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::thermodynamic_temperature_t<
                                      int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::thermodynamic_temperature_t<
                                        long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kK THEN result is a "
          "value of temperature type ANDratio 1000 to 1") {
  constexpr auto one = 1_kK;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::thermodynamic_temperature_t<
                                      int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::thermodynamic_temperature_t<
                                        long double, std::kilo>>::value);
}
