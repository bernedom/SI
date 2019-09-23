#include "detail/unit.h"

#include <array>
#include <ostream>
#include <string_view>

namespace SI::detail {

template <char... Cs> struct unit_ratio_symbol {
  static_assert(sizeof...(Cs) > 0, "Empty strings are disallowed");
  // using double curly braces to because of a bug in clang5
  // See https://bugs.llvm.org/show_bug.cgi?id=21629
  static constexpr const std::array<char, sizeof...(Cs)> value{{Cs...}};
  static constexpr const std::string_view str{value.data(), value.size()};
};

/// Base struct. Unusable needs template overloading
template <char _dimension_symbol, typename _ratio>
struct unit_symbol : public std::false_type {};

/// base template for ratio prefix, unusable
template <typename _ratio> struct ratio_prefix : std::false_type {};

template <>
struct ratio_prefix<std::atto> : std::integral_constant<char, 'a'> {};
template <>
struct ratio_prefix<std::femto> : std::integral_constant<char, 'f'> {};
template <>
struct ratio_prefix<std::pico> : std::integral_constant<char, 'p'> {};
template <>
struct ratio_prefix<std::nano> : std::integral_constant<char, 'n'> {};
template <>
struct ratio_prefix<std::micro> : std::integral_constant<char, 'u'> {};
template <>
struct ratio_prefix<std::milli> : std::integral_constant<char, 'm'> {};
template <>
struct ratio_prefix<std::kilo> : std::integral_constant<char, 'k'> {};
template <>
struct ratio_prefix<std::mega> : std::integral_constant<char, 'M'> {};
template <>
struct ratio_prefix<std::giga> : std::integral_constant<char, 'G'> {};
template <>
struct ratio_prefix<std::peta> : std::integral_constant<char, 'P'> {};
template <>
struct ratio_prefix<std::exa> : std::integral_constant<char, 'E'> {};

} // namespace SI::detail

template <char _symbol, char _exponent, typename _type, typename _ratio>
std::ostream &
operator<<(std::ostream &stream,
           const SI::detail::unit_t<_symbol, _exponent, _type, _ratio> &unit) {
  stream << unit.raw_value() << SI::detail::unit_symbol<_symbol, _ratio>::str;
  return stream;
}
