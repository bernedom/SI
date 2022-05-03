#include <catch2/catch.hpp>

#include <SI/area.h>
#include <SI/time.h>

#include <SI/flow.h>

using namespace SI::literals;

TEST_CASE("GIVEN an area value WHEN divided by a time value THEN the result "
          "is a surface_flow") {
  constexpr auto area = 1_m2;
  constexpr auto time = 1_s;
  constexpr auto result = area / time;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::surface_flow_t<int64_t, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN surface_flow value WHEN multiplied with time THEN result is a "
    "area value",
    "[length][operator_tests]", int64_t, long double) {

  constexpr SI::surface_flow_t<TestType, std::ratio<1>> v{1};
  constexpr SI::time_t<TestType, std::ratio<1>> T{1};

  constexpr auto result = v * T;
  constexpr auto result_commutative = T * v;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::area_t<TestType, std::ratio<1>>>::value);

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
}

TEST_CASE("GIVEN an volume value WHEN divided by a time value THEN the result "
          "is a surface_flow") {
  constexpr auto volume = 1_m3;
  constexpr auto time = 1_s;
  constexpr auto result = volume / time;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::volumetric_flow_t<int64_t, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN surface_flow value WHEN multiplied with time THEN result is a "
    "volume value",
    "[length][operator_tests]", int64_t, long double) {

  constexpr SI::volumetric_flow_t<TestType, std::ratio<1>> v{1};
  constexpr SI::time_t<TestType, std::ratio<1>> T{1};

  constexpr auto result = v * T;
  constexpr auto result_commutative = T * v;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::volume_t<TestType, std::ratio<1>>>::value);

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
}