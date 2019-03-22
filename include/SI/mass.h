#pragma once
#include "detail/unit.h"

namespace SI {

template <typename _Type, typename _Ratio>
using mass_t = detail::unit_t<'M', 1, _Type, _Ratio>;

template <typename _Type> using gram_t = mass_t<_Type, std::milli>;

template <typename _Type> using kilo_gram_t = mass_t<_Type, std::ratio<1>>;
template <typename _Type> using milli_gram_t = mass_t<_Type, std::micro>;

inline namespace literals {
template <char... _Digits> constexpr auto operator""_g() {
  return SI::detail::check_overflow<gram_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_mg() {
  return SI::detail::check_overflow<milli_gram_t<int64_t>, _Digits...>();
}

template <char... _Digits> constexpr auto operator""_kg() {
  return SI::detail::check_overflow<kilo_gram_t<int64_t>, _Digits...>();
}

constexpr auto operator"" _g(long double g) { return gram_t<long double>(g); }

constexpr auto operator"" _mg(long double mg) {
  return milli_gram_t<long double>(mg);
}

constexpr auto operator"" _kg(long double kg) {
  return kilo_gram_t<long double>(kg);
}

} // namespace literals
} // namespace SI