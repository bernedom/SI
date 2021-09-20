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
#include <array>
#include <ratio>
#include <string_view>
#include <type_traits>

namespace SI::detail {

/// Compile time string provider for conversion of unit types to stringsa
template <char... Cs> struct unit_symbol_impl {
  static_assert(sizeof...(Cs) > 0, "Empty strings are disallowed");
  // using double curly braces to because of a bug in clang5
  // See https://bugs.llvm.org/show_bug.cgi?id=21629
  static constexpr const std::array<char, sizeof...(Cs)> value{{Cs...}};
  static constexpr const std::string_view str{value.data(), value.size()};
};

/// base template for ratio prefix, unusable
template <typename _ratio> struct ratio_prefix : std::false_type {};

template <>
struct ratio_prefix<std::atto> : std::integral_constant<char, 'a'> {};
template <>
struct ratio_prefix<std::femto> : std::integral_constant<char, 'f'> {};
template <>
struct ratio_prefix<std::pico> : std::integral_constant<char, 'p'> {};
template <>
struct ratio_prefix<std::nano> : std::integral_constant<char, 'n'> {};
template <>
struct ratio_prefix<std::micro> : std::integral_constant<char, 'u'> {};
template <>
struct ratio_prefix<std::milli> : std::integral_constant<char, 'm'> {};
template <>
struct ratio_prefix<std::centi> : std::integral_constant<char, 'c'> {};
template <>
struct ratio_prefix<std::kilo> : std::integral_constant<char, 'k'> {};
template <>
struct ratio_prefix<std::mega> : std::integral_constant<char, 'M'> {};
template <>
struct ratio_prefix<std::giga> : std::integral_constant<char, 'G'> {};
template <>
struct ratio_prefix<std::tera> : std::integral_constant<char, 'T'> {};
template <>
struct ratio_prefix<std::peta> : std::integral_constant<char, 'P'> {};
template <>
struct ratio_prefix<std::exa> : std::integral_constant<char, 'E'> {};

} // namespace SI::detail
namespace SI {
/// Base struct. Unusable needs template overloading
template <char _dimension_symbol, typename _ratio,
          typename _exponent = std::ratio<1>>
struct unit_symbol : public std::false_type {};

} // namespace SI
