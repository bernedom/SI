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
#include <limits>
#include <ratio>
#include <stdexcept>

#include "detail/number_parser.h"
#include "detail/unit.h"

namespace SI {
/// @todo add astronomic units
/// @todo add angle/radiant (l/l)
/// @todo add solid-angle/sterradiant (l^2/L^2)
template <typename _Type, typename _Ratio>
using length_t = detail::unit_t<'L', 1, _Type, _Ratio>;

template <typename _Type> using atto_meter_t = length_t<_Type, std::atto>;
template <typename _Type> using femto_meter_t = length_t<_Type, std::femto>;
template <typename _Type> using pico_meter_t = length_t<_Type, std::pico>;
template <typename _Type> using nano_meter_t = length_t<_Type, std::nano>;
template <typename _Type> using micro_meter_t = length_t<_Type, std::micro>;
template <typename _Type> using milli_meter_t = length_t<_Type, std::milli>;
template <typename _Type> using centi_meter_t = length_t<_Type, std::centi>;
template <typename _Type> using meter_t = length_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_meter_t = length_t<_Type, std::kilo>;
template <typename _Type> using mega_meter_t = length_t<_Type, std::mega>;
template <typename _Type> using giga_meter_t = length_t<_Type, std::giga>;
template <typename _Type> using tera_meter_t = length_t<_Type, std::tera>;
template <typename _Type> using peta_meter_t = length_t<_Type, std::peta>;
template <typename _Type> using exa_meter_t = length_t<_Type, std::exa>;

inline namespace literals {
template <char... _Digits> constexpr atto_meter_t<int64_t> operator""_am() {
  return atto_meter_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr femto_meter_t<int64_t> operator""_fm() {
  return femto_meter_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr pico_meter_t<int64_t> operator""_pm() {
  return pico_meter_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr nano_meter_t<int64_t> operator""_nm() {
  return nano_meter_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr micro_meter_t<int64_t> operator""_um() {
  return micro_meter_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr milli_meter_t<int64_t> operator""_mm() {
  return milli_meter_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr centi_meter_t<int64_t> operator""_cm() {
  return centi_meter_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr meter_t<int64_t> operator""_m() {
  return meter_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr kilo_meter_t<int64_t> operator""_km() {
  return kilo_meter_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr mega_meter_t<int64_t> operator""_Mm() {
  return mega_meter_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr giga_meter_t<int64_t> operator""_Gm() {
  return giga_meter_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr tera_meter_t<int64_t> operator""_Tm() {
  return tera_meter_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr peta_meter_t<int64_t> operator""_Pm() {
  return peta_meter_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr exa_meter_t<int64_t> operator""_Em() {
  return exa_meter_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr atto_meter_t<long double> operator""_am(long double value) {
  return atto_meter_t<long double>{value};
}

constexpr femto_meter_t<long double> operator""_fm(long double value) {
  return femto_meter_t<long double>{value};
}

constexpr pico_meter_t<long double> operator""_pm(long double value) {
  return pico_meter_t<long double>{value};
}

constexpr nano_meter_t<long double> operator""_nm(long double value) {
  return nano_meter_t<long double>{value};
}

constexpr micro_meter_t<long double> operator""_um(long double value) {
  return micro_meter_t<long double>{value};
}

constexpr milli_meter_t<long double> operator""_mm(long double value) {
  return milli_meter_t<long double>{value};
}

constexpr centi_meter_t<long double> operator""_cm(long double value) {
  return centi_meter_t<long double>{value};
}

constexpr meter_t<long double> operator""_m(long double value) {
  return meter_t<long double>{value};
}

constexpr kilo_meter_t<long double> operator""_km(long double value) {
  return kilo_meter_t<long double>{value};
}

constexpr mega_meter_t<long double> operator""_Mm(long double value) {
  return mega_meter_t<long double>{value};
}

constexpr giga_meter_t<long double> operator""_Gm(long double value) {
  return giga_meter_t<long double>{value};
}

constexpr tera_meter_t<long double> operator""_Tm(long double value) {
  return tera_meter_t<long double>{value};
}

constexpr peta_meter_t<long double> operator""_Pm(long double value) {
  return peta_meter_t<long double>{value};
}

constexpr exa_meter_t<long double> operator""_Em(long double value) {
  return exa_meter_t<long double>{value};
}
} // namespace literals
} // namespace SI
