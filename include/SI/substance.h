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
using substance_t = detail::unit_t<'N', std::ratio<1>, _type, _ratio>;

template <typename _type> using atto_mol_t = substance_t<_type, std::atto>;
template <typename _type> using femto_mol_t = substance_t<_type, std::femto>;
template <typename _type> using pico_mol_t = substance_t<_type, std::pico>;
template <typename _type> using nano_mol_t = substance_t<_type, std::nano>;
template <typename _type> using micro_mol_t = substance_t<_type, std::micro>;
template <typename _type> using milli_mol_t = substance_t<_type, std::milli>;
template <typename _type> using mol_t = substance_t<_type, std::ratio<1>>;
template <typename _type> using kilo_mol_t = substance_t<_type, std::kilo>;
template <typename _type> using mega_mol_t = substance_t<_type, std::mega>;
template <typename _type> using giga_mol_t = substance_t<_type, std::giga>;
template <typename _type> using tera_mol_t = substance_t<_type, std::tera>;
template <typename _type> using peta_mol_t = substance_t<_type, std::peta>;
template <typename _type> using exa_mol_t = substance_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'N', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'m', 'o', 'l'> {};

template <typename _ratio>
struct unit_symbol<'N', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'm',
                                   'o', 'l'> {};

inline namespace literals {

template <char... _digits> constexpr atto_mol_t<int64_t> operator""_amol() {
  return atto_mol_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_mol_t<int64_t> operator""_fmol() {
  return femto_mol_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_mol_t<int64_t> operator""_pmol() {
  return pico_mol_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_mol_t<int64_t> operator""_nmol() {
  return nano_mol_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_mol_t<int64_t> operator""_umol() {
  return micro_mol_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_mol_t<int64_t> operator""_mmol() {
  return milli_mol_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mol_t<int64_t> operator""_mol() {
  return mol_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_mol_t<int64_t> operator""_kmol() {
  return kilo_mol_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_mol_t<int64_t> operator""_Mmol() {
  return mega_mol_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_mol_t<int64_t> operator""_Gmol() {
  return giga_mol_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_mol_t<int64_t> operator""_Tmol() {
  return tera_mol_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_mol_t<int64_t> operator""_Pmol() {
  return peta_mol_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_mol_t<int64_t> operator""_Emol() {
  return exa_mol_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr atto_mol_t<long double> operator""_amol(long double value) {
  return atto_mol_t<long double>{value};
}

constexpr femto_mol_t<long double> operator""_fmol(long double value) {
  return femto_mol_t<long double>{value};
}

constexpr pico_mol_t<long double> operator""_pmol(long double value) {
  return pico_mol_t<long double>{value};
}

constexpr nano_mol_t<long double> operator""_nmol(long double value) {
  return nano_mol_t<long double>{value};
}

constexpr micro_mol_t<long double> operator""_umol(long double value) {
  return micro_mol_t<long double>{value};
}

constexpr milli_mol_t<long double> operator""_mmol(long double value) {
  return milli_mol_t<long double>{value};
}

constexpr mol_t<long double> operator""_mol(long double value) {
  return mol_t<long double>{value};
}

constexpr kilo_mol_t<long double> operator""_kmol(long double value) {
  return kilo_mol_t<long double>{value};
}

constexpr mega_mol_t<long double> operator""_Mmol(long double value) {
  return mega_mol_t<long double>{value};
}

constexpr giga_mol_t<long double> operator""_Gmol(long double value) {
  return giga_mol_t<long double>{value};
}

constexpr tera_mol_t<long double> operator""_Tmol(long double value) {
  return tera_mol_t<long double>{value};
}

constexpr peta_mol_t<long double> operator""_Pmol(long double value) {
  return peta_mol_t<long double>{value};
}

constexpr exa_mol_t<long double> operator""_Emol(long double value) {
  return exa_mol_t<long double>{value};
}

} // namespace literals
} // namespace SI
