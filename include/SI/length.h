#pragma once
#include <limits>
#include <ratio>
#include <stdexcept>

#include "detail/unit.h"

namespace SI {
template <typename _Type, typename _Ratio>
using length_t = detail::unit_t<'L', 1, _Type, _Ratio>;

template <typename _Type> using meter_t = length_t<_Type, std::ratio<1>>;
template <typename _Type> using milli_meter_t = length_t<_Type, std::milli>;
template <typename _Type> using centi_meter_t = length_t<_Type, std::centi>;
template <typename _Type> using kilo_meter_t = length_t<_Type, std::kilo>;

inline namespace literals {

template <char... _Digits> constexpr auto operator""_m() {
  return SI::detail::check_overflow<meter_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _km() {
  return SI::detail::check_overflow<kilo_meter_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _cm() {
  return SI::detail::check_overflow<centi_meter_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator"" _mm() {
  return SI::detail::check_overflow<milli_meter_t<int64_t>, _Digits...>();
}

constexpr auto operator"" _m(long double m) { return meter_t<long double>(m); }

constexpr auto operator"" _km(long double km) {
  return kilo_meter_t<long double>(km);
}

constexpr auto operator"" _cm(long double cm) {
  return centi_meter_t<long double>(cm);
}

constexpr auto operator"" _mm(long double mm) {
  return milli_meter_t<long double>(mm);
}
} // namespace literals
} // namespace SI
