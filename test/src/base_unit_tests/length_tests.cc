#include <catch.hpp>

#include <SI/length.h>

using namespace SI;

TEST_CASE("GIVEN a value WHEN constructed with literal _m  THEN result is a "
          "length type ratio 1 to 1 ") {

  constexpr auto one = 1_m;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::length_t<int64_t, std::ratio<1>>>::value);
  constexpr auto one_f = 1.0_m;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _km  THEN result is a "
          "length type ratio 1000 to 1") {
  constexpr auto one = 1_km;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_km;

  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mm  THEN result is a "
          "length type ratio 1 to 1000") {

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

/* Examples commented out fail to compile
TEST_CASE("Assert on overflow for
m") { REQUIRE_THROWS(0xffffffffffffffff_m); } TEST_CASE("GIVEN a value WHEN
constructed with literal _Assert on overflow for km") {
  REQUIRE_THROWS(0xffffffffffffffff_km);
}
TEST_CASE("_Assert on overflow for
cm") { REQUIRE_THROWS(0xffffffffffffffff_cm);
}
TEST_CASE("_Assert on overflow for
mm") { REQUIRE_THROWS(0xffffffffffffffff_mm);
}
*/