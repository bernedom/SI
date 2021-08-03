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
#include <limits>
#include <ratio>
#include <stdexcept>

#include "detail/number_parser.h"
#include "detail/unit.h"
#include "detail/unit_symbol.h"

namespace SI {

template <typename _type, typename _ratio>
using length_t = detail::unit_t<'L', std::ratio<1>, _type, _ratio>;

template <typename _type> using atto_metre_t = length_t<_type, std::atto>;
template <typename _type> using femto_metre_t = length_t<_type, std::femto>;
template <typename _type> using pico_metre_t = length_t<_type, std::pico>;
template <typename _type> using nano_metre_t = length_t<_type, std::nano>;
template <typename _type> using micro_metre_t = length_t<_type, std::micro>;
template <typename _type> using milli_metre_t = length_t<_type, std::milli>;
template <typename _type> using centi_metre_t = length_t<_type, std::centi>;
template <typename _type> using metre_t = length_t<_type, std::ratio<1>>;
template <typename _type> using kilo_metre_t = length_t<_type, std::kilo>;
template <typename _type> using mega_metre_t = length_t<_type, std::mega>;
template <typename _type> using giga_metre_t = length_t<_type, std::giga>;
template <typename _type> using tera_metre_t = length_t<_type, std::tera>;
template <typename _type> using peta_metre_t = length_t<_type, std::peta>;
template <typename _type> using exa_metre_t = length_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'L', std::ratio<1>> : SI::detail::unit_symbol_impl<'m'> {};

template <typename _ratio>
struct unit_symbol<'L', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value,
                                   'm'> {};

inline namespace literals {
template <char... _digits> constexpr atto_metre_t<int64_t> operator""_am() {
  return atto_metre_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_metre_t<int64_t> operator""_fm() {
  return femto_metre_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_metre_t<int64_t> operator""_pm() {
  return pico_metre_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_metre_t<int64_t> operator""_nm() {
  return nano_metre_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_metre_t<int64_t> operator""_um() {
  return micro_metre_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_metre_t<int64_t> operator""_mm() {
  return milli_metre_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr centi_metre_t<int64_t> operator""_cm() {
  return centi_metre_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr metre_t<int64_t> operator""_m() {
  return metre_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_metre_t<int64_t> operator""_km() {
  return kilo_metre_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_metre_t<int64_t> operator""_Mm() {
  return mega_metre_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_metre_t<int64_t> operator""_Gm() {
  return giga_metre_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_metre_t<int64_t> operator""_Tm() {
  return tera_metre_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_metre_t<int64_t> operator""_Pm() {
  return peta_metre_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_metre_t<int64_t> operator""_Em() {
  return exa_metre_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_metre_t<long double> operator""_am(long double value) {
  return atto_metre_t<long double>{value};
}

constexpr femto_metre_t<long double> operator""_fm(long double value) {
  return femto_metre_t<long double>{value};
}

constexpr pico_metre_t<long double> operator""_pm(long double value) {
  return pico_metre_t<long double>{value};
}

constexpr nano_metre_t<long double> operator""_nm(long double value) {
  return nano_metre_t<long double>{value};
}

constexpr micro_metre_t<long double> operator""_um(long double value) {
  return micro_metre_t<long double>{value};
}

constexpr milli_metre_t<long double> operator""_mm(long double value) {
  return milli_metre_t<long double>{value};
}

constexpr centi_metre_t<long double> operator""_cm(long double value) {
  return centi_metre_t<long double>{value};
}

constexpr metre_t<long double> operator""_m(long double value) {
  return metre_t<long double>{value};
}

constexpr kilo_metre_t<long double> operator""_km(long double value) {
  return kilo_metre_t<long double>{value};
}

constexpr mega_metre_t<long double> operator""_Mm(long double value) {
  return mega_metre_t<long double>{value};
}

constexpr giga_metre_t<long double> operator""_Gm(long double value) {
  return giga_metre_t<long double>{value};
}

constexpr tera_metre_t<long double> operator""_Tm(long double value) {
  return tera_metre_t<long double>{value};
}

constexpr peta_metre_t<long double> operator""_Pm(long double value) {
  return peta_metre_t<long double>{value};
}

constexpr exa_metre_t<long double> operator""_Em(long double value) {
  return exa_metre_t<long double>{value};
}

} // namespace literals
} // namespace SI
