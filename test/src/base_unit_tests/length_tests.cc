#include <catch.hpp>

#include <SI/length.h>

using namespace SI;

TEST_CASE("GIVEN a value WHEN constructed with literal _am THEN result is a "
          "length type AND ratio 1 to 10^18") {
  constexpr auto one = 1_am;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_am;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pm THEN result is a "
          "length type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pm THEN result is a "
          "length type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nm THEN result is a "
          "length type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _um THEN result is a "
          "length type AND ratio 1 to 10^6") {
  constexpr auto one = 1_um;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_um;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mm THEN result is a "
          "length type AND ratio 1 to 1000") {
  constexpr auto one = 1_mm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _cm  THEN result is a "
          "length type ratio 1 to 100") {

  constexpr auto one = 1_cm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::centi>>::value);
  constexpr auto one_f = 1.0_cm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::centi>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _m THEN result is a "
          "length type AND ratio 1 to 1") {
  constexpr auto one = 1_m;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::length_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_m;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _km THEN result is a "
          "length type AND ratio 1000 to 1") {
  constexpr auto one = 1_km;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_km;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Mm THEN result is a "
          "length type AND ratio 10^6 to 1") {
  constexpr auto one = 1_Mm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_Mm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Gm THEN result is a "
          "length type AND ratio 10^9 to 1") {
  constexpr auto one = 1_Gm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_Gm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Tm THEN result is a "
          "length type AND ratio 10^12 to 1") {
  constexpr auto one = 1_Tm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_Tm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Pm THEN result is a "
          "length type AND ratio 10^15 to 1") {
  constexpr auto one = 1_Pm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_Pm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Em THEN result is a "
          "length type AND ratio 10^18 to 1") {
  constexpr auto one = 1_Em;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_Em;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::exa>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _km THEN it is one "
          "thousand _m") {
  constexpr auto one_k = 1_km;
  constexpr auto one_m = 1_m;
  STATIC_REQUIRE(one_k == (one_m * 1000));
}

TEST_CASE(
    "GIVEN a value WHEN constructed with literal _m THEN result is 100 cm") {
  constexpr auto one_cm = 1_cm;
  constexpr auto one_m = 1_m;

  STATIC_REQUIRE(one_m == one_cm * 100);
}

TEST_CASE(
    "GIVEN a value WHEN constructed with literal _cm THEN result is 10 mm") {
  constexpr auto one_cm = 1_cm;
  constexpr auto one_mm = 1_mm;

  STATIC_REQUIRE(one_cm == one_mm * 10);
}

TEST_CASE("GIVEN a value of 1m WHEN multiplied with -1 THEN result is -1m") {
  constexpr auto one_m = 1_m;
  constexpr auto neg_one_m = -1_m;

  STATIC_REQUIRE(one_m * -1 == neg_one_m);
}
