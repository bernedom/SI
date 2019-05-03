#pragma once

#include "detail/unit.h"

/// todo add rad and sr as literal operators

namespace SI {
/// Type for angle (which should be buildable from m/m (sin/cos))
template <typename _Type, typename _Ratio>
using angle_t = detail::unit_t<'r', 1, _Type, _Ratio>;

template <typename _Type> using atto_radiant_t = angle_t<_Type, std::atto>;
template <typename _Type> using femto_radiant_t = angle_t<_Type, std::femto>;
template <typename _Type> using pico_radiant_t = angle_t<_Type, std::pico>;
template <typename _Type> using nano_radiant_t = angle_t<_Type, std::nano>;
template <typename _Type> using micro_radiant_t = angle_t<_Type, std::micro>;
template <typename _Type> using milli_radiant_t = angle_t<_Type, std::milli>;
template <typename _Type> using radiant_t = angle_t<_Type, std::ratio<1>>;

inline namespace literals {

template <char... _Digits> constexpr auto operator""_arad() {
  return SI::detail::check_overflow<atto_radiant_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_frad() {
  return SI::detail::check_overflow<femto_radiant_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_prad() {
  return SI::detail::check_overflow<pico_radiant_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nrad() {
  return SI::detail::check_overflow<nano_radiant_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_urad() {
  return SI::detail::check_overflow<micro_radiant_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mrad() {
  return SI::detail::check_overflow<milli_radiant_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_rad() {
  return SI::detail::check_overflow<radiant_t<int64_t>, _Digits...>();
}

constexpr auto operator""_arad(long double value) {
  return atto_radiant_t<long double>{value};
}

constexpr auto operator""_frad(long double value) {
  return femto_radiant_t<long double>{value};
}

constexpr auto operator""_prad(long double value) {
  return pico_radiant_t<long double>{value};
}

constexpr auto operator""_nrad(long double value) {
  return nano_radiant_t<long double>{value};
}

constexpr auto operator""_urad(long double value) {
  return micro_radiant_t<long double>{value};
}

constexpr auto operator""_mrad(long double value) {
  return milli_radiant_t<long double>{value};
}

constexpr auto operator""_rad(long double value) {
  return radiant_t<long double>{value};
}

} // namespace literals

} // namespace SI