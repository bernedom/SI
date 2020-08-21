#include <SI/detail/number_parser.h>

/// helper literal

namespace {
template <char... _digits> constexpr int64_t operator""_literal_op() {
  return SI::detail::parsing::Number<_digits...>::value;
}

int overflow_test_pass() {
  constexpr auto v = 0xFFFFFFFFFFFFFFF_literal_op;
  /// needed to avoid unused variable warning
  if (v > 0) {
    return 1;
  }
  return 0;
}
} // namespace
