#pragma once

#include "acceleration.h"
#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "mass.h"

namespace SI {
template <typename _Type, class _Ratio = std::ratio<1>>
using force_t = detail::unit_t<'F', 1, _Type, _Ratio>;

/// specific units
template <typename _Type> using atto_newton_t = force_t<_Type, std::atto>;
template <typename _Type> using femto_newton_t = force_t<_Type, std::femto>;
template <typename _Type> using pico_newton_t = force_t<_Type, std::pico>;
template <typename _Type> using nano_newton_t = force_t<_Type, std::nano>;
template <typename _Type> using micro_newton_t = force_t<_Type, std::micro>;
template <typename _Type> using milli_newton_t = force_t<_Type, std::milli>;
template <typename _Type> using newton_t = force_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_newton_t = force_t<_Type, std::kilo>;
template <typename _Type> using mega_newton_t = force_t<_Type, std::mega>;
template <typename _Type> using giga_newton_t = force_t<_Type, std::giga>;
template <typename _Type> using tera_newton_t = force_t<_Type, std::tera>;
template <typename _Type> using peta_newton_t = force_t<_Type, std::peta>;
template <typename _Type> using exa_newton_t = force_t<_Type, std::exa>;

namespace detail {
BUILD_UNIT_FROM_MULTIPLICATION(force_t, mass_t, acceleration_t)
}

inline namespace literals {
template <char... _Digits> constexpr auto operator""_aN() {
  return SI::detail::check_overflow<atto_newton_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_fN() {
  return SI::detail::check_overflow<femto_newton_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_pN() {
  return SI::detail::check_overflow<pico_newton_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nN() {
  return SI::detail::check_overflow<nano_newton_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_uN() {
  return SI::detail::check_overflow<micro_newton_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mN() {
  return SI::detail::check_overflow<milli_newton_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_N() {
  return SI::detail::check_overflow<newton_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kN() {
  return SI::detail::check_overflow<kilo_newton_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MN() {
  return SI::detail::check_overflow<mega_newton_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_GN() {
  return SI::detail::check_overflow<giga_newton_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_TN() {
  return SI::detail::check_overflow<tera_newton_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_PN() {
  return SI::detail::check_overflow<peta_newton_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_EN() {
  return SI::detail::check_overflow<exa_newton_t<int64_t>, _Digits...>();
}

constexpr auto operator""_aN(long double value) {
  return atto_newton_t<long double>{value};
}

constexpr auto operator""_fN(long double value) {
  return femto_newton_t<long double>{value};
}

constexpr auto operator""_pN(long double value) {
  return pico_newton_t<long double>{value};
}

constexpr auto operator""_nN(long double value) {
  return nano_newton_t<long double>{value};
}

constexpr auto operator""_uN(long double value) {
  return micro_newton_t<long double>{value};
}

constexpr auto operator""_mN(long double value) {
  return milli_newton_t<long double>{value};
}

constexpr auto operator""_N(long double value) {
  return newton_t<long double>{value};
}

constexpr auto operator""_kN(long double value) {
  return kilo_newton_t<long double>{value};
}

constexpr auto operator""_MN(long double value) {
  return mega_newton_t<long double>{value};
}

constexpr auto operator""_GN(long double value) {
  return giga_newton_t<long double>{value};
}

constexpr auto operator""_TN(long double value) {
  return tera_newton_t<long double>{value};
}

constexpr auto operator""_PN(long double value) {
  return peta_newton_t<long double>{value};
}

constexpr auto operator""_EN(long double value) {
  return exa_newton_t<long double>{value};
}

} // namespace literals
} // namespace SI