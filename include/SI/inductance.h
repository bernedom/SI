#pragma once

#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "electric_current.h"
#include "magnetic_flux.h"

namespace SI {
template <typename _Type, class _Ratio = std::ratio<1>>
using inductance_t = detail::unit_t<'L', 1, _Type, _Ratio>;

/// specific units
template <typename _Type> using atto_henry_t = inductance_t<_Type, std::atto>;
template <typename _Type> using femto_henry_t = inductance_t<_Type, std::femto>;
template <typename _Type> using pico_henry_t = inductance_t<_Type, std::pico>;
template <typename _Type> using nano_henry_t = inductance_t<_Type, std::nano>;
template <typename _Type> using micro_henry_t = inductance_t<_Type, std::micro>;
template <typename _Type> using milli_henry_t = inductance_t<_Type, std::milli>;
template <typename _Type> using henry_t = inductance_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_henry_t = inductance_t<_Type, std::kilo>;
template <typename _Type> using mega_henry_t = inductance_t<_Type, std::mega>;
template <typename _Type> using giga_henry_t = inductance_t<_Type, std::giga>;
template <typename _Type> using tera_henry_t = inductance_t<_Type, std::tera>;
template <typename _Type> using peta_henry_t = inductance_t<_Type, std::peta>;
template <typename _Type> using exa_henry_t = inductance_t<_Type, std::exa>;

namespace detail {
BUILD_UNIT_FROM_DIVISON(inductance_t, magnetic_flux_t, electric_current_t)
} // namespace detail

inline namespace literals {
template <char... _Digits> constexpr auto operator""_aH() {
  return SI::detail::check_overflow<atto_henry_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_fH() {
  return SI::detail::check_overflow<femto_henry_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_pH() {
  return SI::detail::check_overflow<pico_henry_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nH() {
  return SI::detail::check_overflow<nano_henry_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_uH() {
  return SI::detail::check_overflow<micro_henry_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mH() {
  return SI::detail::check_overflow<milli_henry_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_H() {
  return SI::detail::check_overflow<henry_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kH() {
  return SI::detail::check_overflow<kilo_henry_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MH() {
  return SI::detail::check_overflow<mega_henry_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_GH() {
  return SI::detail::check_overflow<giga_henry_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_TH() {
  return SI::detail::check_overflow<tera_henry_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_PH() {
  return SI::detail::check_overflow<peta_henry_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_EH() {
  return SI::detail::check_overflow<exa_henry_t<int64_t>, _Digits...>();
}

constexpr auto operator""_aH(long double value) {
  return atto_henry_t<long double>{value};
}

constexpr auto operator""_fH(long double value) {
  return femto_henry_t<long double>{value};
}

constexpr auto operator""_pH(long double value) {
  return pico_henry_t<long double>{value};
}

constexpr auto operator""_nH(long double value) {
  return nano_henry_t<long double>{value};
}

constexpr auto operator""_uH(long double value) {
  return micro_henry_t<long double>{value};
}

constexpr auto operator""_mH(long double value) {
  return milli_henry_t<long double>{value};
}

constexpr auto operator""_H(long double value) {
  return henry_t<long double>{value};
}

constexpr auto operator""_kH(long double value) {
  return kilo_henry_t<long double>{value};
}

constexpr auto operator""_MH(long double value) {
  return mega_henry_t<long double>{value};
}

constexpr auto operator""_GH(long double value) {
  return giga_henry_t<long double>{value};
}

constexpr auto operator""_TH(long double value) {
  return tera_henry_t<long double>{value};
}

constexpr auto operator""_PH(long double value) {
  return peta_henry_t<long double>{value};
}

constexpr auto operator""_EH(long double value) {
  return exa_henry_t<long double>{value};
}

} // namespace literals
} // namespace SI