#include <catch.hpp>

#include <SI/force.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aN THEN result is a "
          "force type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fN THEN result is a "
          "force type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pN THEN result is a "
          "force type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nN THEN result is a "
          "force type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uN THEN result is a "
          "force type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mN THEN result is a "
          "force type AND ratio 1 to 1000") {
  constexpr auto one = 1_mN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _N THEN result is a "
          "force type AND ratio 1 to 1") {
  constexpr auto one = 1_N;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::force_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_N;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kN THEN result is a "
          "force type AND ratio 1000 to 1") {
  constexpr auto one = 1_kN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MN THEN result is a "
          "force type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GN THEN result is a "
          "force type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TN THEN result is a "
          "force type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PN THEN result is a "
          "force type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PN;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::force_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PN;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::force_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EN THEN result is a "
          "force type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EN;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::force_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EN;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::force_t<long double, std::exa>>::value);
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