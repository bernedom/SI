
#pragma once
#include "detail/string.h"
#include "detail/unit.h"

#include <ostream>

template <char _symbol, char _exponent, typename _type, typename _ratio>
std::ostream &
operator<<(std::ostream &stream,
           const SI::detail::unit_t<_symbol, _exponent, _type, _ratio> &unit) {
  stream << unit.raw_value()
         << SI::unit_symbol<_symbol, _ratio, _exponent>::str;
  return stream;
}
