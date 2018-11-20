#include <SI/length.h>
#include <SI/area.h>
#include <catch.hpp>

#include <type_traits>

TEST_CASE("multiplying two length values returns in area value")
{
  constexpr auto l = 1_m;
  constexpr auto a = l * l;

  static_assert(
      std::is_same<decltype(a), const SI::area_t<std::ratio<1>>>::value,
      "length * length == area");
}