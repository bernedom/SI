
#include "detail/streaming.h"

#include <ostream>

namespace SI {
/// Base struct. Unusable needs template overloading
template <char _dimension_symbol, typename _ratio>
struct unit_symbol : public std::false_type {};

} // namespace SI
template <char _symbol, char _exponent, typename _type, typename _ratio>
std::ostream &
operator<<(std::ostream &stream,
           const SI::detail::unit_t<_symbol, _exponent, _type, _ratio> &unit) {
  stream << unit.raw_value() << SI::unit_symbol<_symbol, _ratio>::str;
  return stream;
}
