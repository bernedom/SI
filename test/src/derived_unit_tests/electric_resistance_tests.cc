#include <catch.hpp>

#include <SI/electric_resistance.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aOhm THEN result is a "
          "electric_resistance type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fOhm THEN result is a "
          "electric_resistance type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fOhm;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_resistance_t<
                                                 int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pOhm THEN result is a "
          "electric_resistance type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nOhm THEN result is a "
          "electric_resistance type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uOhm THEN result is a "
          "electric_resistance type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uOhm;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_resistance_t<
                                                 int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mOhm THEN result is a "
          "electric_resistance type AND ratio 1 to 1000") {
  constexpr auto one = 1_mOhm;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_resistance_t<
                                                 int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Ohm THEN result is a "
          "electric_resistance type AND ratio 1 to 1") {
  constexpr auto one = 1_Ohm;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::electric_resistance_t<
                                      int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_Ohm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kOhm THEN result is a "
          "electric_resistance type AND ratio 1000 to 1") {
  constexpr auto one = 1_kOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MOhm THEN result is a "
          "electric_resistance type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GOhm THEN result is a "
          "electric_resistance type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TOhm THEN result is a "
          "electric_resistance type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _POhm THEN result is a "
          "electric_resistance type AND ratio 10^15 to 1") {
  constexpr auto one = 1_POhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_POhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EOhm THEN result is a "
          "electric_resistance type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_potential value WHEN divided by an "
                   "electric_current value THEN "
                   "result is a electric_resistance value",
                   "[electric_resistance][operator/]", int64_t, long double) {
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};
  constexpr SI::electric_current_t<TestType, std::ratio<1>> electric_current{1};

  constexpr auto result = electric_potential / electric_current;

  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_resistance_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_resistance value WHEN multiplied by an "
                   "electric_current value "
                   "THEN result is a electric_potential value",
                   "[electric_resistance][operator*]", int64_t, long double) {
  constexpr SI::electric_resistance_t<TestType, std::ratio<1>>
      electric_resistance{1};
  constexpr SI::electric_current_t<TestType, std::ratio<1>> electric_current{1};

  constexpr auto result = electric_resistance * electric_current;
  constexpr auto result_commutative = electric_current * electric_resistance;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_potential_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_potential value WHEN divided by a "
                   "electric_resistance value THEN "
                   "result is an electric_current value",
                   "[electric_potential][operator/]", int64_t, long double) {
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};
  constexpr SI::electric_resistance_t<TestType, std::ratio<1>>
      electric_resistance{1};

  constexpr auto result = electric_potential / electric_resistance;

  STATIC_REQUIRE(std::is_same<
                 decltype(result),
                 const SI::electric_current_t<TestType, std::ratio<1>>>::value);
}
