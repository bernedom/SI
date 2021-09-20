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

#include "detail/number_parser.h"
#include "detail/unit.h"
#include "detail/unit_symbol.h"

namespace SI {

template <typename _type, class _ratio = std::ratio<1>>
using absorbed_dose_t = detail::unit_t<'D', std::ratio<1>, _type, _ratio>;

/// specific units
template <typename _type> using atto_gray_t = absorbed_dose_t<_type, std::atto>;
template <typename _type>
using femto_gray_t = absorbed_dose_t<_type, std::femto>;
template <typename _type> using pico_gray_t = absorbed_dose_t<_type, std::pico>;
template <typename _type> using nano_gray_t = absorbed_dose_t<_type, std::nano>;
template <typename _type>
using micro_gray_t = absorbed_dose_t<_type, std::micro>;
template <typename _type>
using milli_gray_t = absorbed_dose_t<_type, std::milli>;
template <typename _type> using gray_t = absorbed_dose_t<_type, std::ratio<1>>;
template <typename _type> using kilo_gray_t = absorbed_dose_t<_type, std::kilo>;
template <typename _type> using mega_gray_t = absorbed_dose_t<_type, std::mega>;
template <typename _type> using giga_gray_t = absorbed_dose_t<_type, std::giga>;
template <typename _type> using tera_gray_t = absorbed_dose_t<_type, std::tera>;
template <typename _type> using peta_gray_t = absorbed_dose_t<_type, std::peta>;
template <typename _type> using exa_gray_t = absorbed_dose_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'D', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'G', 'y'> {};

template <typename _ratio>
struct unit_symbol<'D', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'G',
                                   'y'> {};

inline namespace literals {
template <char... _digits> constexpr atto_gray_t<int64_t> operator""_aGy() {
  return atto_gray_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_gray_t<int64_t> operator""_fGy() {
  return femto_gray_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_gray_t<int64_t> operator""_pGy() {
  return pico_gray_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_gray_t<int64_t> operator""_nGy() {
  return nano_gray_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_gray_t<int64_t> operator""_uGy() {
  return micro_gray_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_gray_t<int64_t> operator""_mGy() {
  return milli_gray_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr gray_t<int64_t> operator""_Gy() {
  return gray_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_gray_t<int64_t> operator""_kGy() {
  return kilo_gray_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_gray_t<int64_t> operator""_MGy() {
  return mega_gray_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_gray_t<int64_t> operator""_GGy() {
  return giga_gray_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_gray_t<int64_t> operator""_TGy() {
  return tera_gray_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_gray_t<int64_t> operator""_PGy() {
  return peta_gray_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_gray_t<int64_t> operator""_EGy() {
  return exa_gray_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_gray_t<long double> operator""_aGy(long double value) {
  return atto_gray_t<long double>{value};
}

constexpr femto_gray_t<long double> operator""_fGy(long double value) {
  return femto_gray_t<long double>{value};
}

constexpr pico_gray_t<long double> operator""_pGy(long double value) {
  return pico_gray_t<long double>{value};
}

constexpr nano_gray_t<long double> operator""_nGy(long double value) {
  return nano_gray_t<long double>{value};
}

constexpr micro_gray_t<long double> operator""_uGy(long double value) {
  return micro_gray_t<long double>{value};
}

constexpr milli_gray_t<long double> operator""_mGy(long double value) {
  return milli_gray_t<long double>{value};
}

constexpr gray_t<long double> operator""_Gy(long double value) {
  return gray_t<long double>{value};
}

constexpr kilo_gray_t<long double> operator""_kGy(long double value) {
  return kilo_gray_t<long double>{value};
}

constexpr mega_gray_t<long double> operator""_MGy(long double value) {
  return mega_gray_t<long double>{value};
}

constexpr giga_gray_t<long double> operator""_GGy(long double value) {
  return giga_gray_t<long double>{value};
}

constexpr tera_gray_t<long double> operator""_TGy(long double value) {
  return tera_gray_t<long double>{value};
}

constexpr peta_gray_t<long double> operator""_PGy(long double value) {
  return peta_gray_t<long double>{value};
}

constexpr exa_gray_t<long double> operator""_EGy(long double value) {
  return exa_gray_t<long double>{value};
}

} // namespace literals
} // namespace SI
