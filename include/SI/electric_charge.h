#pragma once
#include "detail.h"
#include "unit.h"

namespace SI {

template <char _Exponent = 1, class _Ratio = std::ratio<1>,
          typename _Type = int64_t>
using electric_charge_t = unit_t<'Q', _Exponent, _Ratio, _Type>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_mC() {
  return SI::detail::check_overflow<electric_charge_t<1, std::milli>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_C() {
  return SI::detail::check_overflow<electric_charge_t<1, std::ratio<1>>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kC() {
  return SI::detail::check_overflow<electric_charge_t<1, std::kilo>,
                                    _Digits...>();
}

constexpr auto operator"" _mC(long double g) {
  return electric_charge_t<1, std::milli, long double>(g);
}

constexpr auto operator"" _C(long double g) {
  return electric_charge_t<1, std::ratio<1>, long double>(g);
}

constexpr auto operator"" _kC(long double kg) {
  return electric_charge_t<1, std::kilo, long double>(kg);
}

} // namespace literals
} // namespace SI