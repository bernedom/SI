#pragma once

#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "electric_charge.h"
#include "electric_potential.h"

namespace SI {
/// @todo find a way to use Ohm as dimension symbol
template <typename _Type, class _Ratio = std::ratio<1>>
using electric_resistance_t = detail::unit_t<'O', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using atto_ohm_t = electric_resistance_t<_Type, std::atto>;
template <typename _Type>
using femto_ohm_t = electric_resistance_t<_Type, std::femto>;
template <typename _Type>
using pico_ohm_t = electric_resistance_t<_Type, std::pico>;
template <typename _Type>
using nano_ohm_t = electric_resistance_t<_Type, std::nano>;
template <typename _Type>
using micro_ohm_t = electric_resistance_t<_Type, std::micro>;
template <typename _Type>
using milli_ohm_t = electric_resistance_t<_Type, std::milli>;
template <typename _Type>
using ohm_t = electric_resistance_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_ohm_t = electric_resistance_t<_Type, std::kilo>;
template <typename _Type>
using mega_ohm_t = electric_resistance_t<_Type, std::mega>;
template <typename _Type>
using giga_ohm_t = electric_resistance_t<_Type, std::giga>;
template <typename _Type>
using tera_ohm_t = electric_resistance_t<_Type, std::tera>;
template <typename _Type>
using peta_ohm_t = electric_resistance_t<_Type, std::peta>;
template <typename _Type>
using exa_ohm_t = electric_resistance_t<_Type, std::exa>;

namespace detail {} // namespace detail

inline namespace literals {
template <char... _Digits> constexpr auto operator""_aOhm() {
  return SI::detail::check_overflow<atto_ohm_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_fOhm() {
  return SI::detail::check_overflow<femto_ohm_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_pOhm() {
  return SI::detail::check_overflow<pico_ohm_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nOhm() {
  return SI::detail::check_overflow<nano_ohm_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_uOhm() {
  return SI::detail::check_overflow<micro_ohm_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mOhm() {
  return SI::detail::check_overflow<milli_ohm_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Ohm() {
  return SI::detail::check_overflow<ohm_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kOhm() {
  return SI::detail::check_overflow<kilo_ohm_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MOhm() {
  return SI::detail::check_overflow<mega_ohm_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_GOhm() {
  return SI::detail::check_overflow<giga_ohm_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_TOhm() {
  return SI::detail::check_overflow<tera_ohm_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_POhm() {
  return SI::detail::check_overflow<peta_ohm_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_EOhm() {
  return SI::detail::check_overflow<exa_ohm_t<int64_t>, _Digits...>();
}

constexpr auto operator""_aOhm(long double value) {
  return atto_ohm_t<long double>{value};
}

constexpr auto operator""_fOhm(long double value) {
  return femto_ohm_t<long double>{value};
}

constexpr auto operator""_pOhm(long double value) {
  return pico_ohm_t<long double>{value};
}

constexpr auto operator""_nOhm(long double value) {
  return nano_ohm_t<long double>{value};
}

constexpr auto operator""_uOhm(long double value) {
  return micro_ohm_t<long double>{value};
}

constexpr auto operator""_mOhm(long double value) {
  return milli_ohm_t<long double>{value};
}

constexpr auto operator""_Ohm(long double value) {
  return ohm_t<long double>{value};
}

constexpr auto operator""_kOhm(long double value) {
  return kilo_ohm_t<long double>{value};
}

constexpr auto operator""_MOhm(long double value) {
  return mega_ohm_t<long double>{value};
}

constexpr auto operator""_GOhm(long double value) {
  return giga_ohm_t<long double>{value};
}

constexpr auto operator""_TOhm(long double value) {
  return tera_ohm_t<long double>{value};
}

constexpr auto operator""_POhm(long double value) {
  return peta_ohm_t<long double>{value};
}

constexpr auto operator""_EOhm(long double value) {
  return exa_ohm_t<long double>{value};
}

} // namespace literals
} // namespace SI