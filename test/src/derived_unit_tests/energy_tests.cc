#include <catch.hpp>

#include <SI/energy.h>
#include <SI/pressure.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aJ THEN result is a "
          "energy type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aJ;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::energy_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aJ;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::energy_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fJ THEN result is a "
          "energy type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fJ;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::energy_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fJ;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::energy_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pJ THEN result is a "
          "energy type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pJ;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::energy_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pJ;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::energy_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nJ THEN result is a "
          "energy type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nJ;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::energy_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nJ;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::energy_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uJ THEN result is a "
          "energy type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uJ;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::energy_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uJ;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::energy_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mJ THEN result is a "
          "energy type AND ratio 1 to 1000") {
  constexpr auto one = 1_mJ;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::energy_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mJ;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::energy_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _J THEN result is a "
          "energy type AND ratio 1 to 1") {
  constexpr auto one = 1_J;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::energy_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_J;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::energy_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kJ THEN result is a "
          "energy type AND ratio 1000 to 1") {
  constexpr auto one = 1_kJ;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::energy_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kJ;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::energy_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MJ THEN result is a "
          "energy type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MJ;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::energy_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MJ;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::energy_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GJ THEN result is a "
          "energy type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GJ;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::energy_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GJ;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::energy_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TJ THEN result is a "
          "energy type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TJ;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::energy_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TJ;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::energy_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PJ THEN result is a "
          "energy type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PJ;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::energy_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PJ;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::energy_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EJ THEN result is a "
          "energy type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EJ;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::energy_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EJ;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::energy_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a force value WHEN multiplied with a length "
                   "value THEN result is a energy value",
                   "[energy][operators]", int64_t, long double) {
  constexpr SI::force_t<TestType, std::ratio<1>> f{1};
  constexpr SI::length_t<TestType, std::ratio<1>> l{1};

  constexpr auto result = f * l;
  constexpr auto result_commutative = l * f;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::energy_t<TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
}

TEMPLATE_TEST_CASE("GIVEN a energy value WHEN divided by length THEN then "
                   "result is a force value",
                   "[energy][operators]", int64_t, long double) {
  constexpr SI::energy_t<TestType, std::ratio<1>> e{1};
  constexpr SI::length_t<TestType, std::ratio<1>> l{1};

  constexpr auto result = e / l;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::force_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a energy value WHEN divided by force THEN then "
                   "result is a accelereatin value",
                   "[energy][operators]", int64_t, long double) {
  constexpr SI::energy_t<TestType, std::ratio<1>> e{1};
  constexpr SI::force_t<TestType, std::ratio<1>> f{1};

  constexpr auto result = e / f;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::length_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a pressure value WHEN multiplied with a volume "
                   "value THEN result is a energy value",
                   "[energy][operators]", int64_t, long double) {
  constexpr SI::pressure_t<TestType, std::ratio<1>> p{1};
  constexpr SI::volume_t<TestType, std::ratio<1>> v{1};

  constexpr auto result = p * v;
  constexpr auto result_commutative = v * p;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::energy_t<TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
}

TEMPLATE_TEST_CASE("GIVEN a energy value WHEN divided by volume THEN then "
                   "result is a pressure value",
                   "[energy][operators]", int64_t, long double) {
  constexpr SI::energy_t<TestType, std::ratio<1>> e{1};
  constexpr SI::volume_t<TestType, std::ratio<1>> v{1};

  constexpr auto result = e / v;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::pressure_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a energy value WHEN divided by pressure THEN then "
                   "result is a accelereatin value",
                   "[energy][operators]", int64_t, long double) {
  constexpr SI::energy_t<TestType, std::ratio<1>> e{1};
  constexpr SI::pressure_t<TestType, std::ratio<1>> p{1};

  constexpr auto result = e / p;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::volume_t<TestType, std::ratio<1>>>::value);
}
