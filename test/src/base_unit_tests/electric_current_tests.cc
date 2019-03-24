#include <catch.hpp>

#include <SI/electric_current.h>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _aA THEN result is a "
          "electric_current type AND ratio 1 to 10^18") {
  constexpr auto one = 1_aA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fA THEN result is a "
          "electric_current type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pA THEN result is a "
          "electric_current type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nA THEN result is a "
          "electric_current type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uA THEN result is a "
          "electric_current type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::micro>>::value);
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

TEST_CASE("GIVEN a value WHEN constructed with literal _MA THEN result is a "
          "electric_current type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GA THEN result is a "
          "electric_current type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TA THEN result is a "
          "electric_current type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PA THEN result is a "
          "electric_current type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EA THEN result is a "
          "electric_current type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EA;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::electric_current_t<long double, std::exa>>::value);
}
