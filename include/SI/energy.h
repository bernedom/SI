#pragma once

#include "area.h"
#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "force.h"

namespace SI {
template <typename _Type, class _Ratio = std::ratio<1>>
using energy_t = detail::unit_t<'E', 1, _Type, _Ratio>;

/// specific units
template <typename _Type> using atto_joule_t = energy_t<_Type, std::atto>;
template <typename _Type> using femto_joule_t = energy_t<_Type, std::femto>;
template <typename _Type> using pico_joule_t = energy_t<_Type, std::pico>;
template <typename _Type> using nano_joule_t = energy_t<_Type, std::nano>;
template <typename _Type> using micro_joule_t = energy_t<_Type, std::micro>;
template <typename _Type> using milli_joule_t = energy_t<_Type, std::milli>;
template <typename _Type> using joule_t = energy_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_joule_t = energy_t<_Type, std::kilo>;
template <typename _Type> using mega_joule_t = energy_t<_Type, std::mega>;
template <typename _Type> using giga_joule_t = energy_t<_Type, std::giga>;
template <typename _Type> using tera_joule_t = energy_t<_Type, std::tera>;
template <typename _Type> using peta_joule_t = energy_t<_Type, std::peta>;
template <typename _Type> using exa_joule_t = energy_t<_Type, std::exa>;

namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(energy_t, force_t, length_t)
}

inline namespace literals {
template <char... _Digits> constexpr auto operator""_aJ() {
  return SI::detail::check_overflow<atto_joule_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_fJ() {
  return SI::detail::check_overflow<femto_joule_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_pJ() {
  return SI::detail::check_overflow<pico_joule_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nJ() {
  return SI::detail::check_overflow<nano_joule_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_uJ() {
  return SI::detail::check_overflow<micro_joule_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mJ() {
  return SI::detail::check_overflow<milli_joule_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_J() {
  return SI::detail::check_overflow<joule_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kJ() {
  return SI::detail::check_overflow<kilo_joule_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MJ() {
  return SI::detail::check_overflow<mega_joule_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_GJ() {
  return SI::detail::check_overflow<giga_joule_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_TJ() {
  return SI::detail::check_overflow<tera_joule_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_PJ() {
  return SI::detail::check_overflow<peta_joule_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_EJ() {
  return SI::detail::check_overflow<exa_joule_t<int64_t>, _Digits...>();
}

constexpr auto operator""_aJ(long double value) {
  return atto_joule_t<long double>{value};
}

constexpr auto operator""_fJ(long double value) {
  return femto_joule_t<long double>{value};
}

constexpr auto operator""_pJ(long double value) {
  return pico_joule_t<long double>{value};
}

constexpr auto operator""_nJ(long double value) {
  return nano_joule_t<long double>{value};
}

constexpr auto operator""_uJ(long double value) {
  return micro_joule_t<long double>{value};
}

constexpr auto operator""_mJ(long double value) {
  return milli_joule_t<long double>{value};
}

constexpr auto operator""_J(long double value) {
  return joule_t<long double>{value};
}

constexpr auto operator""_kJ(long double value) {
  return kilo_joule_t<long double>{value};
}

constexpr auto operator""_MJ(long double value) {
  return mega_joule_t<long double>{value};
}

constexpr auto operator""_GJ(long double value) {
  return giga_joule_t<long double>{value};
}

constexpr auto operator""_TJ(long double value) {
  return tera_joule_t<long double>{value};
}

constexpr auto operator""_PJ(long double value) {
  return peta_joule_t<long double>{value};
}

constexpr auto operator""_EJ(long double value) {
  return exa_joule_t<long double>{value};
}

} // namespace literals
} // namespace SI