#pragma once

#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "electric_potential.h"
#include "magnetic_flux.h"
#include "time.h"

namespace SI {

/// @todo find a way to encapsulate   phi
template <typename _Type, class _Ratio = std::ratio<1>>
using magnetic_field_t = detail::unit_t<'B', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using atto_tesla_t = magnetic_field_t<_Type, std::atto>;
template <typename _Type>
using femto_tesla_t = magnetic_field_t<_Type, std::femto>;
template <typename _Type>
using pico_tesla_t = magnetic_field_t<_Type, std::pico>;
template <typename _Type>
using nano_tesla_t = magnetic_field_t<_Type, std::nano>;
template <typename _Type>
using micro_tesla_t = magnetic_field_t<_Type, std::micro>;
template <typename _Type>
using milli_tesla_t = magnetic_field_t<_Type, std::milli>;
template <typename _Type>
using tesla_t = magnetic_field_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_tesla_t = magnetic_field_t<_Type, std::kilo>;
template <typename _Type>
using mega_tesla_t = magnetic_field_t<_Type, std::mega>;
template <typename _Type>
using giga_tesla_t = magnetic_field_t<_Type, std::giga>;
template <typename _Type>
using tera_tesla_t = magnetic_field_t<_Type, std::tera>;
template <typename _Type>
using peta_tesla_t = magnetic_field_t<_Type, std::peta>;
template <typename _Type> using exa_tesla_t = magnetic_field_t<_Type, std::exa>;

namespace detail {}

inline namespace literals {
template <char... _Digits> constexpr auto operator""_aT() {
  return SI::detail::check_overflow<atto_tesla_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_fT() {
  return SI::detail::check_overflow<femto_tesla_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_pT() {
  return SI::detail::check_overflow<pico_tesla_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nT() {
  return SI::detail::check_overflow<nano_tesla_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_uT() {
  return SI::detail::check_overflow<micro_tesla_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mT() {
  return SI::detail::check_overflow<milli_tesla_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_T() {
  return SI::detail::check_overflow<tesla_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kT() {
  return SI::detail::check_overflow<kilo_tesla_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MT() {
  return SI::detail::check_overflow<mega_tesla_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_GT() {
  return SI::detail::check_overflow<giga_tesla_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_TT() {
  return SI::detail::check_overflow<tera_tesla_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_PT() {
  return SI::detail::check_overflow<peta_tesla_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_ET() {
  return SI::detail::check_overflow<exa_tesla_t<int64_t>, _Digits...>();
}

constexpr auto operator""_aT(long double value) {
  return atto_tesla_t<long double>{value};
}

constexpr auto operator""_fT(long double value) {
  return femto_tesla_t<long double>{value};
}

constexpr auto operator""_pT(long double value) {
  return pico_tesla_t<long double>{value};
}

constexpr auto operator""_nT(long double value) {
  return nano_tesla_t<long double>{value};
}

constexpr auto operator""_uT(long double value) {
  return micro_tesla_t<long double>{value};
}

constexpr auto operator""_mT(long double value) {
  return milli_tesla_t<long double>{value};
}

constexpr auto operator""_T(long double value) {
  return tesla_t<long double>{value};
}

constexpr auto operator""_kT(long double value) {
  return kilo_tesla_t<long double>{value};
}

constexpr auto operator""_MT(long double value) {
  return mega_tesla_t<long double>{value};
}

constexpr auto operator""_GT(long double value) {
  return giga_tesla_t<long double>{value};
}

constexpr auto operator""_TT(long double value) {
  return tera_tesla_t<long double>{value};
}

constexpr auto operator""_PT(long double value) {
  return peta_tesla_t<long double>{value};
}

constexpr auto operator""_ET(long double value) {
  return exa_tesla_t<long double>{value};
}

} // namespace literals
} // namespace SI
