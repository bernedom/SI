#pragma once
#include "detail/unit.h"

namespace SI {

template <typename _Type, typename _Ratio>
using mass_t = detail::unit_t<'M', 1, _Type, _Ratio>;

template <typename _Type> using femto_gram_t = mass_t<_Type, std::atto>;
template <typename _Type> using pico_gram_t = mass_t<_Type, std::femto>;
template <typename _Type> using nano_gram_t = mass_t<_Type, std::pico>;
template <typename _Type> using micro_gram_t = mass_t<_Type, std::nano>;
template <typename _Type> using milli_gram_t = mass_t<_Type, std::micro>;
template <typename _Type> using gram_t = mass_t<_Type, std::milli>;
template <typename _Type> using kilo_gram_t = mass_t<_Type, std::ratio<1>>;
template <typename _Type> using ton_t = mass_t<_Type, std::kilo>;

inline namespace literals {

template <char... _Digits> constexpr auto operator""_fg() {
  return femto_gram_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_pg() {
  return pico_gram_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_ng() {
  return nano_gram_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_ug() {
  return micro_gram_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_mg() {
  return milli_gram_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_g() {
  return gram_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_kg() {
  return kilo_gram_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_t() {
  return ton_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr auto operator""_fg(long double value) {
  return femto_gram_t<long double>{value};
}

constexpr auto operator""_pg(long double value) {
  return pico_gram_t<long double>{value};
}

constexpr auto operator""_ng(long double value) {
  return nano_gram_t<long double>{value};
}

constexpr auto operator""_ug(long double value) {
  return micro_gram_t<long double>{value};
}

constexpr auto operator"" _mg(long double mg) {
  return milli_gram_t<long double>(mg);
}

constexpr auto operator"" _g(long double g) { return gram_t<long double>(g); }

constexpr auto operator"" _kg(long double kg) {
  return kilo_gram_t<long double>(kg);
}
constexpr auto operator"" _t(long double t) { return ton_t<long double>(t); }

} // namespace literals
} // namespace SI