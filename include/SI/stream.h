#include "detail/unit.h"

#include <ostream>

namespace SI::detail {

template <char... Cs> struct test_char_list {
  static_assert(sizeof...(Cs) > 0, "Empty strings are disallowed");
  static constexpr const char value_[] = {Cs..., '\0'};
};

template <char Cat, char... Cs>
struct concatter : test_char_list<Cat, Cs...> {};

/// Base struct. Unusable needs template overloading
template <char _dimension_symbol, typename _ratio> struct unit_symbol {
  static constexpr const char *value = "";
};

template <typename _ratio> struct ratio_prefix : std::false_type {};

template <>
struct ratio_prefix<std::kilo> : std::integral_constant<char, 'k'> {};

} // namespace SI::detail

template <char _symbol, char _exponent, typename _type, typename _ratio>
std::ostream &
operator<<(std::ostream &stream,
           const SI::detail::unit_t<_symbol, _exponent, _type, _ratio> &unit) {
  stream << unit.raw_value() << SI::detail::unit_symbol<_symbol, _ratio>::value;
  return stream;
}