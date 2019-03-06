#pragma once

#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "electric_current.h"
#include "time.h"

namespace SI {

/// unit for electroc charge 'Q' where Q = T * I
template <typename _Type, typename _Ratio>
using electric_charge_t = detail::unit_t<'Q', 1, _Type, _Ratio>;

/// @todo find out why the operators have to be in SI::detail
/// maybe using preceeding :: helps
namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(electric_charge_t, electric_current_t,
                               time_single_t)
}

inline namespace literals {
template <char... _Digits> constexpr auto operator""_mC() {
  return SI::detail::check_overflow<electric_charge_t<int64_t, std::milli>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_C() {
  return SI::detail::check_overflow<electric_charge_t<int64_t, std::ratio<1>>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kC() {
  return SI::detail::check_overflow<electric_charge_t<int64_t, std::kilo>,
                                    _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MC() {
  return SI::detail::check_overflow<electric_charge_t<int64_t, std::mega>,
                                    _Digits...>();
}

constexpr auto operator"" _mC(long double mC) {
  return electric_charge_t<long double, std::milli>(mC);
}

constexpr auto operator"" _C(long double C) {
  return electric_charge_t<long double, std::ratio<1>>(C);
}

constexpr auto operator"" _kC(long double kC) {
  return electric_charge_t<long double, std::kilo>(kC);
}

constexpr auto operator"" _MC(long double MC) {
  return electric_charge_t<long double, std::mega>(MC);
}

} // namespace literals
} // namespace SI