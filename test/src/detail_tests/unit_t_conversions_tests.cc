#include <catch2/catch.hpp>

#include <SI/detail/unit.h>

#include <type_traits>

using namespace SI::detail;

TEST_CASE("GIVEN a declared unit of type int64_t WHEN copy-constructed "
          "with a unit of type int8_t THEN value is implicitly converted") {

  constexpr unit_t<'X', 1, int8_t> v_int8{1};
  constexpr unit_t<'X', 1, int64_t> v_int(v_int8);

  STATIC_REQUIRE(std::is_same<decltype(v_int)::internal_type, int64_t>::value);
  STATIC_REQUIRE(v_int.raw_value() == 1);
}

TEST_CASE("GIVEN a declared unit of long double WHEN assigned a unit of type "
          "int64_t THEN value is implicitely converted") {
  constexpr unit_t<'X', 1, int64_t> v_int64{1};
  constexpr unit_t<'X', 1, long double> v_double = v_int64;

  STATIC_REQUIRE(
      std::is_same<decltype(v_double)::internal_type, long double>::value);
}

  double dd = i;
  REQUIRE(dd > 0);