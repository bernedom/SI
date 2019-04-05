#pragma once

#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "electric_potential.h"
#include "magnetic_flux.h"
#include "time.h"

namespace SI {

/// @todo find a way to encapsulate   phi
template <typename _Type, class _Ratio = std::ratio<1>>
using magnetic_flux_t = detail::unit_t<'f', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using atto_weber_t = magnetic_flux_t<_Type, std::atto>;
template <typename _Type>
using femto_weber_t = magnetic_flux_t<_Type, std::femto>;
template <typename _Type>
using pico_weber_t = magnetic_flux_t<_Type, std::pico>;
template <typename _Type>
using nano_weber_t = magnetic_flux_t<_Type, std::nano>;
template <typename _Type>
using micro_weber_t = magnetic_flux_t<_Type, std::micro>;
template <typename _Type>
using milli_weber_t = magnetic_flux_t<_Type, std::milli>;
template <typename _Type> using weber_t = magnetic_flux_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_weber_t = magnetic_flux_t<_Type, std::kilo>;
template <typename _Type>
using mega_weber_t = magnetic_flux_t<_Type, std::mega>;
template <typename _Type>
using giga_weber_t = magnetic_flux_t<_Type, std::giga>;
template <typename _Type>
using tera_weber_t = magnetic_flux_t<_Type, std::tera>;
template <typename _Type>
using peta_weber_t = magnetic_flux_t<_Type, std::peta>;
template <typename _Type> using exa_weber_t = magnetic_flux_t<_Type, std::exa>;

namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(magnetic_flux_t, electric_potential_t, time_t)
}

inline namespace literals {
template <char... _Digits> constexpr auto operator""_aWb() {
  return SI::detail::check_overflow<atto_weber_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_fWb() {
  return SI::detail::check_overflow<femto_weber_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_pWb() {
  return SI::detail::check_overflow<pico_weber_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nWb() {
  return SI::detail::check_overflow<nano_weber_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_uWb() {
  return SI::detail::check_overflow<micro_weber_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mWb() {
  return SI::detail::check_overflow<milli_weber_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Wb() {
  return SI::detail::check_overflow<weber_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kWb() {
  return SI::detail::check_overflow<kilo_weber_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MWb() {
  return SI::detail::check_overflow<mega_weber_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_GWb() {
  return SI::detail::check_overflow<giga_weber_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_TWb() {
  return SI::detail::check_overflow<tera_weber_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_PWb() {
  return SI::detail::check_overflow<peta_weber_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_EWb() {
  return SI::detail::check_overflow<exa_weber_t<int64_t>, _Digits...>();
}

constexpr auto operator""_aWb(long double value) {
  return atto_weber_t<long double>{value};
}

constexpr auto operator""_fWb(long double value) {
  return femto_weber_t<long double>{value};
}

constexpr auto operator""_pWb(long double value) {
  return pico_weber_t<long double>{value};
}

constexpr auto operator""_nWb(long double value) {
  return nano_weber_t<long double>{value};
}

constexpr auto operator""_uWb(long double value) {
  return micro_weber_t<long double>{value};
}

constexpr auto operator""_mWb(long double value) {
  return milli_weber_t<long double>{value};
}

constexpr auto operator""_Wb(long double value) {
  return weber_t<long double>{value};
}

constexpr auto operator""_kWb(long double value) {
  return kilo_weber_t<long double>{value};
}

constexpr auto operator""_MWb(long double value) {
  return mega_weber_t<long double>{value};
}

constexpr auto operator""_GWb(long double value) {
  return giga_weber_t<long double>{value};
}

constexpr auto operator""_TWb(long double value) {
  return tera_weber_t<long double>{value};
}

constexpr auto operator""_PWb(long double value) {
  return peta_weber_t<long double>{value};
}

constexpr auto operator""_EWb(long double value) {
  return exa_weber_t<long double>{value};
}

} // namespace literals
} // namespace SI
