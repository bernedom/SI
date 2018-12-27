

#include <catch.hpp>

#include <SI/conversions.h>

using namespace SI::literals;

TEST_CASE("GIVEN values electric current (I) and a time (T) WHEN multiplied "
          "THEN result is electric charge (Q)")
{
  constexpr auto current = 1_A;
  constexpr auto time = 2_s;
  constexpr auto result = current * time;

  static_assert(
      std::is_same<decltype(result),
                   const SI::electric_charge_t<1, std::ratio<1>>>::value,
      "Result is electric charge");
}