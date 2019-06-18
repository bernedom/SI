#pragma once

#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "electric_charge.h"
#include "electric_current.h"
#include "energy.h"
#include "power.h"

namespace SI {
template <typename _Type, class _Ratio = std::ratio<1>>
using electric_potential_t = detail::unit_t<'U', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using atto_volt_t = electric_potential_t<_Type, std::atto>;
template <typename _Type>
using femto_volt_t = electric_potential_t<_Type, std::femto>;
template <typename _Type>
using pico_volt_t = electric_potential_t<_Type, std::pico>;
template <typename _Type>
using nano_volt_t = electric_potential_t<_Type, std::nano>;
template <typename _Type>
using micro_volt_t = electric_potential_t<_Type, std::micro>;
template <typename _Type>
using milli_volt_t = electric_potential_t<_Type, std::milli>;
template <typename _Type>
using volt_t = electric_potential_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_volt_t = electric_potential_t<_Type, std::kilo>;
template <typename _Type>
using mega_volt_t = electric_potential_t<_Type, std::mega>;
template <typename _Type>
using giga_volt_t = electric_potential_t<_Type, std::giga>;
template <typename _Type>
using tera_volt_t = electric_potential_t<_Type, std::tera>;
template <typename _Type>
using peta_volt_t = electric_potential_t<_Type, std::peta>;
template <typename _Type>
using exa_volt_t = electric_potential_t<_Type, std::exa>;

namespace detail {
BUILD_UNIT_FROM_DIVISON(electric_potential_t, power_t, electric_current_t)
BUILD_UNIT_FROM_DIVISON(electric_potential_t, energy_t, electric_charge_t)
} // namespace detail

inline namespace literals {
template <char... _Digits> constexpr auto operator""_aV() {
  return atto_volt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_fV() {
  return femto_volt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_pV() {
  return pico_volt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_nV() {
  return nano_volt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_uV() {
  return micro_volt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_mV() {
  return milli_volt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_V() {
  return volt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_kV() {
  return kilo_volt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_MV() {
  return mega_volt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_GV() {
  return giga_volt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_TV() {
  return tera_volt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_PV() {
  return peta_volt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_EV() {
  return exa_volt_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr auto operator""_aV(long double value) {
  return atto_volt_t<long double>{value};
}

constexpr auto operator""_fV(long double value) {
  return femto_volt_t<long double>{value};
}

constexpr auto operator""_pV(long double value) {
  return pico_volt_t<long double>{value};
}

constexpr auto operator""_nV(long double value) {
  return nano_volt_t<long double>{value};
}

constexpr auto operator""_uV(long double value) {
  return micro_volt_t<long double>{value};
}

constexpr auto operator""_mV(long double value) {
  return milli_volt_t<long double>{value};
}

constexpr auto operator""_V(long double value) {
  return volt_t<long double>{value};
}

constexpr auto operator""_kV(long double value) {
  return kilo_volt_t<long double>{value};
}

constexpr auto operator""_MV(long double value) {
  return mega_volt_t<long double>{value};
}

constexpr auto operator""_GV(long double value) {
  return giga_volt_t<long double>{value};
}

constexpr auto operator""_TV(long double value) {
  return tera_volt_t<long double>{value};
}

constexpr auto operator""_PV(long double value) {
  return peta_volt_t<long double>{value};
}

constexpr auto operator""_EV(long double value) {
  return exa_volt_t<long double>{value};
}

} // namespace literals
} // namespace SI