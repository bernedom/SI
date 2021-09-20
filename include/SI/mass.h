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

template <typename _type, typename _ratio>
using mass_t = detail::unit_t<'M', std::ratio<1>, _type, _ratio>;

template <typename _type> using femto_gram_t = mass_t<_type, std::atto>;
template <typename _type> using pico_gram_t = mass_t<_type, std::femto>;
template <typename _type> using nano_gram_t = mass_t<_type, std::pico>;
template <typename _type> using micro_gram_t = mass_t<_type, std::nano>;
template <typename _type> using milli_gram_t = mass_t<_type, std::micro>;
template <typename _type> using gram_t = mass_t<_type, std::milli>;
template <typename _type> using kilo_gram_t = mass_t<_type, std::ratio<1>>;
template <typename _type> using ton_t = mass_t<_type, std::kilo>;
template <typename _type> using mega_gram_t = ton_t<_type>;
template <typename _type> using kilo_ton_t = mass_t<_type, std::mega>;
template <typename _type> using giga_gram_t = kilo_ton_t<_type>;
template <typename _type> using mega_ton_t = mass_t<_type, std::giga>;
template <typename _type> using tera_gram_t = mega_ton_t<_type>;
template <typename _type> using giga_ton_t = mass_t<_type, std::tera>;
template <typename _type> using peta_gram_t = giga_ton_t<_type>;
template <typename _type> using tera_ton_t = mass_t<_type, std::peta>;
template <typename _type> using exa_gram_t = tera_ton_t<_type>;
template <typename _type> using peta_ton_t = mass_t<_type, std::exa>;
template <typename _type> using zetta_gram_t = peta_ton_t<_type>;

// specialize unit_symbol for usage with stream operators
// due to the standard SI unit being 'kg' instead of 'g'
// ratios has to be multiplied by 1000/1 and explicit template
// specialization is needed for the 'ton' and 'gram'
// @todo figure out how to handle duplicates between tonne and mega_gram
template <>
struct unit_symbol<'M', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'k', 'g'> {};

template <>
struct unit_symbol<'M', std::milli> : SI::detail::unit_symbol_impl<'g'> {};

template <>
struct unit_symbol<'M', std::kilo> : SI::detail::unit_symbol_impl<'t'> {};

template <>
struct unit_symbol<'M', std::exa> : SI::detail::unit_symbol_impl<'Z', 'g'> {};

template <typename _ratio>
struct unit_symbol<'M', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<std::ratio_multiply<
                                       _ratio, std::kilo>>::value,
                                   'g'> {};

inline namespace literals {

template <char... _digits> constexpr femto_gram_t<int64_t> operator""_fg() {
  return femto_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_gram_t<int64_t> operator""_pg() {
  return pico_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_gram_t<int64_t> operator""_ng() {
  return nano_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_gram_t<int64_t> operator""_ug() {
  return micro_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_gram_t<int64_t> operator""_mg() {
  return milli_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr gram_t<int64_t> operator""_g() {
  return gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_gram_t<int64_t> operator""_kg() {
  return kilo_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr ton_t<int64_t> operator""_t() {
  return ton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_ton_t<int64_t> operator""_kt() {
  return kilo_ton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_ton_t<int64_t> operator""_Mt() {
  return mega_ton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_ton_t<int64_t> operator""_Gt() {
  return giga_ton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_ton_t<int64_t> operator""_Tt() {
  return tera_ton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_ton_t<int64_t> operator""_Pt() {
  return peta_ton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_gram_t<int64_t> operator""_Mg() {
  return mega_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_gram_t<int64_t> operator""_Gg() {
  return giga_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_gram_t<int64_t> operator""_Tg() {
  return tera_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_gram_t<int64_t> operator""_Pg() {
  return peta_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_gram_t<int64_t> operator""_Eg() {
  return exa_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr zetta_gram_t<int64_t> operator""_Zg() {
  return zetta_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr femto_gram_t<long double> operator""_fg(long double value) {
  return femto_gram_t<long double>{value};
}

constexpr pico_gram_t<long double> operator""_pg(long double value) {
  return pico_gram_t<long double>{value};
}

constexpr nano_gram_t<long double> operator""_ng(long double value) {
  return nano_gram_t<long double>{value};
}

constexpr micro_gram_t<long double> operator""_ug(long double value) {
  return micro_gram_t<long double>{value};
}

constexpr milli_gram_t<long double> operator"" _mg(long double mg) {
  return milli_gram_t<long double>(mg);
}

constexpr gram_t<long double> operator"" _g(long double g) {
  return gram_t<long double>(g);
}

constexpr kilo_gram_t<long double> operator"" _kg(long double kg) {
  return kilo_gram_t<long double>(kg);
}

constexpr ton_t<long double> operator"" _t(long double t) {
  return ton_t<long double>(t);
}

constexpr kilo_ton_t<long double> operator"" _kt(long double t) {
  return kilo_ton_t<long double>(t);
}

constexpr mega_ton_t<long double> operator"" _Mt(long double t) {
  return mega_ton_t<long double>(t);
}

constexpr giga_ton_t<long double> operator"" _Gt(long double t) {
  return giga_ton_t<long double>(t);
}

constexpr tera_ton_t<long double> operator"" _Tt(long double t) {
  return tera_ton_t<long double>(t);
}

constexpr peta_ton_t<long double> operator"" _Pt(long double t) {
  return peta_ton_t<long double>(t);
}

constexpr mega_gram_t<long double> operator""_Mg(long double value) {
  return mega_gram_t<long double>{value};
}

constexpr giga_gram_t<long double> operator""_Gg(long double value) {
  return giga_gram_t<long double>{value};
}

constexpr tera_gram_t<long double> operator""_Tg(long double value) {
  return tera_gram_t<long double>{value};
}

constexpr peta_gram_t<long double> operator""_Pg(long double value) {
  return peta_gram_t<long double>{value};
}

constexpr exa_gram_t<long double> operator""_Eg(long double value) {
  return exa_gram_t<long double>{value};
}

constexpr zetta_gram_t<long double> operator""_Zg(long double value) {
  return zetta_gram_t<long double>{value};
}

} // namespace literals
} // namespace SI
