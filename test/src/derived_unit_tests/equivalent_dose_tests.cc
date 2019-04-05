#include <catch.hpp>

#include <SI/equivalent_dose.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aSv THEN result is a "
          "equivalent_dose type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fSv THEN result is a "
          "equivalent_dose type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fSv;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::equivalent_dose_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pSv THEN result is a "
          "equivalent_dose type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nSv THEN result is a "
          "equivalent_dose type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uSv THEN result is a "
          "equivalent_dose type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uSv;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::equivalent_dose_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mSv THEN result is a "
          "equivalent_dose type AND ratio 1 to 1000") {
  constexpr auto one = 1_mSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mSv;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::equivalent_dose_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Sv THEN result is a "
          "equivalent_dose type AND ratio 1 to 1") {
  constexpr auto one = 1_Sv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_Sv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::equivalent_dose_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kSv THEN result is a "
          "equivalent_dose type AND ratio 1000 to 1") {
  constexpr auto one = 1_kSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MSv THEN result is a "
          "equivalent_dose type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GSv THEN result is a "
          "equivalent_dose type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TSv THEN result is a "
          "equivalent_dose type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PSv THEN result is a "
          "equivalent_dose type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ESv THEN result is a "
          "equivalent_dose type AND ratio 10^18 to 1") {
  constexpr auto one = 1_ESv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_ESv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::exa>>::value);
}
