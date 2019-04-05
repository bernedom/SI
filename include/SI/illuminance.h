#pragma once

#include "area.h"
#include "detail/operator_helpers.h"
#include "detail/unit.h"
#include "luminous_flux.h"

namespace SI {
template <typename _Type, class _Ratio = std::ratio<1>>
using illuminance_t = detail::unit_t<'i', 1, _Type, _Ratio>;

/// specific units
template <typename _Type> using atto_lux_t = illuminance_t<_Type, std::atto>;
template <typename _Type> using femto_lux_t = illuminance_t<_Type, std::femto>;
template <typename _Type> using pico_lux_t = illuminance_t<_Type, std::pico>;
template <typename _Type> using nano_lux_t = illuminance_t<_Type, std::nano>;
template <typename _Type> using micro_lux_t = illuminance_t<_Type, std::micro>;
template <typename _Type> using milli_lux_t = illuminance_t<_Type, std::milli>;
template <typename _Type> using lux_t = illuminance_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_lux_t = illuminance_t<_Type, std::kilo>;
template <typename _Type> using mega_lux_t = illuminance_t<_Type, std::mega>;
template <typename _Type> using giga_lux_t = illuminance_t<_Type, std::giga>;
template <typename _Type> using tera_lux_t = illuminance_t<_Type, std::tera>;
template <typename _Type> using peta_lux_t = illuminance_t<_Type, std::peta>;
template <typename _Type> using exa_lux_t = illuminance_t<_Type, std::exa>;

namespace detail {
BUILD_UNIT_FROM_DIVISON(illuminance_t, luminous_flux_t, area_t)
} // namespace detail

inline namespace literals {
template <char... _Digits> constexpr auto operator""_alx() {
  return SI::detail::check_overflow<atto_lux_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_flx() {
  return SI::detail::check_overflow<femto_lux_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_plx() {
  return SI::detail::check_overflow<pico_lux_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nlx() {
  return SI::detail::check_overflow<nano_lux_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_ulx() {
  return SI::detail::check_overflow<micro_lux_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mlx() {
  return SI::detail::check_overflow<milli_lux_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_lx() {
  return SI::detail::check_overflow<lux_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_klx() {
  return SI::detail::check_overflow<kilo_lux_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Mlx() {
  return SI::detail::check_overflow<mega_lux_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Glx() {
  return SI::detail::check_overflow<giga_lux_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Tlx() {
  return SI::detail::check_overflow<tera_lux_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Plx() {
  return SI::detail::check_overflow<peta_lux_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Elx() {
  return SI::detail::check_overflow<exa_lux_t<int64_t>, _Digits...>();
}

constexpr auto operator""_alx(long double value) {
  return atto_lux_t<long double>{value};
}

constexpr auto operator""_flx(long double value) {
  return femto_lux_t<long double>{value};
}

constexpr auto operator""_plx(long double value) {
  return pico_lux_t<long double>{value};
}

constexpr auto operator""_nlx(long double value) {
  return nano_lux_t<long double>{value};
}

constexpr auto operator""_ulx(long double value) {
  return micro_lux_t<long double>{value};
}

constexpr auto operator""_mlx(long double value) {
  return milli_lux_t<long double>{value};
}

constexpr auto operator""_lx(long double value) {
  return lux_t<long double>{value};
}

constexpr auto operator""_klx(long double value) {
  return kilo_lux_t<long double>{value};
}

constexpr auto operator""_Mlx(long double value) {
  return mega_lux_t<long double>{value};
}

constexpr auto operator""_Glx(long double value) {
  return giga_lux_t<long double>{value};
}

constexpr auto operator""_Tlx(long double value) {
  return tera_lux_t<long double>{value};
}

constexpr auto operator""_Plx(long double value) {
  return peta_lux_t<long double>{value};
}

constexpr auto operator""_Elx(long double value) {
  return exa_lux_t<long double>{value};
}

} // namespace literals
} // namespace SI