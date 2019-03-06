#pragma once
#include "detail/unit.h"

namespace SI {

/// @todo find a way to encapuslate unit symbol Theta
template <typename _Type, typename _Ratio = std::ratio<1>>
using thermodynamic_temperature_t = detail::unit_t<'t', 1, _Type, _Ratio>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_K() {
  return SI::detail::check_overflow<
      thermodynamic_temperature_t<int64_t, std::ratio<1>>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mK() {
  return SI::detail::check_overflow<
      thermodynamic_temperature_t<int64_t, std::milli>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kK() {
  return SI::detail::check_overflow<
      thermodynamic_temperature_t<int64_t, std::kilo>, _Digits...>();
}

constexpr auto operator"" _K(long double K) {
  return thermodynamic_temperature_t<long double, std::ratio<1>>(K);
}

constexpr auto operator"" _mK(long double mK) {
  return thermodynamic_temperature_t<long double, std::milli>(mK);
}

constexpr auto operator"" _kK(long double kK) {
  return thermodynamic_temperature_t<long double, std::kilo>(kK);
}

} // namespace literals
} // namespace SI