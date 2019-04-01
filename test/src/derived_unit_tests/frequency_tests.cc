#include <catch.hpp>

#include <SI/frequency.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aHz THEN result is a "
          "frequency type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fHz THEN result is a "
          "frequency type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pHz THEN result is a "
          "frequency type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nHz THEN result is a "
          "frequency type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uHz THEN result is a "
          "frequency type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mHz THEN result is a "
          "frequency type AND ratio 1 to 1000") {
  constexpr auto one = 1_mHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Hz THEN result is a "
          "frequency type AND ratio 1 to 1") {
  constexpr auto one = 1_Hz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_Hz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kHz THEN result is a "
          "frequency type AND ratio 1000 to 1") {
  constexpr auto one = 1_kHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MHz THEN result is a "
          "frequency type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GHz THEN result is a "
          "frequency type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _THz THEN result is a "
          "frequency type AND ratio 10^12 to 1") {
  constexpr auto one = 1_THz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_THz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PHz THEN result is a "
          "frequency type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EHz THEN result is a "
          "frequency type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EHz;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::frequency_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::exa>>::value);
}