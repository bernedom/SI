#include <catch.hpp>

#include <SI/acceleration.h>
#include <SI/force.h>
#include <SI/mass.h>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _N; THEN result is a "
          "force value AND ratio is 1") {
  constexpr auto one = 1_N;

  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::force_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_N;

  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mN THEN result is a "
          "force value AND ratio is 1/1000") {
  constexpr auto one = 1_mN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kN THEN result is a "
          "force value AND ratio is 1000/1") {
  constexpr auto one = 1_kN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::kilo>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a mass value WHEN multiplied with a acceleration "
                   "value THEN result is a force value",
                   "[force][operators]", int64_t, long double) {
  constexpr SI::mass_t<TestType, std::ratio<1>> m{1};
  constexpr SI::acceleration_t<TestType, std::ratio<1>> a{1};

  constexpr auto result = m * a;
  constexpr auto result_commutative = a * m;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::force_t<TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
}

TEMPLATE_TEST_CASE("GIVEN a force value WHEN divided by acceleration THEN then "
                   "result is a mass value",
                   "[force][operators]", int64_t, long double) {
  constexpr SI::force_t<TestType, std::ratio<1>> f{1};
  constexpr SI::acceleration_t<TestType, std::ratio<1>> a{1};

  constexpr auto result = f / a;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::mass_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a force value WHEN divided by mass THEN then "
                   "result is a accelereatin value",
                   "[force][operators]", int64_t, long double) {
  constexpr SI::force_t<TestType, std::ratio<1>> f{1};
  constexpr SI::mass_t<TestType, std::ratio<1>> m{1};

  constexpr auto result = f / m;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::acceleration_t<TestType, std::ratio<1>>>::value);
}