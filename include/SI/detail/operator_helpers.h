/**
 * This file is part of "SI",
 * A header only c++ library that provides type safety and user defined literals
 * for handling pyhsical values defined in the International System of
 * Units
 *
 *
 * SPDX-License-Identifier: MIT
 *
 **/
#pragma once

#include "detail.h"

#define BUILD_UNIT_FROM_DIVISON(RESULTING_UNIT_T, DIVIDEND_UNIT_T,             \
                                DIVISOR_UNIT_T)                                \
  template <typename _Type, typename _ratio_lhs, typename _ratio_rhs>          \
  constexpr auto operator/(const DIVIDEND_UNIT_T<_Type, _ratio_lhs> &lhs,      \
                           const DIVISOR_UNIT_T<_Type, _ratio_rhs> &rhs) {     \
    return detail::cross_unit_divide<RESULTING_UNIT_T>(lhs, rhs);              \
  }                                                                            \
                                                                               \
  template <typename _Type, typename _ratio_lhs, typename _ratio_rhs>          \
  constexpr auto operator*(const RESULTING_UNIT_T<_Type, _ratio_lhs> &lhs,     \
                           const DIVISOR_UNIT_T<_Type, _ratio_rhs> &rhs) {     \
    return detail::cross_unit_multiply<DIVIDEND_UNIT_T>(lhs, rhs);             \
  }                                                                            \
                                                                               \
  template <typename _Type, typename _ratio_lhs, typename _ratio_rhs>          \
  constexpr auto operator*(const DIVISOR_UNIT_T<_Type, _ratio_lhs> &lhs,       \
                           const RESULTING_UNIT_T<_Type, _ratio_rhs> &rhs) {   \
    return rhs * lhs;                                                          \
  }                                                                            \
                                                                               \
  template <typename _Type, typename _ratio_lhs, typename _ratio_rhs>          \
  constexpr auto operator/(const DIVIDEND_UNIT_T<_Type, _ratio_lhs> &lhs,      \
                           const RESULTING_UNIT_T<_Type, _ratio_rhs> &rhs) {   \
    return detail::cross_unit_divide<DIVISOR_UNIT_T>(lhs, rhs);                \
  }

#define BUILD_UNIT_FROM_MULTIPLICATION(RESULTING_UNIT, UNIT_LHS, UNIT_RHS)     \
                                                                               \
  template <typename _Type, typename _ratio_lhs, typename _ratio_rhs>          \
  constexpr auto operator*(const UNIT_LHS<_Type, _ratio_lhs> &lhs,             \
                           const UNIT_RHS<_Type, _ratio_rhs> &rhs) {           \
                                                                               \
    return detail::cross_unit_multiply<RESULTING_UNIT>(lhs, rhs);              \
  }                                                                            \
                                                                               \
  template <typename _Type, typename _ratio_lhs, typename _ratio_rhs>          \
  constexpr auto operator*(const UNIT_RHS<_Type, _ratio_lhs> &lhs,             \
                           const UNIT_LHS<_Type, _ratio_rhs> &rhs) {           \
    return rhs * lhs;                                                          \
  }                                                                            \
                                                                               \
  template <typename _Type, typename _ratio_lhs, typename _ratio_rhs>          \
  constexpr auto operator/(const RESULTING_UNIT<_Type, _ratio_lhs> &lhs,       \
                           const UNIT_LHS<_Type, _ratio_rhs> &rhs) {           \
    return detail::cross_unit_divide<UNIT_RHS>(lhs, rhs);                      \
  }                                                                            \
                                                                               \
  template <typename _Type, typename _ratio_lhs, typename _ratio_rhs>          \
  constexpr auto operator/(const RESULTING_UNIT<_Type, _ratio_lhs> &lhs,       \
                           const UNIT_RHS<_Type, _ratio_rhs> &rhs) {           \
    return detail::cross_unit_divide<UNIT_LHS>(lhs, rhs);                      \
  }
