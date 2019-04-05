#pragma once

#include "detail/operator_helpers.h"
#include "detail/unit.h"

namespace SI {

template <typename _Type, class _Ratio = std::ratio<1>>
using catalytic_activity_t = detail::unit_t<'K', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using atto_katal_t = catalytic_activity_t<_Type, std::atto>;
template <typename _Type>
using femto_katal_t = catalytic_activity_t<_Type, std::femto>;
template <typename _Type>
using pico_katal_t = catalytic_activity_t<_Type, std::pico>;
template <typename _Type>
using nano_katal_t = catalytic_activity_t<_Type, std::nano>;
template <typename _Type>
using micro_katal_t = catalytic_activity_t<_Type, std::micro>;
template <typename _Type>
using milli_katal_t = catalytic_activity_t<_Type, std::milli>;
template <typename _Type>
using katal_t = catalytic_activity_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_katal_t = catalytic_activity_t<_Type, std::kilo>;
template <typename _Type>
using mega_katal_t = catalytic_activity_t<_Type, std::mega>;
template <typename _Type>
using giga_katal_t = catalytic_activity_t<_Type, std::giga>;
template <typename _Type>
using tera_katal_t = catalytic_activity_t<_Type, std::tera>;
template <typename _Type>
using peta_katal_t = catalytic_activity_t<_Type, std::peta>;
template <typename _Type>
using exa_katal_t = catalytic_activity_t<_Type, std::exa>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_akat() {
  return SI::detail::check_overflow<atto_katal_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_fkat() {
  return SI::detail::check_overflow<femto_katal_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_pkat() {
  return SI::detail::check_overflow<pico_katal_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nkat() {
  return SI::detail::check_overflow<nano_katal_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_ukat() {
  return SI::detail::check_overflow<micro_katal_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mkat() {
  return SI::detail::check_overflow<milli_katal_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kat() {
  return SI::detail::check_overflow<katal_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kkat() {
  return SI::detail::check_overflow<kilo_katal_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Mkat() {
  return SI::detail::check_overflow<mega_katal_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Gkat() {
  return SI::detail::check_overflow<giga_katal_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Tkat() {
  return SI::detail::check_overflow<tera_katal_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Pkat() {
  return SI::detail::check_overflow<peta_katal_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Ekat() {
  return SI::detail::check_overflow<exa_katal_t<int64_t>, _Digits...>();
}

constexpr auto operator""_akat(long double value) {
  return atto_katal_t<long double>{value};
}

constexpr auto operator""_fkat(long double value) {
  return femto_katal_t<long double>{value};
}

constexpr auto operator""_pkat(long double value) {
  return pico_katal_t<long double>{value};
}

constexpr auto operator""_nkat(long double value) {
  return nano_katal_t<long double>{value};
}

constexpr auto operator""_ukat(long double value) {
  return micro_katal_t<long double>{value};
}

constexpr auto operator""_mkat(long double value) {
  return milli_katal_t<long double>{value};
}

constexpr auto operator""_kat(long double value) {
  return katal_t<long double>{value};
}

constexpr auto operator""_kkat(long double value) {
  return kilo_katal_t<long double>{value};
}

constexpr auto operator""_Mkat(long double value) {
  return mega_katal_t<long double>{value};
}

constexpr auto operator""_Gkat(long double value) {
  return giga_katal_t<long double>{value};
}

constexpr auto operator""_Tkat(long double value) {
  return tera_katal_t<long double>{value};
}

constexpr auto operator""_Pkat(long double value) {
  return peta_katal_t<long double>{value};
}

constexpr auto operator""_Ekat(long double value) {
  return exa_katal_t<long double>{value};
}

} // namespace literals
} // namespace SI
