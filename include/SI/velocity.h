#pragma once

#include "length.h"
#include "time.h"
#include "unit.h"

namespace SI {

template <char _Exponent = 1, class _Ratio = std::ratio<1>,
          typename _Type = int64_t>
using velocity = unit_t<'v', _Exponent, _Ratio, _Type>;

template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator/(const length_t<1, _ratio_lhs, int64_t> &lhs,
                         const time_t<1, _ratio_rhs, int64_t> &rhs) {
  static_assert(detail::is_ratio<_ratio_lhs>::value &&
                    detail::is_ratio<_ratio_rhs>::value,
                "template parametes are ratios");

  return unit_cast<velocity<1, _ratio_lhs, int64_t>>(
      velocity<1, std::ratio_multiply<_ratio_lhs, _ratio_rhs>, int64_t>{
          lhs.raw_value() * rhs.raw_value()});
}

template <typename _ratio_lhs, typename _ratio_rhs>
constexpr auto operator/(const length_t<1, _ratio_lhs, long double> &lhs,
                         const time_t<1, _ratio_rhs, long double> &rhs) {
  static_assert(detail::is_ratio<_ratio_lhs>::value &&
                    detail::is_ratio<_ratio_rhs>::value,
                "template parametes are ratios");

  return unit_cast<velocity<1, _ratio_lhs, long double>>(
      velocity<1, std::ratio_multiply<_ratio_lhs, _ratio_rhs>, long double>{
          lhs.raw_value() * rhs.raw_value()});
}

} // namespace SI