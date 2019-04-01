#include <catch.hpp>

#include <SI/electric_charge.h>
#include <SI/electric_potential.h>
#include <SI/energy.h>
#include <SI/power.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aV THEN result is a "
          "electric_potential type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fV THEN result is a "
          "electric_potential type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pV THEN result is a "
          "electric_potential type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nV THEN result is a "
          "electric_potential type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uV THEN result is a "
          "electric_potential type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mV THEN result is a "
          "electric_potential type AND ratio 1 to 1000") {
  constexpr auto one = 1_mV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _V THEN result is a "
          "electric_potential type AND ratio 1 to 1") {
  constexpr auto one = 1_V;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::electric_potential_t<
                                      int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_V;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kV THEN result is a "
          "electric_potential type AND ratio 1000 to 1") {
  constexpr auto one = 1_kV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MV THEN result is a "
          "electric_potential type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GV THEN result is a "
          "electric_potential type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TV THEN result is a "
          "electric_potential type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PV THEN result is a "
          "electric_potential type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EV THEN result is a "
          "electric_potential type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EV;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_potential_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a power value WHEN divided by an electric_current value THEN "
    "result is a electric_potential value",
    "[electric_potential][operator/]", int64_t, long double) {
  constexpr SI::power_t<TestType, std::ratio<1>> power{1};
  constexpr SI::electric_current_t<TestType, std::ratio<1>> electric_current{1};

  constexpr auto result = power / electric_current;

  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_potential_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_potential value WHEN multiplied by an "
                   "electric_current value "
                   "THEN result is a power value",
                   "[electric_potential][operator*]", int64_t, long double) {
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};
  constexpr SI::electric_current_t<TestType, std::ratio<1>> electric_current{1};

  constexpr auto result = electric_potential * electric_current;
  constexpr auto result_commutative = electric_current * electric_potential;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::power_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a power value WHEN divided by a electric_potential value THEN "
    "result is an electric_current value",
    "[power][operator/]", int64_t, long double) {
  constexpr SI::power_t<TestType, std::ratio<1>> power{1};
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};

  constexpr auto result = power / electric_potential;

  STATIC_REQUIRE(std::is_same<
                 decltype(result),
                 const SI::electric_current_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a energy value WHEN divided by an electric_charge value THEN "
    "result is a electric_potential value",
    "[electric_potential][operator/]", int64_t, long double) {
  constexpr SI::energy_t<TestType, std::ratio<1>> energy{1};
  constexpr SI::electric_charge_t<TestType, std::ratio<1>> electric_charge{1};

  constexpr auto result = energy / electric_charge;

  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_potential_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_potential value WHEN multiplied by an "
                   "electric_charge value "
                   "THEN result is a energy value",
                   "[electric_potential][operator*]", int64_t, long double) {
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};
  constexpr SI::electric_charge_t<TestType, std::ratio<1>> electric_charge{1};

  constexpr auto result = electric_potential * electric_charge;
  constexpr auto result_commutative = electric_charge * electric_potential;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::energy_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a energy value WHEN divided by a electric_potential value THEN "
    "result is an electric_charge value",
    "[energy][operator/]", int64_t, long double) {
  constexpr SI::energy_t<TestType, std::ratio<1>> energy{1};
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};

  constexpr auto result = energy / electric_potential;

  STATIC_REQUIRE(std::is_same<
                 decltype(result),
                 const SI::electric_charge_t<TestType, std::ratio<1>>>::value);
}