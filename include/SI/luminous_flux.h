#pragma once

#include "detail/operator_helpers.h"
#include "detail/unit.h"

namespace SI {

/// @todo add building from candela / sterradiant
template <typename _Type, class _Ratio = std::ratio<1>>
using luminous_flux_t = detail::unit_t<'m', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using atto_lumen_t = luminous_flux_t<_Type, std::atto>;
template <typename _Type>
using femto_lumen_t = luminous_flux_t<_Type, std::femto>;
template <typename _Type>
using pico_lumen_t = luminous_flux_t<_Type, std::pico>;
template <typename _Type>
using nano_lumen_t = luminous_flux_t<_Type, std::nano>;
template <typename _Type>
using micro_lumen_t = luminous_flux_t<_Type, std::micro>;
template <typename _Type>
using milli_lumen_t = luminous_flux_t<_Type, std::milli>;
template <typename _Type> using lumen_t = luminous_flux_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_lumen_t = luminous_flux_t<_Type, std::kilo>;
template <typename _Type>
using mega_lumen_t = luminous_flux_t<_Type, std::mega>;
template <typename _Type>
using giga_lumen_t = luminous_flux_t<_Type, std::giga>;
template <typename _Type>
using tera_lumen_t = luminous_flux_t<_Type, std::tera>;
template <typename _Type>
using peta_lumen_t = luminous_flux_t<_Type, std::peta>;
template <typename _Type> using exa_lumen_t = luminous_flux_t<_Type, std::exa>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_alm() {
  return SI::detail::check_overflow<atto_lumen_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_flm() {
  return SI::detail::check_overflow<femto_lumen_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_plm() {
  return SI::detail::check_overflow<pico_lumen_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nlm() {
  return SI::detail::check_overflow<nano_lumen_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_ulm() {
  return SI::detail::check_overflow<micro_lumen_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mlm() {
  return SI::detail::check_overflow<milli_lumen_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_lm() {
  return SI::detail::check_overflow<lumen_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_klm() {
  return SI::detail::check_overflow<kilo_lumen_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Mlm() {
  return SI::detail::check_overflow<mega_lumen_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Glm() {
  return SI::detail::check_overflow<giga_lumen_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Tlm() {
  return SI::detail::check_overflow<tera_lumen_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Plm() {
  return SI::detail::check_overflow<peta_lumen_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Elm() {
  return SI::detail::check_overflow<exa_lumen_t<int64_t>, _Digits...>();
}

constexpr auto operator""_alm(long double value) {
  return atto_lumen_t<long double>{value};
}

constexpr auto operator""_flm(long double value) {
  return femto_lumen_t<long double>{value};
}

constexpr auto operator""_plm(long double value) {
  return pico_lumen_t<long double>{value};
}

constexpr auto operator""_nlm(long double value) {
  return nano_lumen_t<long double>{value};
}

constexpr auto operator""_ulm(long double value) {
  return micro_lumen_t<long double>{value};
}

constexpr auto operator""_mlm(long double value) {
  return milli_lumen_t<long double>{value};
}

constexpr auto operator""_lm(long double value) {
  return lumen_t<long double>{value};
}

constexpr auto operator""_klm(long double value) {
  return kilo_lumen_t<long double>{value};
}

constexpr auto operator""_Mlm(long double value) {
  return mega_lumen_t<long double>{value};
}

constexpr auto operator""_Glm(long double value) {
  return giga_lumen_t<long double>{value};
}

constexpr auto operator""_Tlm(long double value) {
  return tera_lumen_t<long double>{value};
}

constexpr auto operator""_Plm(long double value) {
  return peta_lumen_t<long double>{value};
}

constexpr auto operator""_Elm(long double value) {
  return exa_lumen_t<long double>{value};
}

} // namespace literals
} // namespace SI
