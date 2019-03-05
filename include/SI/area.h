#pragma once

#include "length.h"

namespace SI {
template <typename _Ratio = std::ratio<1>, typename _Type = int64_t>
using area_t = unit_t<'L', 2, _Ratio, _Type>;

template <typename _Ratio = std::ratio<1>, typename _Type = int64_t>
using volume_t = unit_t<'L', 3, _Ratio, _Type>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_m2() {
  return SI::detail::check_overflow<area_t<std::ratio<1>>, _Digits...>();
}

constexpr auto operator"" _m2(long double m) {
  return area_t<std::ratio<1>, long double>(m);
}

template <char... _Digits> constexpr auto operator""_cm2() {
  return SI::detail::check_overflow<
      area_t<std::ratio_multiply<std::centi, std::centi>>, _Digits...>();
}

constexpr auto operator"" _cm2(long double cm) {
  return area_t<std::ratio_multiply<std::centi, std::centi>, long double>(cm);
}

template <char... _Digits> constexpr auto operator""_mm2() {
  return SI::detail::check_overflow<area_t<std::micro>, _Digits...>();
}

constexpr auto operator"" _mm2(long double mm) {
  return area_t<std::micro, long double>(mm);
}

template <char... _Digits> constexpr auto operator""_m3() {
  return SI::detail::check_overflow<volume_t<std::ratio<1>>, _Digits...>();
}

constexpr auto operator"" _m3(long double m) {
  return volume_t<std::ratio<1>, long double>(m);
}

template <char... _Digits> constexpr auto operator""_cm3() {
  return SI::detail::check_overflow<volume_t<std::ratio<1, 1000000>>,
                                    _Digits...>();
}

constexpr auto operator"" _cm3(long double cm) {
  return volume_t<std::micro, long double>(cm);
}

template <char... _Digits> constexpr auto operator""_mm3() {
  return SI::detail::check_overflow<volume_t<std::nano>, _Digits...>();
}

constexpr auto operator"" _mm3(long double mm) {
  return volume_t<std::nano, long double>(mm);
}

} // namespace literals

} // namespace SI