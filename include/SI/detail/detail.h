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

#include "number_parser.h"
#include <cstdint>
#include <numeric>
#include <ratio>

/// Namespace containing implementation details for SI
namespace SI::detail {

/// to check if a template is an instatiation of std::ratio
template <typename _type> struct is_ratio : std::false_type {};

template <intmax_t _num, intmax_t _den>
struct is_ratio<std::ratio<_num, _den>> : std::true_type {};

template <typename _type>
inline constexpr bool is_ratio_v = is_ratio<_type>::value;

/// calculate gcd for rations
template <typename _ratio_lhs, typename _ratio_rhs> struct ratio_gcd {
private:
  using gcd_num = std::integral_constant<std::intmax_t,
                                         std::gcd<std::intmax_t, std::intmax_t>(
                                             _ratio_lhs::num, _ratio_rhs::num)>;

  using gcd_den = std::integral_constant<std::intmax_t,
                                         std::gcd<std::intmax_t, std::intmax_t>(
                                             _ratio_lhs::den, _ratio_rhs::den)>;

public:
  using ratio = std::ratio<gcd_num::value, (_ratio_lhs::den / gcd_den::value) *
                                               _ratio_rhs::den>;
};

// forward declaration
template <char _symbol, typename _exponent, typename _type, typename _ratio>
struct unit_t;

/// helper template to check if a type is a unit_t (false for all other
/// types)
template <typename _unit> struct is_unit_t : std::false_type {};

/// template specialisation to check if a type is a unit_t (true if unit_t)
template <char _symbol, typename _exponent, typename _ratio, typename _type>
struct is_unit_t<const unit_t<_symbol, _exponent, _type, _ratio>>
    : std::true_type {};

/// non-const specialisation of check above
template <char _symbol, typename _exponent, typename _ratio, typename _type>
struct is_unit_t<unit_t<_symbol, _exponent, _type, _ratio>> : std::true_type {};

template <typename _type>
inline constexpr bool is_unit_t_v = is_unit_t<_type>::value;

} // namespace SI::detail
