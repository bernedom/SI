#include <catch.hpp>

#include <length.h>

TEST_CASE("one km is tousand m") {
  const auto one_k = 1_km;
  const auto one_m = 1_m;
  REQUIRE(one_k == (one_m * 1000));
}

TEST_CASE("one m is 100 cm") {
  const auto one_cm = 1_cm;
  const auto one_m = 1_m;

  REQUIRE(one_m == one_cm * 100);
}