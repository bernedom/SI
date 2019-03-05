#include <catch.hpp>

#include <SI/acceleration.h>
#include <SI/force.h>
#include <SI/mass.h>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _N; THEN result is a "
          "force value AND ratio is 1") {
  constexpr auto one = 1_N;

  static_assert(std::is_same<decltype(one),
                             const SI::force_t<std::ratio<1>, int64_t>>::value);

  constexpr auto one_f = 1.0_N;

  static_assert(
      std::is_same<decltype(one_f),
                   const SI::force_t<std::ratio<1>, long double>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mN THEN result is a "
          "force value AND ratio is 1/1000") {
  constexpr auto one = 1_mN;
  static_assert(std::is_same<decltype(one),
                             const SI::force_t<std::milli, int64_t>>::value);

  constexpr auto one_f = 1.0_mN;
  static_assert(
      std::is_same<decltype(one_f),
                   const SI::force_t<std::milli, long double>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kN THEN result is a "
          "force value AND ratio is 1000/1") {
  constexpr auto one = 1_kN;
  static_assert(std::is_same<decltype(one),
                             const SI::force_t<std::kilo, int64_t>>::value);

  constexpr auto one_f = 1.0_kN;
  static_assert(std::is_same<decltype(one_f),
                             const SI::force_t<std::kilo, long double>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a mass value WHEN multiplied with a acceleration "
                   "value THEN result is a force value",
                   "[force][operators]", int64_t, long double) {
  constexpr SI::mass_t<std::ratio<1>, TestType> m{1};
  constexpr SI::acceleration_t<std::ratio<1>, TestType> a{1};

  constexpr auto result = m * a;
  constexpr auto result_commutative = a * m;

  static_assert(
      std::is_same<decltype(result),
                   const SI::force_t<std::ratio<1>, TestType>>::value);
  static_assert(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
}

TEMPLATE_TEST_CASE("GIVEN a force value WHEN divided by acceleration THEN then "
                   "result is a mass value",
                   "[force][operators]", int64_t, long double) {
  constexpr SI::force_t<std::ratio<1>, TestType> f{1};
  constexpr SI::acceleration_t<std::ratio<1>, TestType> a{1};

  constexpr auto result = f / a;
  static_assert(std::is_same<decltype(result),
                             const SI::mass_t<std::ratio<1>, TestType>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a force value WHEN divided by mass THEN then "
                   "result is a accelereatin value",
                   "[force][operators]", int64_t, long double) {
  constexpr SI::force_t<std::ratio<1>, TestType> f{1};
  constexpr SI::mass_t<std::ratio<1>, TestType> m{1};

  constexpr auto result = f / m;
  static_assert(
      std::is_same<decltype(result),
                   const SI::acceleration_t<std::ratio<1>, TestType>>::value);
}