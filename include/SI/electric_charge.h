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

template <char... _Digits> constexpr auto operator""_MC() {
  return SI::detail::check_overflow<electric_charge_t<1, std::mega>,
                                    _Digits...>();
}

constexpr auto operator"" _mC(long double mC) {
  return electric_charge_t<1, std::milli, long double>(mC);
}

constexpr auto operator"" _C(long double C) {
  return electric_charge_t<1, std::ratio<1>, long double>(C);
}

constexpr auto operator"" _kC(long double kC) {
  return electric_charge_t<1, std::kilo, long double>(kC);
}

constexpr auto operator"" _MC(long double MC) {
  return electric_charge_t<1, std::kilo, long double>(MC);
}

} // namespace literals
} // namespace SI