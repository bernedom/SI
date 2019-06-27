/**
 * This file is part of "SI",
 * A header only c++ library that provides type safety and user defined literals
 * for handling pyhsical values defined in the International System of
 * Units
 *
 *
 * SPDX-License-Identifier: MIT
 *
 **/
#pragma once
#include "detail/number_parser.h"
#include "detail/unit.h"

namespace SI {

template <typename _Type, typename _Ratio>
using substance_t = detail::unit_t<'N', 1, _Type, _Ratio>;

template <typename _Type> using atto_mol_t = substance_t<_Type, std::atto>;
template <typename _Type> using femto_mol_t = substance_t<_Type, std::femto>;
template <typename _Type> using pico_mol_t = substance_t<_Type, std::pico>;
template <typename _Type> using nano_mol_t = substance_t<_Type, std::nano>;
template <typename _Type> using micro_mol_t = substance_t<_Type, std::micro>;
template <typename _Type> using milli_mol_t = substance_t<_Type, std::milli>;
template <typename _Type> using mol_t = substance_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_mol_t = substance_t<_Type, std::kilo>;
template <typename _Type> using mega_mol_t = substance_t<_Type, std::mega>;
template <typename _Type> using giga_mol_t = substance_t<_Type, std::giga>;
template <typename _Type> using tera_mol_t = substance_t<_Type, std::tera>;
template <typename _Type> using peta_mol_t = substance_t<_Type, std::peta>;
template <typename _Type> using exa_mol_t = substance_t<_Type, std::exa>;

inline namespace literals {

template <char... _Digits> constexpr atto_mol_t<int64_t> operator""_amol() {
  return atto_mol_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr femto_mol_t<int64_t> operator""_fmol() {
  return femto_mol_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_mol_t<int64_t> operator""_pmol() {
  return pico_mol_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_mol_t<int64_t> operator""_nmol() {
  return nano_mol_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr micro_mol_t<int64_t> operator""_umol() {
  return micro_mol_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr milli_mol_t<int64_t> operator""_mmol() {
  return milli_mol_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr mol_t<int64_t> operator""_mol() {
  return mol_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr kilo_mol_t<int64_t> operator""_kmol() {
  return kilo_mol_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr mega_mol_t<int64_t> operator""_Mmol() {
  return mega_mol_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr giga_mol_t<int64_t> operator""_Gmol() {
  return giga_mol_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr tera_mol_t<int64_t> operator""_Tmol() {
  return tera_mol_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr peta_mol_t<int64_t> operator""_Pmol() {
  return peta_mol_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr exa_mol_t<int64_t> operator""_Emol() {
  return exa_mol_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
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
