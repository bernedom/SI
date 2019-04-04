#pragma once

#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "electric_current.h"
#include "energy.h"
#include "power.h"

namespace SI {
template <typename _Type, class _Ratio = std::ratio<1>>
using electric_capacity_t = detail::unit_t<'C', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using atto_farad_t = electric_capacity_t<_Type, std::atto>;
template <typename _Type>
using femto_farad_t = electric_capacity_t<_Type, std::femto>;
template <typename _Type>
using pico_farad_t = electric_capacity_t<_Type, std::pico>;
template <typename _Type>
using nano_farad_t = electric_capacity_t<_Type, std::nano>;
template <typename _Type>
using micro_farad_t = electric_capacity_t<_Type, std::micro>;
template <typename _Type>
using milli_farad_t = electric_capacity_t<_Type, std::milli>;
template <typename _Type>
using farad_t = electric_capacity_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_farad_t = electric_capacity_t<_Type, std::kilo>;
template <typename _Type>
using mega_farad_t = electric_capacity_t<_Type, std::mega>;
template <typename _Type>
using giga_farad_t = electric_capacity_t<_Type, std::giga>;
template <typename _Type>
using tera_farad_t = electric_capacity_t<_Type, std::tera>;
template <typename _Type>
using peta_farad_t = electric_capacity_t<_Type, std::peta>;
template <typename _Type>
using exa_farad_t = electric_capacity_t<_Type, std::exa>;

namespace detail {} // namespace detail

inline namespace literals {
template <char... _Digits> constexpr auto operator""_aF() {
  return SI::detail::check_overflow<atto_farad_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_fF() {
  return SI::detail::check_overflow<femto_farad_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_pF() {
  return SI::detail::check_overflow<pico_farad_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nF() {
  return SI::detail::check_overflow<nano_farad_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_uF() {
  return SI::detail::check_overflow<micro_farad_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mF() {
  return SI::detail::check_overflow<milli_farad_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_F() {
  return SI::detail::check_overflow<farad_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kF() {
  return SI::detail::check_overflow<kilo_farad_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MF() {
  return SI::detail::check_overflow<mega_farad_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_GF() {
  return SI::detail::check_overflow<giga_farad_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_TF() {
  return SI::detail::check_overflow<tera_farad_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_PF() {
  return SI::detail::check_overflow<peta_farad_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_EF() {
  return SI::detail::check_overflow<exa_farad_t<int64_t>, _Digits...>();
}

constexpr auto operator""_aF(long double value) {
  return atto_farad_t<long double>{value};
}

constexpr auto operator""_fF(long double value) {
  return femto_farad_t<long double>{value};
}

constexpr auto operator""_pF(long double value) {
  return pico_farad_t<long double>{value};
}

constexpr auto operator""_nF(long double value) {
  return nano_farad_t<long double>{value};
}

constexpr auto operator""_uF(long double value) {
  return micro_farad_t<long double>{value};
}

constexpr auto operator""_mF(long double value) {
  return milli_farad_t<long double>{value};
}

constexpr auto operator""_F(long double value) {
  return farad_t<long double>{value};
}

constexpr auto operator""_kF(long double value) {
  return kilo_farad_t<long double>{value};
}

constexpr auto operator""_MF(long double value) {
  return mega_farad_t<long double>{value};
}

constexpr auto operator""_GF(long double value) {
  return giga_farad_t<long double>{value};
}

constexpr auto operator""_TF(long double value) {
  return tera_farad_t<long double>{value};
}

constexpr auto operator""_PF(long double value) {
  return peta_farad_t<long double>{value};
}

constexpr auto operator""_EF(long double value) {
  return exa_farad_t<long double>{value};
}

} // namespace literals
} // namespace SI