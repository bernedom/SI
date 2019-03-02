#pragma once

#include "detail/operator_helpers.h"
#include "electric_current.h"
#include "time.h"
#include "unit.h"

namespace SI {

/// @todo check for correctness

/// unit for electroc charge 'Q' where Q = T * I
template <class _Ratio = std::ratio<1>, typename _Type = int64_t>
using electric_charge_t = unit_t<'Q', 1, _Ratio, _Type>;

BUILD_UNIT_FROM_MULTIPLICATION(electric_charge_t, electric_current_t,
                               time_single_t)

inline namespace literals {
template <char... _Digits> constexpr auto operator""_mC() {
  return SI::detail::check_overflow<electric_charge_t<std::milli>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_C() {
  return SI::detail::check_overflow<electric_charge_t<std::ratio<1>>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kC() {
  return SI::detail::check_overflow<electric_charge_t<std::kilo>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MC() {
  return SI::detail::check_overflow<electric_charge_t<std::mega>, _Digits...>();
}

constexpr auto operator"" _mC(long double mC) {
  return electric_charge_t<std::milli, long double>(mC);
}

constexpr auto operator"" _C(long double C) {
  return electric_charge_t<std::ratio<1>, long double>(C);
}

constexpr auto operator"" _kC(long double kC) {
  return electric_charge_t<std::kilo, long double>(kC);
}

constexpr auto operator"" _MC(long double MC) {
  return electric_charge_t<std::kilo, long double>(MC);
}

} // namespace literals
} // namespace SI