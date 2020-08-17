/**
 * This file is part of "SI" version 1.7.5
 * A header only c++ library that provides type safety and user defined literals
 * for handling pyhsical values defined in the International System of
 * Units
 *
 * https://github.com/bernedom/SI
 *
 * SPDX-License-Identifier: MIT
 *
 **/
#pragma once
#include "detail/number_parser.h"
#include "detail/unit.h"
#include "detail/unit_symbol.h"

///@todo add kilkton (kilotonne), megatonne etc

namespace SI {

template <typename _type, typename _ratio>
using mass_t = detail::unit_t<'M', 1, _type, _ratio>;

template <typename _type> using femto_gram_t = mass_t<_type, std::atto>;
template <typename _type> using pico_gram_t = mass_t<_type, std::femto>;
template <typename _type> using nano_gram_t = mass_t<_type, std::pico>;
template <typename _type> using micro_gram_t = mass_t<_type, std::nano>;
template <typename _type> using milli_gram_t = mass_t<_type, std::micro>;
template <typename _type> using gram_t = mass_t<_type, std::milli>;
template <typename _type> using kilo_gram_t = mass_t<_type, std::ratio<1>>;
template <typename _type> using ton_t = mass_t<_type, std::kilo>;

// specialize unit_symbol for usage with stream operators
// due to the standard SI unit being 'kg' instead of 'g'
// ratios has to be multiplied by 1000/1 and explicit template specialization is
// needed for the 'ton' and 'gram'
template <>
struct unit_symbol<'M', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'k', 'g'> {};

template <>
struct unit_symbol<'M', std::milli> : SI::detail::unit_symbol_impl<'g'> {};

template <>
struct unit_symbol<'M', std::kilo> : SI::detail::unit_symbol_impl<'t'> {};

template <typename _ratio>
struct unit_symbol<'M', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<std::ratio_multiply<
                                       _ratio, std::kilo>>::value,
                                   'g'> {};

inline namespace literals {

template <char... _digits> constexpr femto_gram_t<int64_t> operator""_fg() {
  return femto_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr pico_gram_t<int64_t> operator""_pg() {
  return pico_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr nano_gram_t<int64_t> operator""_ng() {
  return nano_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr micro_gram_t<int64_t> operator""_ug() {
  return micro_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr milli_gram_t<int64_t> operator""_mg() {
  return milli_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr gram_t<int64_t> operator""_g() {
  return gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr kilo_gram_t<int64_t> operator""_kg() {
  return kilo_gram_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

template <char... _digits> constexpr ton_t<int64_t> operator""_t() {
  return ton_t<int64_t>{SI::detail::parsing::Number<_digits...>::value};
}

constexpr femto_gram_t<long double> operator""_fg(long double value) {
  return femto_gram_t<long double>{value};
}

constexpr pico_gram_t<long double> operator""_pg(long double value) {
  return pico_gram_t<long double>{value};
}

constexpr nano_gram_t<long double> operator""_ng(long double value) {
  return nano_gram_t<long double>{value};
}

constexpr micro_gram_t<long double> operator""_ug(long double value) {
  return micro_gram_t<long double>{value};
}

constexpr milli_gram_t<long double> operator"" _mg(long double mg) {
  return milli_gram_t<long double>(mg);
}

constexpr gram_t<long double> operator"" _g(long double g) {
  return gram_t<long double>(g);
}

constexpr kilo_gram_t<long double> operator"" _kg(long double kg) {
  return kilo_gram_t<long double>(kg);
}
constexpr ton_t<long double> operator"" _t(long double t) {
  return ton_t<long double>(t);
}

} // namespace literals
} // namespace SI