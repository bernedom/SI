#include <catch.hpp>

#include <SI/luminosity.h>
#include <SI/luminous_flux.h>
#include <SI/solid_angle.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _alm THEN result is a "
          "luminous_flux type AND ratio 1 to 10^15") {
  constexpr auto one = 1_alm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_alm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _flm THEN result is a "
          "luminous_flux type AND ratio 1 to 10^15") {
  constexpr auto one = 1_flm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_flm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _plm THEN result is a "
          "luminous_flux type AND ratio 1 to 10^12") {
  constexpr auto one = 1_plm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_plm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nlm THEN result is a "
          "luminous_flux type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ulm THEN result is a "
          "luminous_flux type AND ratio 1 to 10^6") {
  constexpr auto one = 1_ulm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_ulm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mlm THEN result is a "
          "luminous_flux type AND ratio 1 to 1000") {
  constexpr auto one = 1_mlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _lm THEN result is a "
          "luminous_flux type AND ratio 1 to 1") {
  constexpr auto one = 1_lm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_lm;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::luminous_flux_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _klm THEN result is a "
          "luminous_flux type AND ratio 1000 to 1") {
  constexpr auto one = 1_klm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_klm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Mlm THEN result is a "
          "luminous_flux type AND ratio 10^6 to 1") {
  constexpr auto one = 1_Mlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_Mlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Glm THEN result is a "
          "luminous_flux type AND ratio 10^9 to 1") {
  constexpr auto one = 1_Glm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_Glm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Tlm THEN result is a "
          "luminous_flux type AND ratio 10^12 to 1") {
  constexpr auto one = 1_Tlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_Tlm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Plm THEN result is a "
          "luminous_flux type AND ratio 10^15 to 1") {
  constexpr auto one = 1_Plm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_Plm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Elm THEN result is a "
          "luminous_flux type AND ratio 10^18 to 1") {
  constexpr auto one = 1_Elm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminous_flux_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_Elm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminous_flux_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a luminosity value WHEN multiplied with a solid_angle "
    "value THEN result is a luminous_flux value",
    "[luminous_flux][operators]", int64_t, long double) {
  constexpr SI::luminosity_t<TestType, std::ratio<1>> l{1};
  constexpr SI::solid_angle_t<TestType, std::ratio<1>> a{1};

  constexpr auto result = a * l;
  constexpr auto result_commutative = l * a;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::luminous_flux_t<TestType, std::ratio<1>>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a luminous_flux value WHEN divided by solid_angle THEN then "
    "result is a luminosity value",
    "[luminous_flux][operators]", int64_t, long double) {
  constexpr SI::luminous_flux_t<TestType, std::ratio<1>> e{1};
  constexpr SI::solid_angle_t<TestType, std::ratio<1>> l{1};

  constexpr auto result = e / l;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::luminosity_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a luminous_flux value WHEN divided by luminosity THEN then "
    "result is a accelereatin value",
    "[luminous_flux][operators]", int64_t, long double) {
  constexpr SI::luminous_flux_t<TestType, std::ratio<1>> e{1};
  constexpr SI::luminosity_t<TestType, std::ratio<1>> f{1};

  constexpr auto result = e / f;
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::solid_angle_t<TestType, std::ratio<1>>>::value);
}