#include <SI/length.h>
#include <catch.hpp>

#include <type_traits>

using namespace SI::literals;

namespace SI {
template <class _Ratio = std::ratio<1>, typename _Type = int64_t>
using area_t = unit_t<'L', 2, _Ratio, _Type>;

template <class _Ratio = std::ratio<1>, typename _Type = int64_t>
using volume_t = unit_t<'L', 3, _Ratio, _Type>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_m2() {
  return SI::detail::check_overflow<area_t<std::ratio<1>>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_cm2() {
  return SI::detail::check_overflow<
      area_t<std::ratio_multiply<std::centi, std::centi>>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mm2() {
  return SI::detail::check_overflow<area_t<std::micro>, _Digits...>();
}
} // namespace literals

} // namespace SI

TEST_CASE("Check that exponent for area is 2") {
  constexpr auto l = 1_m;
  constexpr auto a = l * l;

  static_assert(decltype(a)::exponent::value == 2, "area exponent is 2");
  static_assert(std::is_same<decltype(a),
                             const SI::area_t<std::ratio<1>, int64_t>>::value,
                "Result is area type");
}

TEST_CASE("Check that length * lenght * length == exponent 3") {
  constexpr auto l = 1_m;
  constexpr auto v = l * l * l;

  static_assert(decltype(v)::exponent::value == 3, "area exponent is 3");
  static_assert(std::is_same<decltype(v),
                             const SI::volume_t<std::ratio<1>, int64_t>>::value,
                "Result is area type");
}

TEST_CASE("Check that area * length == exponent 3") {
  constexpr auto l = 1_m;
  constexpr auto a = l * l;
  constexpr auto v = a * l;

  static_assert(decltype(v)::exponent::value == 3, "area exponent is 3");
  static_assert(std::is_same<decltype(v),
                             const SI::volume_t<std::ratio<1>, int64_t>>::value,
                "Result is area type");
}

TEST_CASE("mm * mm = mm2, mm2 is 10-6") {
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

TEST_CASE("m * mm = mm2") {
  constexpr auto l = 2_m;
  constexpr auto l_mm = 2_mm;
  constexpr auto a = l * l_mm;
  constexpr auto expected = 4000_mm2;

  /*static_assert(
      std::is_same<decltype(a), const SI::area_t<std::micro, int64_t>>::value,
      "Result is area type");
  static_assert(std::is_same<decltype(a), decltype(expected)>::value,
                "types match");*/
  // static_assert(expected == a, "is 4 micro");
  REQUIRE(a.raw_value() == 4000);
}