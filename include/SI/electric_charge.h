#pragma once

#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "electric_current.h"
#include "time.h"

namespace SI {

/// unit for electric charge 'Q' where Q = T * I
template <typename _Type, typename _Ratio>
using electric_charge_t = detail::unit_t<'Q', 1, _Type, _Ratio>;

/// specific units
template <typename _Type>
using atto_coulomb_t = electric_charge_t<_Type, std::atto>;
template <typename _Type>
using femto_coulomb_t = electric_charge_t<_Type, std::femto>;
template <typename _Type>
using pico_coulomb_t = electric_charge_t<_Type, std::pico>;
template <typename _Type>
using nano_coulomb_t = electric_charge_t<_Type, std::nano>;
template <typename _Type>
using micro_coulomb_t = electric_charge_t<_Type, std::micro>;
template <typename _Type>
using milli_coulomb_t = electric_charge_t<_Type, std::milli>;
template <typename _Type>
using coulomb_t = electric_charge_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_coulomb_t = electric_charge_t<_Type, std::kilo>;
template <typename _Type>
using mega_coulomb_t = electric_charge_t<_Type, std::mega>;
template <typename _Type>
using giga_coulomb_t = electric_charge_t<_Type, std::giga>;
template <typename _Type>
using tera_coulomb_t = electric_charge_t<_Type, std::tera>;
template <typename _Type>
using peta_coulomb_t = electric_charge_t<_Type, std::peta>;
template <typename _Type>
using exa_coulomb_t = electric_charge_t<_Type, std::exa>;

/// @todo find out why the operators have to be in SI::detail
/// maybe using preceeding :: helps
namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(electric_charge_t, electric_current_t, time_t)
}

inline namespace literals {

template <char... _Digits> constexpr auto operator""_aC() {
  return SI::detail::check_overflow<atto_coulomb_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_fC() {
  return SI::detail::check_overflow<femto_coulomb_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_pC() {
  return SI::detail::check_overflow<pico_coulomb_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nC() {
  return SI::detail::check_overflow<nano_coulomb_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_uC() {
  return SI::detail::check_overflow<micro_coulomb_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mC() {
  return SI::detail::check_overflow<milli_coulomb_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_C() {
  return SI::detail::check_overflow<coulomb_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kC() {
  return SI::detail::check_overflow<kilo_coulomb_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MC() {
  return SI::detail::check_overflow<mega_coulomb_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_GC() {
  return SI::detail::check_overflow<giga_coulomb_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_TC() {
  return SI::detail::check_overflow<tera_coulomb_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_PC() {
  return SI::detail::check_overflow<peta_coulomb_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_EC() {
  return SI::detail::check_overflow<exa_coulomb_t<int64_t>, _Digits...>();
}

constexpr auto operator""_aC(long double value) {
  return atto_coulomb_t<long double>{value};
}

constexpr auto operator""_fC(long double value) {
  return femto_coulomb_t<long double>{value};
}

constexpr auto operator""_pC(long double value) {
  return pico_coulomb_t<long double>{value};
}

constexpr auto operator""_nC(long double value) {
  return nano_coulomb_t<long double>{value};
}

constexpr auto operator""_uC(long double value) {
  return micro_coulomb_t<long double>{value};
}

constexpr auto operator""_mC(long double value) {
  return milli_coulomb_t<long double>{value};
}

constexpr auto operator""_C(long double value) {
  return coulomb_t<long double>{value};
}

constexpr auto operator""_kC(long double value) {
  return kilo_coulomb_t<long double>{value};
}

constexpr auto operator""_MC(long double value) {
  return mega_coulomb_t<long double>{value};
}

constexpr auto operator""_GC(long double value) {
  return giga_coulomb_t<long double>{value};
}

constexpr auto operator""_TC(long double value) {
  return tera_coulomb_t<long double>{value};
}

constexpr auto operator""_PC(long double value) {
  return peta_coulomb_t<long double>{value};
}

constexpr auto operator""_EC(long double value) {
  return exa_coulomb_t<long double>{value};
}

} // namespace literals
} // namespace SI