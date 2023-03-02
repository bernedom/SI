#include <catch2/catch.hpp>

#include <SI/angle.h>
#include <SI/angular_frequency.h>
#include <SI/frequency.h>
#include <type_traits>

using namespace SI;

TEST_CASE("GIVEN an angle type WHEN divided by a time type THEN result is "
          "angular frequency type") {
  constexpr auto value = 1_rad / 1_s;
  STATIC_REQUIRE(std::is_same<
                 decltype(value),
                 const SI::angular_frequency_t<int64_t, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a frequency type WHEN multiplied by an angle type THEN result "
          "is angle/per time") {
  constexpr auto value = 1_Hz * 1_rad;
  STATIC_REQUIRE(std::is_same<
                 decltype(value),
                 const SI::angular_frequency_t<int64_t, std::ratio<1>>>::value);
}

// TEST_CASE("GIVEN a frequency type WHEN multiplied by an angle type THEN
// result "
//           "is angle/per time") {
//   constexpr auto value = 1_Hz * 1_rad;
//   STATIC_REQUIRE(std::is_same<decltype(value),
//                               const SI::angle_t<int64_t, std::ratio<1, 1>,
//                                                 std::ratio<1, 1>>>::value);
// }