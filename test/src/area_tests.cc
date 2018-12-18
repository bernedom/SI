#include <SI/length.h>
#include <catch.hpp>

#include <type_traits>

using namespace SI::literals;

TEST_CASE("Check that exponent for area is 2")
{
  constexpr auto l = 1_m;
  constexpr auto a = l * l;

  static_assert(decltype(a)::exponent::value == 2, "area exponent is 2");
}

TEST_CASE("Check that length * lenght * length == exponent 3")
{
  constexpr auto l = 1_m;
  constexpr auto a = l * l * l;

  static_assert(decltype(a)::exponent::value == 3, "area exponent is 3");
}

TEST_CASE("Check that area * length == exponent 3")
{
  constexpr auto l = 1_m;
  constexpr auto a = l * l;
  constexpr auto v = a * l;

  static_assert(decltype(v)::exponent::value == 3, "area exponent is 3");
}
