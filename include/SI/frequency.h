#pragma once

#include "time.h"

namespace SI {
/// @todo find a way to add alternative dimension symbol  (f) to frequency
template <typename _Type, class _Ratio = std::ratio<1>>
using frequency_t = detail::time_base_t<-1, _Type, _Ratio>;

/// specific units
template <typename _Type> using atto_hertz_t = frequency_t<_Type, std::atto>;
template <typename _Type> using femto_hertz_t = frequency_t<_Type, std::femto>;
template <typename _Type> using pico_hertz_t = frequency_t<_Type, std::pico>;
template <typename _Type> using nano_hertz_t = frequency_t<_Type, std::nano>;
template <typename _Type> using micro_hertz_t = frequency_t<_Type, std::micro>;
template <typename _Type> using milli_hertz_t = frequency_t<_Type, std::milli>;
template <typename _Type> using hertz_t = frequency_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_hertz_t = frequency_t<_Type, std::kilo>;
template <typename _Type> using mega_hertz_t = frequency_t<_Type, std::mega>;
template <typename _Type> using giga_hertz_t = frequency_t<_Type, std::giga>;
template <typename _Type> using tera_hertz_t = frequency_t<_Type, std::tera>;
template <typename _Type> using peta_hertz_t = frequency_t<_Type, std::peta>;
template <typename _Type> using exa_hertz_t = frequency_t<_Type, std::exa>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_aHz() {
  return SI::detail::check_overflow<atto_hertz_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_fHz() {
  return SI::detail::check_overflow<femto_hertz_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_pHz() {
  return SI::detail::check_overflow<pico_hertz_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_nHz() {
  return SI::detail::check_overflow<nano_hertz_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_uHz() {
  return SI::detail::check_overflow<micro_hertz_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mHz() {
  return SI::detail::check_overflow<milli_hertz_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_Hz() {
  return SI::detail::check_overflow<hertz_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kHz() {
  return SI::detail::check_overflow<kilo_hertz_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_MHz() {
  return SI::detail::check_overflow<mega_hertz_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_GHz() {
  return SI::detail::check_overflow<giga_hertz_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_THz() {
  return SI::detail::check_overflow<tera_hertz_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_PHz() {
  return SI::detail::check_overflow<peta_hertz_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_EHz() {
  return SI::detail::check_overflow<exa_hertz_t<int64_t>, _Digits...>();
}

constexpr auto operator""_aHz(long double value) {
  return atto_hertz_t<long double>{value};
}

constexpr auto operator""_fHz(long double value) {
  return femto_hertz_t<long double>{value};
}

constexpr auto operator""_pHz(long double value) {
  return pico_hertz_t<long double>{value};
}

constexpr auto operator""_nHz(long double value) {
  return nano_hertz_t<long double>{value};
}

constexpr auto operator""_uHz(long double value) {
  return micro_hertz_t<long double>{value};
}

constexpr auto operator""_mHz(long double value) {
  return milli_hertz_t<long double>{value};
}

constexpr auto operator""_Hz(long double value) {
  return hertz_t<long double>{value};
}

constexpr auto operator""_kHz(long double value) {
  return kilo_hertz_t<long double>{value};
}

constexpr auto operator""_MHz(long double value) {
  return mega_hertz_t<long double>{value};
}

constexpr auto operator""_GHz(long double value) {
  return giga_hertz_t<long double>{value};
}

constexpr auto operator""_THz(long double value) {
  return tera_hertz_t<long double>{value};
}

constexpr auto operator""_PHz(long double value) {
  return peta_hertz_t<long double>{value};
}

constexpr auto operator""_EHz(long double value) {
  return exa_hertz_t<long double>{value};
}

} // namespace literals
} // namespace SI