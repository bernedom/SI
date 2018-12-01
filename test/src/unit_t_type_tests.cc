#include <catch.hpp>

#include <SI/unit.h>

using namespace SI;

TEST_CASE("GIVEN two units of the same type and value WHEN cast from one to "
          "another THEN units stay the same")
{
  constexpr unit_t<'X'> v1{0};

  constexpr auto result = unit_cast<decltype(v1)>(v1);
  static_assert(result == v1, "Result is same as input");
  static_assert(std::is_same<decltype(result), decltype(v1)>::value,
                "casted type is the same");
}