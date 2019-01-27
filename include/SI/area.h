#pragma once

#include <SI/length.h>

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