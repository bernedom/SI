#pragma once
#include "unit.h"

namespace SI {

template <class _Ratio = std::ratio<1>, typename _Type = int64_t>
using luminosity_t = unit_t<'J', 1, _Ratio, _Type>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_cd() {
  return SI::detail::check_overflow<luminosity_t<std::ratio<1>>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mcd() {
  return SI::detail::check_overflow<luminosity_t<std::milli>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kcd() {
  return SI::detail::check_overflow<luminosity_t<std::kilo>, _Digits...>();
}

constexpr auto operator"" _cd(long double cd) {
  return luminosity_t<std::ratio<1>, long double>(cd);
}

constexpr auto operator"" _mcd(long double mcd) {
  return luminosity_t<std::milli, long double>(mcd);
}

constexpr auto operator"" _kcd(long double kcd) {
  return luminosity_t<std::kilo, long double>(kcd);
}

} // namespace literals
} // namespace SI