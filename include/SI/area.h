#pragma once

#include "length.h"

namespace SI {
template <typename _Type, typename _Ratio = std::ratio<1>>
using area_t = detail::unit_t<'L', 2, _Type, _Ratio>;

template <typename _Type, typename _Ratio = std::ratio<1>>
using volume_t = detail::unit_t<'L', 3, _Type, _Ratio>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_m2() {
  return SI::detail::check_overflow<area_t<int64_t, std::ratio<1>>,
                                    _Digits...>();
}

constexpr auto operator"" _m2(long double m) {
  return area_t<long double, std::ratio<1>>(m);
}

template <char... _Digits> constexpr auto operator""_cm2() {
  return SI::detail::check_overflow<
      area_t<int64_t, std::ratio_multiply<std::centi, std::centi>>,
      _Digits...>();
}

constexpr auto operator"" _cm2(long double cm) {
  return area_t<long double, std::ratio_multiply<std::centi, std::centi>>(cm);
}

template <char... _Digits> constexpr auto operator""_mm2() {
  return SI::detail::check_overflow<area_t<int64_t, std::micro>, _Digits...>();
}

constexpr auto operator"" _mm2(long double mm) {
  return area_t<long double, std::micro>(mm);
}

template <char... _Digits> constexpr auto operator""_m3() {
  return SI::detail::check_overflow<volume_t<int64_t, std::ratio<1>>,
                                    _Digits...>();
}

constexpr auto operator"" _m3(long double m) {
  return volume_t<long double, std::ratio<1>>(m);
}

template <char... _Digits> constexpr auto operator""_cm3() {
  return SI::detail::check_overflow<volume_t<int64_t, std::ratio<1, 1000000>>,
                                    _Digits...>();
}

constexpr auto operator"" _cm3(long double cm) {
  return volume_t<long double, std::micro>(cm);
}

template <char... _Digits> constexpr auto operator""_mm3() {
  return SI::detail::check_overflow<volume_t<int64_t, std::nano>, _Digits...>();
}

constexpr auto operator"" _mm3(long double mm) {
  return volume_t<long double, std::nano>(mm);
}

} // namespace literals

} // namespace SI