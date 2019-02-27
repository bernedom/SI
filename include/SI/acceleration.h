#pragma once

#include "velocity.h"

#define BUILD_UNIT_FROM_DIVISON(RESULTING_UNIT_T, DIVIDEND_UNIT_T,             \
                                DIVISOR_UNIT_T)                                \
  template <typename _ratio_lhs, typename _ratio_rhs,                          \
            typename _Type = int64_t>                                          \
  constexpr auto operator/(const DIVIDEND_UNIT_T<_ratio_lhs, _Type> &lhs,      \
                           const DIVISOR_UNIT_T<_ratio_rhs, _Type> &rhs) {     \
    return detail::cross_unit_divide<RESULTING_UNIT_T>(lhs, rhs);              \
  }                                                                            \
  template <typename _ratio_lhs, typename _ratio_rhs,                          \
            typename _Type = int64_t>                                          \
  constexpr auto operator*(const RESULTING_UNIT_T<_ratio_lhs, _Type> &lhs,     \
                           const DIVISOR_UNIT_T<_ratio_rhs, _Type> &rhs) {     \
    return detail::cross_unit_multiply<DIVIDEND_UNIT_T>(lhs, rhs);             \
  }                                                                            \
  template <typename _ratio_lhs, typename _ratio_rhs,                          \
            typename _Type = int64_t>                                          \
  constexpr auto operator*(const DIVISOR_UNIT_T<_ratio_lhs, _Type> &lhs,       \
                           const RESULTING_UNIT_T<_ratio_rhs, _Type> &rhs) {   \
    return rhs * lhs;                                                          \
  }                                                                            \
  template <typename _ratio_lhs, typename _ratio_rhs,                          \
            typename _Type = int64_t>                                          \
  constexpr auto operator/(const DIVIDEND_UNIT_T<_ratio_lhs, _Type> &lhs,      \
                           const RESULTING_UNIT_T<_ratio_rhs, _Type> &rhs) {   \
    return detail::cross_unit_divide<DIVISOR_UNIT_T>(lhs, rhs);                \
  }

namespace SI {

/// Type for acceleration a = v / t or a = L / t^2
template <class _Ratio, typename _Type = int64_t>
using acceleration_t = unit_t<'a', 1, _Ratio, _Type>;

BUILD_UNIT_FROM_DIVISON(acceleration_t, velocity_t, time_single_t)
BUILD_UNIT_FROM_DIVISON(acceleration_t, length_t, time_squared_t)

} // namespace SI