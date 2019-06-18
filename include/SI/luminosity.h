#pragma once

#include "detail/number_parser.h"
#include "detail/unit.h"

namespace SI {

template <typename _Type, typename _Ratio>
using luminosity_t = detail::unit_t<'J', 1, _Type, _Ratio>;

template <typename _Type> using atto_candela_t = luminosity_t<_Type, std::atto>;
template <typename _Type>
using femto_candela_t = luminosity_t<_Type, std::femto>;
template <typename _Type> using pico_candela_t = luminosity_t<_Type, std::pico>;
template <typename _Type> using nano_candela_t = luminosity_t<_Type, std::nano>;
template <typename _Type>
using micro_candela_t = luminosity_t<_Type, std::micro>;
template <typename _Type>
using milli_candela_t = luminosity_t<_Type, std::milli>;
template <typename _Type> using candela_t = luminosity_t<_Type, std::ratio<1>>;
template <typename _Type> using kilo_candela_t = luminosity_t<_Type, std::kilo>;
template <typename _Type> using mega_candela_t = luminosity_t<_Type, std::mega>;
template <typename _Type> using giga_candela_t = luminosity_t<_Type, std::giga>;
template <typename _Type> using tera_candela_t = luminosity_t<_Type, std::tera>;
template <typename _Type> using peta_candela_t = luminosity_t<_Type, std::peta>;
template <typename _Type> using exa_candela_t = luminosity_t<_Type, std::exa>;

inline namespace literals {

template <char... _Digits> constexpr auto operator""_acd() {
  return atto_candela_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_fcd() {
  return femto_candela_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_pcd() {
  return pico_candela_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_ncd() {
  return nano_candela_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_ucd() {
  return micro_candela_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_mcd() {
  return milli_candela_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_cd() {
  return candela_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_kcd() {
  return kilo_candela_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_Mcd() {
  return mega_candela_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_Gcd() {
  return giga_candela_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_Tcd() {
  return tera_candela_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_Pcd() {
  return peta_candela_t<int64_t>{
      SI::detail::parsing::Number<_Digits...>::value};
}

template <char... _Digits> constexpr auto operator""_Ecd() {
  return exa_candela_t<int64_t>{SI::detail::parsing::Number<_Digits...>::value};
}

constexpr auto operator""_acd(long double value) {
  return atto_candela_t<long double>{value};
}

constexpr auto operator""_fcd(long double value) {
  return femto_candela_t<long double>{value};
}

constexpr auto operator""_pcd(long double value) {
  return pico_candela_t<long double>{value};
}

constexpr auto operator""_ncd(long double value) {
  return nano_candela_t<long double>{value};
}

constexpr auto operator""_ucd(long double value) {
  return micro_candela_t<long double>{value};
}

constexpr auto operator""_mcd(long double value) {
  return milli_candela_t<long double>{value};
}

constexpr auto operator""_cd(long double value) {
  return candela_t<long double>{value};
}

constexpr auto operator""_kcd(long double value) {
  return kilo_candela_t<long double>{value};
}

constexpr auto operator""_Mcd(long double value) {
  return mega_candela_t<long double>{value};
}

constexpr auto operator""_Gcd(long double value) {
  return giga_candela_t<long double>{value};
}

constexpr auto operator""_Tcd(long double value) {
  return tera_candela_t<long double>{value};
}

constexpr auto operator""_Pcd(long double value) {
  return peta_candela_t<long double>{value};
}

constexpr auto operator""_Ecd(long double value) {
  return exa_candela_t<long double>{value};
}

} // namespace literals
} // namespace SI