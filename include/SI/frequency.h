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

#include "time.h"

namespace SI {
/// @todo find a way to add alternative dimension symbol  (f) to frequency
template <typename _Type, class _Ratio = std::ratio<1>>
using frequency_t = detail::time_base_t<-1, _Type, _Ratio>;

/// specific units
template <typename _Type> using atto_hertz_t = frequency_t<_Type, std::atto>;
template <typename _Type> using femto_hertz_t = frequency_t<_Type, std::femto>;
template <typename _Type> using pico_hertz_t = frequency_t<_Type, std::pico>;
template <typename _Type> using nano_hertz_t = frequency_t<_Type, std::nano>;
template <typename _Type> using micro_hertz_t = frequency_t<_Type, std::micro>;
template <typename _Type> using milli_hertz_t = frequency_t<_Type, std::milli>;
template <typename _Type> using hertz_t = frequency_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_hertz_t = frequency_t<_Type, std::kilo>;
template <typename _Type> using mega_hertz_t = frequency_t<_Type, std::mega>;
template <typename _Type> using giga_hertz_t = frequency_t<_Type, std::giga>;
template <typename _Type> using tera_hertz_t = frequency_t<_Type, std::tera>;
template <typename _Type> using peta_hertz_t = frequency_t<_Type, std::peta>;
template <typename _Type> using exa_hertz_t = frequency_t<_Type, std::exa>;

inline namespace literals {
template <char... _Digits> constexpr atto_hertz_t<int64_t> operator""_aHz() {
  return atto_hertz_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr femto_hertz_t<int64_t> operator""_fHz() {
  return femto_hertz_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_hertz_t<int64_t> operator""_pHz() {
  return pico_hertz_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_hertz_t<int64_t> operator""_nHz() {
  return nano_hertz_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr micro_hertz_t<int64_t> operator""_uHz() {
  return micro_hertz_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr milli_hertz_t<int64_t> operator""_mHz() {
  return milli_hertz_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr hertz_t<int64_t> operator""_Hz() {
  return hertz_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr kilo_hertz_t<int64_t> operator""_kHz() {
  return kilo_hertz_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr mega_hertz_t<int64_t> operator""_MHz() {
  return mega_hertz_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr giga_hertz_t<int64_t> operator""_GHz() {
  return giga_hertz_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr tera_hertz_t<int64_t> operator""_THz() {
  return tera_hertz_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr peta_hertz_t<int64_t> operator""_PHz() {
  return peta_hertz_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr exa_hertz_t<int64_t> operator""_EHz() {
  return exa_hertz_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr atto_hertz_t<long double> operator""_aHz(long double value) {
  return atto_hertz_t<long double>{value};
}

constexpr femto_hertz_t<long double> operator""_fHz(long double value) {
  return femto_hertz_t<long double>{value};
}

constexpr pico_hertz_t<long double> operator""_pHz(long double value) {
  return pico_hertz_t<long double>{value};
}

constexpr nano_hertz_t<long double> operator""_nHz(long double value) {
  return nano_hertz_t<long double>{value};
}

constexpr micro_hertz_t<long double> operator""_uHz(long double value) {
  return micro_hertz_t<long double>{value};
}

constexpr milli_hertz_t<long double> operator""_mHz(long double value) {
  return milli_hertz_t<long double>{value};
}

constexpr hertz_t<long double> operator""_Hz(long double value) {
  return hertz_t<long double>{value};
}

constexpr kilo_hertz_t<long double> operator""_kHz(long double value) {
  return kilo_hertz_t<long double>{value};
}

constexpr mega_hertz_t<long double> operator""_MHz(long double value) {
  return mega_hertz_t<long double>{value};
}

constexpr giga_hertz_t<long double> operator""_GHz(long double value) {
  return giga_hertz_t<long double>{value};
}

constexpr tera_hertz_t<long double> operator""_THz(long double value) {
  return tera_hertz_t<long double>{value};
}

constexpr peta_hertz_t<long double> operator""_PHz(long double value) {
  return peta_hertz_t<long double>{value};
}

constexpr exa_hertz_t<long double> operator""_EHz(long double value) {
  return exa_hertz_t<long double>{value};
}

} // namespace literals
} // namespace SI