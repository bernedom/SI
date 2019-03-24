#include <catch.hpp>

#include <SI/temperature.h>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _aK THEN result is a "
          "temperature type AND ratio 1 to 10^18") {
  constexpr auto one = 1_aK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pK THEN result is a "
          "temperature type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pK THEN result is a "
          "temperature type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nK THEN result is a "
          "temperature type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uK THEN result is a "
          "temperature type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mK THEN result is a "
          "temperature type AND ratio 1 to 1000") {
  constexpr auto one = 1_mK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _K THEN result is a "
          "temperature type AND ratio 1 to 1") {
  constexpr auto one = 1_K;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_K;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kK THEN result is a "
          "temperature type AND ratio 1000 to 1") {
  constexpr auto one = 1_kK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MK THEN result is a "
          "temperature type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GK THEN result is a "
          "temperature type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TK THEN result is a "
          "temperature type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PK THEN result is a "
          "temperature type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EK THEN result is a "
          "temperature type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::exa>>::value);
}
