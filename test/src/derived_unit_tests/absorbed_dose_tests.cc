#include <catch.hpp>

#include <SI/absorbed_dose.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aGy THEN result is a "
          "absorbed_dose type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fGy THEN result is a "
          "absorbed_dose type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pGy THEN result is a "
          "absorbed_dose type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nGy THEN result is a "
          "absorbed_dose type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uGy THEN result is a "
          "absorbed_dose type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mGy THEN result is a "
          "absorbed_dose type AND ratio 1 to 1000") {
  constexpr auto one = 1_mGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Gy THEN result is a "
          "absorbed_dose type AND ratio 1 to 1") {
  constexpr auto one = 1_Gy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_Gy;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::absorbed_dose_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kGy THEN result is a "
          "absorbed_dose type AND ratio 1000 to 1") {
  constexpr auto one = 1_kGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MGy THEN result is a "
          "absorbed_dose type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GGy THEN result is a "
          "absorbed_dose type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TGy THEN result is a "
          "absorbed_dose type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PGy THEN result is a "
          "absorbed_dose type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EGy THEN result is a "
          "absorbed_dose type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::exa>>::value);
}
