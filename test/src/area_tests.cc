#include <SI/area.h>
#include <catch.hpp>

#include <type_traits>

using namespace SI::literals;

TEST_CASE("GIVEN two length values in meters WHEN multiplied THEN result is "
          "square meters") {
  constexpr auto l = 1_m;
  constexpr auto a = l * l;

  static_assert(decltype(a)::exponent::value == 2, "area exponent is 2");
  static_assert(std::is_same<decltype(a),
                             const SI::area_t<std::ratio<1>, int64_t>>::value,
                "Result is area type");
}

TEST_CASE("GIVEN three length values WHEN multiplied THEN result is volume") {
  constexpr auto l = 1_m;
  constexpr auto v = l * l * l;

  static_assert(decltype(v)::exponent::value == 3, "area exponent is 3");
  static_assert(std::is_same<decltype(v),
                             const SI::volume_t<std::ratio<1>, int64_t>>::value,
                "Result is area type");
}

TEST_CASE("GIVEN an area value AND a length value WHEN multiplied THEN result "
          "is volume type") {
  constexpr auto l = 1_m;
  constexpr auto a = l * l;
  constexpr auto v = a * l;

  static_assert(decltype(v)::exponent::value == 3, "area exponent is 3");
  static_assert(std::is_same<decltype(v),
                             const SI::volume_t<std::ratio<1>, int64_t>>::value,
                "Result is area type");
}

TEST_CASE("GIVEN two length values AND ratio is 10^-3 WHEN multiplied THEN "
          "ratio of result is 10^-6") {
  constexpr auto l = 2_mm;
  constexpr auto a = l * l;
  constexpr auto expected = 4_mm2;

  static_assert(
      std::is_same<decltype(a), const SI::area_t<std::micro, int64_t>>::value,
      "Result is area type");
  static_assert(std::is_same<decltype(a), decltype(expected)>::value,
                "types match");
  static_assert(expected == a, "is 4 micro");
}

TEST_CASE("GIVEN a lenght value with ratio 1 AND a length value with ratio "
          "10^-3 WHEN multiplied THEN ratio of result is 10^-6") {
  constexpr auto l = 2_m;
  constexpr auto l_mm = 2_mm;
  constexpr auto a = l * l_mm;
  constexpr auto a_commutative = l_mm * l;
  constexpr auto expected = 4000_mm2;

  static_assert(
      std::is_same<decltype(a), const SI::area_t<std::micro, int64_t>>::value,
      "Result is area type");
  static_assert(std::is_same<decltype(a), decltype(expected)>::value,
                "types match");
  static_assert(expected == a, "is 4 micro");
  static_assert(a == a_commutative, "Commutative operation is equal");
  static_assert(a_commutative == a, "inverse commutative operation is equal");
}