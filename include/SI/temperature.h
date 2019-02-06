#pragma once
#include "unit.h"

namespace SI {

/// @todo find a way to encapuslate unit symbol Theta
template <class _Ratio = std::ratio<1>, typename _Type = int64_t>
using thermodynamic_temperature_t = unit_t<'t', 1, _Ratio, _Type>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_K() {
  return SI::detail::check_overflow<thermodynamic_temperature_t<std::ratio<1>>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mK() {
  return SI::detail::check_overflow<thermodynamic_temperature_t<std::milli>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kK() {
  return SI::detail::check_overflow<thermodynamic_temperature_t<std::kilo>,
                                    _Digits...>();
}

constexpr auto operator"" _K(long double K) {
  return thermodynamic_temperature_t<std::ratio<1>, long double>(K);
}

constexpr auto operator"" _mK(long double mK) {
  return thermodynamic_temperature_t<std::milli, long double>(mK);
}

constexpr auto operator"" _kK(long double kK) {
  return thermodynamic_temperature_t<std::kilo, long double>(kK);
}

} // namespace literals
} // namespace SI