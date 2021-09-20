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

#include "detail/unit.h"
#include "detail/unit_symbol.h"
#include "time.h"

namespace SI {
/// @todo find a way to add alternative dimension symbol  (f) to frequency
template <typename _type, class _ratio = std::ratio<1>>
using frequency_t = detail::time_base_t<std::ratio<-1>, _type, _ratio>;

/// specific units
template <typename _type> using atto_hertz_t = frequency_t<_type, std::atto>;
template <typename _type> using femto_hertz_t = frequency_t<_type, std::femto>;
template <typename _type> using pico_hertz_t = frequency_t<_type, std::pico>;
template <typename _type> using nano_hertz_t = frequency_t<_type, std::nano>;
template <typename _type> using micro_hertz_t = frequency_t<_type, std::micro>;
template <typename _type> using milli_hertz_t = frequency_t<_type, std::milli>;
template <typename _type> using hertz_t = frequency_t<_type, std::ratio<1>>;
template <typename _type> using kilo_hertz_t = frequency_t<_type, std::kilo>;
template <typename _type> using mega_hertz_t = frequency_t<_type, std::mega>;
template <typename _type> using giga_hertz_t = frequency_t<_type, std::giga>;
template <typename _type> using tera_hertz_t = frequency_t<_type, std::tera>;
template <typename _type> using peta_hertz_t = frequency_t<_type, std::peta>;
template <typename _type> using exa_hertz_t = frequency_t<_type, std::exa>;

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'T', std::ratio<1>, std::ratio<-1>>
    : SI::detail::unit_symbol_impl<'H', 'z'> {};

template <typename _ratio>
struct unit_symbol<'T', _ratio, std::ratio<-1>>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'H',
                                   'z'> {};

inline namespace literals {
template <char... _digits> constexpr atto_hertz_t<int64_t> operator""_aHz() {
  return atto_hertz_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr femto_hertz_t<int64_t> operator""_fHz() {
  return femto_hertz_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_hertz_t<int64_t> operator""_pHz() {
  return pico_hertz_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_hertz_t<int64_t> operator""_nHz() {
  return nano_hertz_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_hertz_t<int64_t> operator""_uHz() {
  return micro_hertz_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_hertz_t<int64_t> operator""_mHz() {
  return milli_hertz_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr hertz_t<int64_t> operator""_Hz() {
  return hertz_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_hertz_t<int64_t> operator""_kHz() {
  return kilo_hertz_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr mega_hertz_t<int64_t> operator""_MHz() {
  return mega_hertz_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr giga_hertz_t<int64_t> operator""_GHz() {
  return giga_hertz_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr tera_hertz_t<int64_t> operator""_THz() {
  return tera_hertz_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr peta_hertz_t<int64_t> operator""_PHz() {
  return peta_hertz_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr exa_hertz_t<int64_t> operator""_EHz() {
  return exa_hertz_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
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
