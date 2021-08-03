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

#include "detail.h"

namespace SI::detail {
// forward declaration
template <char _symbol, typename _exponent, typename _type, typename _ratio>
struct unit_t;

/// divide a value of a certain unit with another value of a possibly
/// different type resulting in a new type, the resulting exponent is
/// specified by resulting unit using a variadic template to simplify usage of
/// implementation the internal type of the result is the internal type of lhs
template <template <typename...> typename _resulting_unit, typename _unit_lhs,
          typename _unit_rhs>
constexpr auto cross_unit_divide(const _unit_lhs &lhs, const _unit_rhs &rhs) {
  // do not use for the same unit as this should result in decreasing the
  // exponent
  static_assert(!std::is_same<_unit_lhs, _unit_rhs>::value);
  static_assert(is_unit_t_v<_unit_lhs>, "lhs parameter is a unit_t");
  static_assert(is_unit_t_v<_unit_rhs>, "rhs parameter is a unit_t");

  using resulting_ratio = typename std::ratio_divide<typename _unit_lhs::ratio,
                                                     typename _unit_rhs::ratio>;
  return _resulting_unit<typename _unit_lhs::internal_type, resulting_ratio>(
      lhs.value() / rhs.value());
}
/// multiply a value of a unit witn another value of a possibly different
/// value resulting in a value of a new type with exponent 1 the internal type
/// of the result is the internal type of lhs
/// @todo add function that works with variable exponent units and remove
/// special typedefs for time

template <template <typename...> typename _resulting_unit, typename _unit_lhs,
          typename _unit_rhs>
constexpr auto cross_unit_multiply(const _unit_lhs &lhs, const _unit_rhs &rhs) {
  // do not use for the same unit as this should result in increasing the
  // exponent
  static_assert(!std::is_same<_unit_lhs, _unit_rhs>::value);
  static_assert(is_unit_t_v<_unit_lhs>, "lhs parameter is a unit_t");
  static_assert(is_unit_t_v<_unit_rhs>, "rhs parameter is a unit_t");
  using resulting_ratio =
      typename std::ratio_multiply<typename _unit_lhs::ratio,
                                   typename _unit_rhs::ratio>;
  return _resulting_unit<typename _unit_lhs::internal_type, resulting_ratio>(
      lhs.value() * rhs.value());
}

} // namespace SI::detail