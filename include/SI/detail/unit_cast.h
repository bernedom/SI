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
#include <ratio>

namespace SI::detail {

/// function to cast between two units of the same type
template <typename _target_type, typename _rhs_T>
constexpr auto unit_cast(const _rhs_T &rhs) {
  // using static assert instead of std::enable if in order to be able to
  // forward declare this function easier
  static_assert(
      is_unit_t_v<_rhs_T> ||
          std::is_base_of<
              unit_t<_rhs_T::symbol::value, typename _rhs_T::exponent,
                     typename _rhs_T::internal_type, typename _rhs_T::ratio>,
              _rhs_T>::value,
      "is of type unit_t or a derived class");
  using conversion_ratio =
      std::ratio_divide<typename _rhs_T::ratio, typename _target_type::ratio>;

  return _target_type(
      ((rhs.value() * conversion_ratio::num) / conversion_ratio::den));
}

template <typename _unit_lhs, typename _unit_rhs>
struct unit_with_common_ratio {
  static_assert(is_unit_t_v<_unit_lhs>, "only supported for SI::unit_t");
  static_assert(is_unit_t_v<_unit_rhs>, "only supported for SI::unit_t");
  static_assert(std::is_convertible<typename _unit_lhs::internal_type,
                                    typename _unit_rhs::internal_type>::value);
  static_assert(_unit_lhs::symbol::value == _unit_rhs::symbol::value);
  using type =
      unit_t<_unit_lhs::symbol::value, typename _unit_lhs::exponent,
             typename _unit_lhs::internal_type,
             typename detail::ratio_gcd<typename _unit_lhs::ratio,
                                        typename _unit_rhs::ratio>::ratio>;
};

} // namespace SI::detail