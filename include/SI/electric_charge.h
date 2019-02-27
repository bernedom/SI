#pragma once

#include "electric_current.h"
#include "time.h"
#include "unit.h"

namespace SI {

template <class _Ratio = std::ratio<1>, typename _Type = int64_t>
using electric_charge_t = unit_t<'Q', 1, _Ratio, _Type>;

/// multiply Amperes with seconds result is Coulomb
template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator*(const electric_current_t<_ratio_lhs> &lhs,
                         const time_t<1, _ratio_rhs> &rhs) {

  return detail::cross_unit_multiply<electric_charge_t>(lhs, rhs);
}

/// multiply  seconds wit Amperes result is Coulomb
template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator*(const time_t<1, _ratio_lhs> &lhs,
                         const electric_current_t<_ratio_rhs> &rhs) {
  return rhs * lhs;
}

// divide charge with current, result is always seconds, regardless of ratios as
// input
template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator/(const electric_charge_t<_ratio_lhs> &lhs,
                         const electric_current_t<_ratio_rhs> &rhs) {
  return time_t<1>{
      unit_cast<electric_charge_t<std::ratio<1>>>(lhs).raw_value() /
      unit_cast<electric_current_t<std::ratio<1>>>(rhs).raw_value()};
}

template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator/(const electric_charge_t<_ratio_lhs> &lhs,
                         const time_t<1, _ratio_rhs> &rhs) {
  return electric_current_t<std::ratio<1>>{
      unit_cast<electric_charge_t<std::ratio<1>>>(lhs).raw_value() /
      unit_cast<time_t<1, std::ratio<1>>>(rhs).raw_value()};
}

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