/**
 * This file is part of "SI" version 2.1.3
 * A header only c++ library that provides type safety and user defined literals
 * for handling pyhsical values defined in the International System of
 * Units
 *
 * https://github.com/bernedom/SI
 *
 * SPDX-License-Identifier: MIT
 *
 **/
#pragma once

#include "cross_unit_operations.h"
#include "detail.h"

/**
 * Generate operators for unit conversions. Both macros generate the operators
 * to create new units as well as the inverse operators
 * */

#define BUILD_UNIT_FROM_DIVISON(RESULTING_UNIT_T, DIVIDEND_UNIT_T,             \
                                DIVISOR_UNIT_T)                                \
  template <typename _type, typename _ratio_lhs, typename _type_rhs,           \
            typename _ratio_rhs>                                               \
  constexpr auto operator/(const DIVIDEND_UNIT_T<_type, _ratio_lhs> &lhs,      \
                           const DIVISOR_UNIT_T<_type_rhs, _ratio_rhs> &rhs) { \
    return detail::cross_unit_divide<RESULTING_UNIT_T>(lhs, rhs);              \
  }                                                                            \
                                                                               \
  template <typename _type, typename _ratio_lhs, typename _type_rhs,           \
            typename _ratio_rhs>                                               \
  constexpr auto operator*(const RESULTING_UNIT_T<_type, _ratio_lhs> &lhs,     \
                           const DIVISOR_UNIT_T<_type_rhs, _ratio_rhs> &rhs) { \
    return detail::cross_unit_multiply<DIVIDEND_UNIT_T>(lhs, rhs);             \
  }                                                                            \
                                                                               \
  template <typename _type, typename _ratio_lhs, typename _type_rhs,           \
            typename _ratio_rhs>                                               \
  constexpr auto operator*(                                                    \
      const DIVISOR_UNIT_T<_type, _ratio_lhs> &lhs,                            \
      const RESULTING_UNIT_T<_type_rhs, _ratio_rhs> &rhs) {                    \
    return rhs * lhs;                                                          \
  }                                                                            \
                                                                               \
  template <typename _type, typename _ratio_lhs, typename _type_rhs,           \
            typename _ratio_rhs>                                               \
  constexpr auto operator/(                                                    \
      const DIVIDEND_UNIT_T<_type, _ratio_lhs> &lhs,                           \
      const RESULTING_UNIT_T<_type_rhs, _ratio_rhs> &rhs) {                    \
    return detail::cross_unit_divide<DIVISOR_UNIT_T>(lhs, rhs);                \
  }

#define BUILD_UNIT_FROM_MULTIPLICATION(RESULTING_UNIT, UNIT_LHS, UNIT_RHS)     \
                                                                               \
  template <typename _type, typename _ratio_lhs, typename _type_rhs,           \
            typename _ratio_rhs>                                               \
  constexpr auto operator*(const UNIT_LHS<_type, _ratio_lhs> &lhs,             \
                           const UNIT_RHS<_type_rhs, _ratio_rhs> &rhs) {       \
                                                                               \
    return detail::cross_unit_multiply<RESULTING_UNIT>(lhs, rhs);              \
  }                                                                            \
                                                                               \
  template <typename _type, typename _ratio_lhs, typename _type_rhs,           \
            typename _ratio_rhs>                                               \
  constexpr auto operator*(const UNIT_RHS<_type, _ratio_lhs> &lhs,             \
                           const UNIT_LHS<_type_rhs, _ratio_rhs> &rhs) {       \
    return rhs * lhs;                                                          \
  }                                                                            \
                                                                               \
  template <typename _type, typename _ratio_lhs, typename _type_rhs,           \
            typename _ratio_rhs>                                               \
  constexpr auto operator/(const RESULTING_UNIT<_type, _ratio_lhs> &lhs,       \
                           const UNIT_LHS<_type_rhs, _ratio_rhs> &rhs) {       \
    return detail::cross_unit_divide<UNIT_RHS>(lhs, rhs);                      \
  }                                                                            \
                                                                               \
  template <typename _type, typename _ratio_lhs, typename _type_rhs,           \
            typename _ratio_rhs>                                               \
  constexpr auto operator/(const RESULTING_UNIT<_type, _ratio_lhs> &lhs,       \
                           const UNIT_RHS<_type_rhs, _ratio_rhs> &rhs) {       \
    return detail::cross_unit_divide<UNIT_LHS>(lhs, rhs);                      \
  }
