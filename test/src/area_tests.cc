#include <SI/area.h>
#include <SI/length.h>
#include <catch.hpp>

#include <type_traits>

TEST_CASE("multiplying two length values returns in area value") {
  constexpr auto l = 1_m;
  constexpr auto a = l * l;

  static_assert(
      std::is_same<decltype(a), const SI::area_t<std::ratio<1>>>::value,
      "length * length == area");
}

TEST_CASE("Check that exponent for area is 2") {
  constexpr auto l = 1_m;
  constexpr auto a = l * l;

  static_assert(decltype(a)::exponent::value == 2, "area exponent is 2");
}