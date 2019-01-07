#pragma once
#include "unit.h"

namespace SI {

template <char _Exponent = 1, class _Ratio = std::ratio<1>,
          typename _Type = int64_t>
using luminosity = unit_t<'J', _Exponent, _Ratio, _Type>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_cd() {
  return SI::detail::check_overflow<luminosity<1, std::ratio<1>>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mcd() {
  return SI::detail::check_overflow<luminosity<1, std::milli>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kcd() {
  return SI::detail::check_overflow<luminosity<1, std::kilo>, _Digits...>();
}

constexpr auto operator"" _cd(long double cd) {
  return luminosity<1, std::ratio<1>, long double>(cd);
}

constexpr auto operator"" _mcd(long double mcd) {
  return luminosity<1, std::milli, long double>(mcd);
}

constexpr auto operator"" _kcd(long double kcd) {
  return luminosity<1, std::kilo, long double>(kcd);
}

} // namespace literals
} // namespace SI