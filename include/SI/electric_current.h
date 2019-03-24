#pragma once

#include "detail/unit.h"

namespace SI {

template <typename _Type, typename _Ratio>
using electric_current_t = detail::unit_t<'I', 1, _Type, _Ratio>;

template <typename _Type>
using atto_ampere_t = electric_current_t<_Type, std::atto>;
template <typename _Type>
using femto_ampere_t = electric_current_t<_Type, std::femto>;
template <typename _Type>
using pico_ampere_t = electric_current_t<_Type, std::pico>;
template <typename _Type>
using nano_ampere_t = electric_current_t<_Type, std::nano>;
template <typename _Type>
using micro_ampere_t = electric_current_t<_Type, std::micro>;
template <typename _Type>
using milli_ampere_t = electric_current_t<_Type, std::milli>;
template <typename _Type>
using ampere_t = electric_current_t<_Type, std::ratio<1>>;
template <typename _Type>
using kilo_ampere_t = electric_current_t<_Type, std::kilo>;
template <typename _Type>
using mega_ampere_t = electric_current_t<_Type, std::mega>;
template <typename _Type>
using giga_ampere_t = electric_current_t<_Type, std::giga>;
template <typename _Type>
using tera_ampere_t = electric_current_t<_Type, std::tera>;
template <typename _Type>
using peta_ampere_t = electric_current_t<_Type, std::peta>;
template <typename _Type>
using exa_ampere_t = electric_current_t<_Type, std::exa>;

inline namespace literals {

template <char... _Digits> constexpr auto operator""_aA() {
  return SI::detail::check_overflow<atto_ampere_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_fA() {
  return SI::detail::check_overflow<femto_ampere_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_pA() {
  return SI::detail::check_overflow<pico_ampere_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nA() {
  return SI::detail::check_overflow<nano_ampere_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_uA() {
  return SI::detail::check_overflow<micro_ampere_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mA() {
  return SI::detail::check_overflow<milli_ampere_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_A() {
  return SI::detail::check_overflow<ampere_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kA() {
  return SI::detail::check_overflow<kilo_ampere_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MA() {
  return SI::detail::check_overflow<mega_ampere_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_GA() {
  return SI::detail::check_overflow<giga_ampere_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_TA() {
  return SI::detail::check_overflow<tera_ampere_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_PA() {
  return SI::detail::check_overflow<peta_ampere_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_EA() {
  return SI::detail::check_overflow<exa_ampere_t<int64_t>, _Digits...>();
}

constexpr auto operator""_aA(long double value) {
  return atto_ampere_t<long double>{value};
}

constexpr auto operator""_fA(long double value) {
  return femto_ampere_t<long double>{value};
}

constexpr auto operator""_pA(long double value) {
  return pico_ampere_t<long double>{value};
}

constexpr auto operator""_nA(long double value) {
  return nano_ampere_t<long double>{value};
}

constexpr auto operator""_uA(long double value) {
  return micro_ampere_t<long double>{value};
}

constexpr auto operator""_mA(long double value) {
  return milli_ampere_t<long double>{value};
}

constexpr auto operator""_A(long double value) {
  return ampere_t<long double>{value};
}

constexpr auto operator""_kA(long double value) {
  return kilo_ampere_t<long double>{value};
}

constexpr auto operator""_MA(long double value) {
  return mega_ampere_t<long double>{value};
}

constexpr auto operator""_GA(long double value) {
  return giga_ampere_t<long double>{value};
}

constexpr auto operator""_TA(long double value) {
  return tera_ampere_t<long double>{value};
}

constexpr auto operator""_PA(long double value) {
  return peta_ampere_t<long double>{value};
}

constexpr auto operator""_EA(long double value) {
  return exa_ampere_t<long double>{value};
}

} // namespace literals
} // namespace SI