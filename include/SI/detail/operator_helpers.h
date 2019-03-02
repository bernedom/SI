#pragma once

#include "detail.h"

#define BUILD_UNIT_FROM_DIVISON(RESULTING_UNIT_T, DIVIDEND_UNIT_T,             \
                                DIVISOR_UNIT_T)                                \
  template <typename _ratio_lhs, typename _ratio_rhs,                          \
            typename _Type = int64_t>                                          \
  constexpr auto operator/(const DIVIDEND_UNIT_T<_ratio_lhs, _Type> &lhs,      \
                           const DIVISOR_UNIT_T<_ratio_rhs, _Type> &rhs) {     \
    return detail::cross_unit_divide<RESULTING_UNIT_T>(lhs, rhs);              \
  }                                                                            \
                                                                               \
  template <typename _ratio_lhs, typename _ratio_rhs,                          \
            typename _Type = int64_t>                                          \
  constexpr auto operator*(const RESULTING_UNIT_T<_ratio_lhs, _Type> &lhs,     \
                           const DIVISOR_UNIT_T<_ratio_rhs, _Type> &rhs) {     \
    return detail::cross_unit_multiply<DIVIDEND_UNIT_T>(lhs, rhs);             \
  }                                                                            \
                                                                               \
  template <typename _ratio_lhs, typename _ratio_rhs,                          \
            typename _Type = int64_t>                                          \
  constexpr auto operator*(const DIVISOR_UNIT_T<_ratio_lhs, _Type> &lhs,       \
                           const RESULTING_UNIT_T<_ratio_rhs, _Type> &rhs) {   \
    return rhs * lhs;                                                          \
  }                                                                            \
                                                                               \
  template <typename _ratio_lhs, typename _ratio_rhs,                          \
            typename _Type = int64_t>                                          \
  constexpr auto operator/(const DIVIDEND_UNIT_T<_ratio_lhs, _Type> &lhs,      \
                           const RESULTING_UNIT_T<_ratio_rhs, _Type> &rhs) {   \
    return detail::cross_unit_divide<DIVISOR_UNIT_T>(lhs, rhs);                \
  }

#define BUILD_UNIT_FROM_MULTIPLICATION(RESULTING_UNIT, UNIT_LHS, UNIT_RHS)     \
                                                                               \
  template <typename _ratio_lhs, typename _ratio_rhs, typename _Type>          \
  constexpr auto operator*(const UNIT_LHS<_ratio_lhs, _Type> &lhs,             \
                           const UNIT_RHS<_ratio_rhs, _Type> &rhs) {           \
                                                                               \
    return detail::cross_unit_multiply<RESULTING_UNIT>(lhs, rhs);              \
  }                                                                            \
                                                                               \
  template <typename _ratio_lhs, typename _ratio_rhs, typename _Type>          \
  constexpr auto operator*(const UNIT_RHS<_ratio_lhs, _Type> &lhs,             \
                           const UNIT_LHS<_ratio_rhs, _Type> &rhs) {           \
    return rhs * lhs;                                                          \
  }                                                                            \
                                                                               \
  template <typename _ratio_lhs, typename _ratio_rhs, typename _Type>          \
  constexpr auto operator/(const RESULTING_UNIT<_ratio_lhs, _Type> &lhs,       \
                           const UNIT_LHS<_ratio_rhs, _Type> &rhs) {           \
    return detail::cross_unit_divide<UNIT_RHS>(lhs, rhs);                      \
  }                                                                            \
                                                                               \
  template <typename _ratio_lhs, typename _ratio_rhs, typename _Type>          \
  constexpr auto operator/(const RESULTING_UNIT<_ratio_lhs, _Type> &lhs,       \
                           const UNIT_RHS<_ratio_rhs, _Type> &rhs) {           \
    return detail::cross_unit_divide<UNIT_LHS>(lhs, rhs);                      \
  }
