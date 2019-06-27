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

template <typename _Type, class _Ratio = std::ratio<1>>
using absorbed_dose_t = detail::unit_t<'D', 1, _Type, _Ratio>;

/// specific units
template <typename _Type> using atto_gray_t = absorbed_dose_t<_Type, std::atto>;
template <typename _Type>
using femto_gray_t = absorbed_dose_t<_Type, std::femto>;
template <typename _Type> using pico_gray_t = absorbed_dose_t<_Type, std::pico>;
template <typename _Type> using nano_gray_t = absorbed_dose_t<_Type, std::nano>;
template <typename _Type>
using micro_gray_t = absorbed_dose_t<_Type, std::micro>;
template <typename _Type>
using milli_gray_t = absorbed_dose_t<_Type, std::milli>;
template <typename _Type> using gray_t = absorbed_dose_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_gray_t = absorbed_dose_t<_Type, std::kilo>;
template <typename _Type> using mega_gray_t = absorbed_dose_t<_Type, std::mega>;
template <typename _Type> using giga_gray_t = absorbed_dose_t<_Type, std::giga>;
template <typename _Type> using tera_gray_t = absorbed_dose_t<_Type, std::tera>;
template <typename _Type> using peta_gray_t = absorbed_dose_t<_Type, std::peta>;
template <typename _Type> using exa_gray_t = absorbed_dose_t<_Type, std::exa>;

inline namespace literals {
template <char... _Digits> constexpr atto_gray_t<int64_t> operator""_aGy() {
  return atto_gray_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr femto_gray_t<int64_t> operator""_fGy() {
  return femto_gray_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_gray_t<int64_t> operator""_pGy() {
  return pico_gray_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_gray_t<int64_t> operator""_nGy() {
  return nano_gray_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr micro_gray_t<int64_t> operator""_uGy() {
  return micro_gray_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr milli_gray_t<int64_t> operator""_mGy() {
  return milli_gray_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr gray_t<int64_t> operator""_Gy() {
  return gray_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr kilo_gray_t<int64_t> operator""_kGy() {
  return kilo_gray_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr mega_gray_t<int64_t> operator""_MGy() {
  return mega_gray_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr giga_gray_t<int64_t> operator""_GGy() {
  return giga_gray_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr tera_gray_t<int64_t> operator""_TGy() {
  return tera_gray_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr peta_gray_t<int64_t> operator""_PGy() {
  return peta_gray_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr exa_gray_t<int64_t> operator""_EGy() {
  return exa_gray_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
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
