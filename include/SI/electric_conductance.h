#pragma once

#include "detail/number_parser.h"
#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "electric_current.h"
#include "electric_potential.h"

namespace SI {

template <typename _Type, class _Ratio = std::ratio<1>>
using electric_conductance_t = detail::unit_t<'G', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using atto_siemens_t = electric_conductance_t<_Type, std::atto>;
template <typename _Type>
using femto_siemens_t = electric_conductance_t<_Type, std::femto>;
template <typename _Type>
using pico_siemens_t = electric_conductance_t<_Type, std::pico>;
template <typename _Type>
using nano_siemens_t = electric_conductance_t<_Type, std::nano>;
template <typename _Type>
using micro_siemens_t = electric_conductance_t<_Type, std::micro>;
template <typename _Type>
using milli_siemens_t = electric_conductance_t<_Type, std::milli>;
template <typename _Type>
using siemens_t = electric_conductance_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_siemens_t = electric_conductance_t<_Type, std::kilo>;
template <typename _Type>
using mega_siemens_t = electric_conductance_t<_Type, std::mega>;
template <typename _Type>
using giga_siemens_t = electric_conductance_t<_Type, std::giga>;
template <typename _Type>
using tera_siemens_t = electric_conductance_t<_Type, std::tera>;
template <typename _Type>
using peta_siemens_t = electric_conductance_t<_Type, std::peta>;
template <typename _Type>
using exa_siemens_t = electric_conductance_t<_Type, std::exa>;

namespace detail {
/// @todo add building from 1/Ohm
BUILD_UNIT_FROM_DIVISON(electric_conductance_t, electric_current_t,
                        electric_potential_t)
} // namespace detail

inline namespace literals {
template <char... _Digits> constexpr auto operator""_aS() {
  return atto_siemens_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_fS() {
  return femto_siemens_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_pS() {
  return pico_siemens_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_nS() {
  return nano_siemens_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_uS() {
  return micro_siemens_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_mS() {
  return milli_siemens_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_S() {
  return siemens_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_kS() {
  return kilo_siemens_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_MS() {
  return mega_siemens_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_GS() {
  return giga_siemens_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_TS() {
  return tera_siemens_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_PS() {
  return peta_siemens_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_ES() {
  return exa_siemens_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr auto operator""_aS(long double value) {
  return atto_siemens_t<long double>{value};
}

constexpr auto operator""_fS(long double value) {
  return femto_siemens_t<long double>{value};
}

constexpr auto operator""_pS(long double value) {
  return pico_siemens_t<long double>{value};
}

constexpr auto operator""_nS(long double value) {
  return nano_siemens_t<long double>{value};
}

constexpr auto operator""_uS(long double value) {
  return micro_siemens_t<long double>{value};
}

constexpr auto operator""_mS(long double value) {
  return milli_siemens_t<long double>{value};
}

constexpr auto operator""_S(long double value) {
  return siemens_t<long double>{value};
}

constexpr auto operator""_kS(long double value) {
  return kilo_siemens_t<long double>{value};
}

constexpr auto operator""_MS(long double value) {
  return mega_siemens_t<long double>{value};
}

constexpr auto operator""_GS(long double value) {
  return giga_siemens_t<long double>{value};
}

constexpr auto operator""_TS(long double value) {
  return tera_siemens_t<long double>{value};
}

constexpr auto operator""_PS(long double value) {
  return peta_siemens_t<long double>{value};
}

constexpr auto operator""_ES(long double value) {
  return exa_siemens_t<long double>{value};
}

} // namespace literals
} // namespace SI