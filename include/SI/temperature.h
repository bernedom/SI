#pragma once
#include "detail/unit.h"

namespace SI {

/// @todo find a way to encapuslate unit symbol Theta
template <typename _Type, typename _Ratio = std::ratio<1>>
using thermodynamic_temperature_t = detail::unit_t<'t', 1, _Type, _Ratio>;

template <typename _Type>
using kelvin_t = thermodynamic_temperature_t<_Type, std::ratio<1>>;
template <typename _Type>
using milli_kelvin_t = thermodynamic_temperature_t<_Type, std::milli>;
template <typename _Type>
using kilo_kelvin_t = thermodynamic_temperature_t<_Type, std::kilo>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_K() {
  return SI::detail::check_overflow<kelvin_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _kK() {
  return SI::detail::check_overflow<kilo_kelvin_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _mK() {
  return SI::detail::check_overflow<milli_kelvin_t<int64_t>, _Digits...>();
}

constexpr auto operator"" _K(long double K) { return kelvin_t<long double>(K); }

constexpr auto operator"" _kK(long double kK) {
  return kilo_kelvin_t<long double>(kK);
}

constexpr auto operator"" _mK(long double mK) {
  return milli_kelvin_t<long double>(mK);
}

} // namespace literals
} // namespace SI