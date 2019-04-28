#pragma once

#include <chrono>
#include <ratio>

#include "detail/unit.h"
namespace SI {

namespace detail {
template <char _Exponent, typename _Type, typename _Ratio>
using time_base_t = detail::unit_t<'T', _Exponent, _Type, _Ratio>;
}
template <typename _Type, typename _Ratio>
using time_t = detail::time_base_t<1, _Type, _Ratio>;

template <typename _Type, typename _Ratio>
using time_squared_t = detail::time_base_t<2, _Type, _Ratio>;

template <typename _Type> using atto_seconds_t = time_t<_Type, std::atto>;
template <typename _Type> using femto_seconds_t = time_t<_Type, std::femto>;
template <typename _Type> using pico_seconds_t = time_t<_Type, std::pico>;
template <typename _Type> using nano_seconds_t = time_t<_Type, std::nano>;
template <typename _Type>
using micro_seconds_t = time_t<_Type, std::chrono::microseconds::period>;
template <typename _Type>
using milli_seconds_t = time_t<_Type, std::chrono::milliseconds::period>;
template <typename _Type> using seconds_t = time_t<_Type, std::ratio<1>>;
template <typename _Type>
using minutes_t = time_t<_Type, std::chrono::minutes::period>;
template <typename _Type>
using hours_t = time_t<_Type, std::chrono::hours::period>;

inline namespace literals {

template <char... _Digits> constexpr auto operator""_as() {
  return SI::detail::check_overflow<atto_seconds_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_fs() {
  return SI::detail::check_overflow<femto_seconds_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_ps() {
  return SI::detail::check_overflow<pico_seconds_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_ns() {
  return SI::detail::check_overflow<nano_seconds_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _us() {
  return SI::detail::check_overflow<SI::micro_seconds_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _ms() {
  return SI::detail::check_overflow<SI::milli_seconds_t<int64_t>, _Digits...>();
}
template <char... _Digits> constexpr auto operator"" _s() {
  return SI::detail::check_overflow<SI::seconds_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _min() {
  return SI::detail::check_overflow<SI::minutes_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _h() {
  return SI::detail::check_overflow<hours_t<int64_t>, _Digits...>();
}

constexpr auto operator""_as(long double value) {
  return atto_seconds_t<long double>{value};
}

constexpr auto operator""_fs(long double value) {
  return femto_seconds_t<long double>{value};
}

constexpr auto operator""_ps(long double value) {
  return pico_seconds_t<long double>{value};
}

constexpr auto operator""_ns(long double value) {
  return nano_seconds_t<long double>{value};
}

constexpr auto operator"" _us(long double us) {
  return SI::micro_seconds_t<long double>{us};
}

constexpr auto operator"" _ms(long double ms) {
  return SI::milli_seconds_t<long double>{ms};
}

constexpr auto operator"" _s(long double s) {
  return SI::seconds_t<long double>{s};
}

constexpr auto operator"" _min(long double min) {
  return SI::minutes_t<long double>{min};
}

constexpr auto operator"" _h(long double h) {
  return SI::hours_t<long double>{h};
}

} // namespace literals
} // namespace SI