#include <catch.hpp>

#include <SI/force.h>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _N; THEN result is an "
          "electric charge AND ratio is 1") {
  constexpr auto one = 1_N;

  static_assert(std::is_same<decltype(one),
                             const SI::force_t<std::ratio<1>, int64_t>>::value);

  constexpr auto one_f = 1.0_N;

  static_assert(
      std::is_same<decltype(one_f),
                   const SI::force_t<std::ratio<1>, long double>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mN THEN result is an "
          "electric charge AND ratio is 1/1000") {
  constexpr auto one = 1_mN;

  static_assert(std::is_same<decltype(one),
                             const SI::force_t<std::milli, int64_t>>::value);

  constexpr auto one_f = 1.0_mN;

  static_assert(
      std::is_same<decltype(one_f),
                   const SI::force_t<std::milli, long double>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kN THEN result is an "
          "electric charge AND ratio is 1000/1") {
  constexpr auto one = 1_kN;
  static_assert(std::is_same<decltype(one),
                             const SI::force_t<std::kilo, int64_t>>::value);

  constexpr auto one_f = 1.0_kN;
  static_assert(std::is_same<decltype(one_f),
                             const SI::force_t<std::kilo, long double>>::value);
}