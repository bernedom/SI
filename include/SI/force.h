
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

#include "acceleration.h"
#include "detail/number_parser.h"
#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "mass.h"

namespace SI {
template <typename _type, class _ratio = std::ratio<1>>
using force_t = detail::unit_t<'F', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type> using atto_newton_t = force_t<_type, std::atto>;
template <typename _type> using femto_newton_t = force_t<_type, std::femto>;
template <typename _type> using pico_newton_t = force_t<_type, std::pico>;
template <typename _type> using nano_newton_t = force_t<_type, std::nano>;
template <typename _type> using micro_newton_t = force_t<_type, std::micro>;
template <typename _type> using milli_newton_t = force_t<_type, std::milli>;
template <typename _type> using newton_t = force_t<_type, std::ratio<1>>;
template <typename _type> using kilo_newton_t = force_t<_type, std::kilo>;
template <typename _type> using mega_newton_t = force_t<_type, std::mega>;
template <typename _type> using giga_newton_t = force_t<_type, std::giga>;
template <typename _type> using tera_newton_t = force_t<_type, std::tera>;
template <typename _type> using peta_newton_t = force_t<_type, std::peta>;
template <typename _type> using exa_newton_t = force_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'F', std::ratio<1>> : SI::detail::unit_symbol_impl<'N'> {};

template <typename _ratio>
struct unit_symbol<'F', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value,
                                   'N'> {};

namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(force_t, mass_t, acceleration_t)
}

inline namespace literals {
template <char... _digits> constexpr atto_newton_t<int64_t> operator""_aN() {
  return atto_newton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_newton_t<int64_t> operator""_fN() {
  return femto_newton_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_newton_t<int64_t> operator""_pN() {
  return pico_newton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_newton_t<int64_t> operator""_nN() {
  return nano_newton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_newton_t<int64_t> operator""_uN() {
  return micro_newton_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_newton_t<int64_t> operator""_mN() {
  return milli_newton_t<int64_t>{
      SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr newton_t<int64_t> operator""_N() {
  return newton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_newton_t<int64_t> operator""_kN() {
  return kilo_newton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_newton_t<int64_t> operator""_MN() {
  return mega_newton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_newton_t<int64_t> operator""_GN() {
  return giga_newton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_newton_t<int64_t> operator""_TN() {
  return tera_newton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_newton_t<int64_t> operator""_PN() {
  return peta_newton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_newton_t<int64_t> operator""_EN() {
  return exa_newton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_newton_t<long double> operator""_aN(long double value) {
  return atto_newton_t<long double>{value};
}

constexpr femto_newton_t<long double> operator""_fN(long double value) {
  return femto_newton_t<long double>{value};
}

constexpr pico_newton_t<long double> operator""_pN(long double value) {
  return pico_newton_t<long double>{value};
}

constexpr nano_newton_t<long double> operator""_nN(long double value) {
  return nano_newton_t<long double>{value};
}

constexpr micro_newton_t<long double> operator""_uN(long double value) {
  return micro_newton_t<long double>{value};
}

constexpr milli_newton_t<long double> operator""_mN(long double value) {
  return milli_newton_t<long double>{value};
}

constexpr newton_t<long double> operator""_N(long double value) {
  return newton_t<long double>{value};
}

constexpr kilo_newton_t<long double> operator""_kN(long double value) {
  return kilo_newton_t<long double>{value};
}

constexpr mega_newton_t<long double> operator""_MN(long double value) {
  return mega_newton_t<long double>{value};
}

constexpr giga_newton_t<long double> operator""_GN(long double value) {
  return giga_newton_t<long double>{value};
}

constexpr tera_newton_t<long double> operator""_TN(long double value) {
  return tera_newton_t<long double>{value};
}

constexpr peta_newton_t<long double> operator""_PN(long double value) {
  return peta_newton_t<long double>{value};
}

constexpr exa_newton_t<long double> operator""_EN(long double value) {
  return exa_newton_t<long double>{value};
}

} // namespace literals
} // namespace SI
