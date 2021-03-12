/**
 * This file is part of "SI" version 2.0.5
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
#include <limits>
#include <numeric>
#include <ratio>
#include <stdexcept>
#include <type_traits>

/// Namespace containing implementation details for SI
namespace SI::detail {

/// to check if a template is an instatiation of std::ratio
template <typename _type> struct is_ratio : std::false_type {};

template <intmax_t _num, intmax_t _den>
struct is_ratio<std::ratio<_num, _den>> : std::true_type {};

template <typename _type>
inline constexpr bool is_ratio_v = is_ratio<_type>::value;

template <typename T, std::enable_if_t<std::is_floating_point_v<T>> * = nullptr>
constexpr bool epsEqual(const T &lhs, const T &rhs) {

  return (lhs - rhs) < std::numeric_limits<T>::epsilon() &&
         (lhs - rhs) > -std::numeric_limits<T>::epsilon();
  // return std::abs(lhs - rhs) < std::numeric_limits<T>::epsilon();
}
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

} // namespace SI::detail
