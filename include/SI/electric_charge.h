#pragma once

#include "detail/operator_helpers.h"
#include "electric_current.h"
#include "time.h"
#include "unit.h"

namespace SI {

/// unit for electroc charge 'Q' where Q = T * I
template <class _Ratio, typename _Type>
using electric_charge_t = unit_t<'Q', 1, _Ratio, _Type>;

BUILD_UNIT_FROM_MULTIPLICATION(electric_charge_t, electric_current_t,
                               time_single_t)

inline namespace literals {
template <char... _Digits> constexpr auto operator""_mC() {
  return SI::detail::check_overflow<electric_charge_t<std::milli, int64_t>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_C() {
  return SI::detail::check_overflow<electric_charge_t<std::ratio<1>, int64_t>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kC() {
  return SI::detail::check_overflow<electric_charge_t<std::kilo, int64_t>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MC() {
  return SI::detail::check_overflow<electric_charge_t<std::mega, int64_t>,
                                    _Digits...>();
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
  return electric_charge_t<std::mega, long double>(MC);
}

} // namespace literals
} // namespace SI