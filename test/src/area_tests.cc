#include <area.h>
#include <catch.hpp>
#include <length.h>

#include <type_traits>

TEST_CASE("multiplying two length values returns in area value") {
  auto l = 1_m;

  auto a = l * l;

  REQUIRE(std::is_same<decltype(a), area_t<std::ratio<1>>>::value);
  // REQUIRE(decltype(a) == decltype(areat_t<std::ratio<1>>););
}