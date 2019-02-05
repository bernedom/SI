#pragma once
#include "detail.h"
#include "electric_current.h"
#include "time.h"
#include "unit.h"

namespace SI {

template <char _Exponent = 1, class _Ratio = std::ratio<1>,
          typename _Type = int64_t>
using electric_charge_t = unit_t<'Q', _Exponent, _Ratio, _Type>;

/// multiply Amperes with seconds result is Coulomb
/// @todo consider if this can be merged with unit_t::operator*
template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator*(const electric_current_t<1, _ratio_lhs> &lhs,
                         const time_t<1, _ratio_rhs> &rhs) {
  static_assert(detail::is_ratio<_ratio_lhs>::value &&
                    detail::is_ratio<_ratio_rhs>::value,
                "template parametes are ratios");

  return unit_cast<electric_charge_t<1, _ratio_lhs>>(
      electric_charge_t<1, std::ratio_multiply<_ratio_lhs, _ratio_rhs>>{
          lhs.raw_value() * rhs.raw_value()});
}

/// multiply  seconds wit Amperes result is Coulomb
/// @todo get rid of double unit cast
template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator*(const time_t<1, _ratio_lhs> &lhs,
                         const electric_current_t<1, _ratio_rhs> &rhs) {
  static_assert(detail::is_ratio<_ratio_lhs>::value &&
                    detail::is_ratio<_ratio_rhs>::value,
                "template parametes are ratios");
  return unit_cast<electric_charge_t<1, _ratio_lhs>>(rhs * lhs);
}

// divide charge with current, result is always seconds, regardless of ratios as
// input
template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator/(const electric_charge_t<1, _ratio_lhs> &lhs,
                         const electric_current_t<1, _ratio_rhs> &rhs) {
  return time_t<1>{
      unit_cast<electric_charge_t<1, std::ratio<1>>>(lhs).raw_value() /
      unit_cast<electric_current_t<1, std::ratio<1>>>(rhs).raw_value()};
}

template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator/(const electric_charge_t<1, _ratio_lhs> &lhs,
                         const time_t<1, _ratio_rhs> &rhs) {
  return electric_current_t<1, std::ratio<1>>{
      unit_cast<electric_charge_t<1, std::ratio<1>>>(lhs).raw_value() /
      unit_cast<time_t<1, std::ratio<1>>>(rhs).raw_value()};
}

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