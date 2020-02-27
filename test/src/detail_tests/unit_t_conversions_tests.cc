#include <catch2/catch.hpp>

#include <SI/detail/unit.h>

#include <type_traits>

using namespace SI::detail;

TEST_CASE("GIVEN a declared unit of type int64_t WHEN copy-constructed "
          "with a unit of type int8_t THEN value is implicitly converted") {

  constexpr unit_t<'X', 1, int8_t> v_int8{1};
  constexpr unit_t<'X', 1, int64_t> v_int(v_int8);

  STATIC_REQUIRE(std::is_same<decltype(v_int)::internal_type, int64_t>::value);
}
