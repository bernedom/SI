#include <SI/detail/unit.h>

int operator_subtract_test() {
  constexpr SI::detail::unit_t<'X', 1, int64_t, std::ratio<1>> v1{1};
  constexpr SI::detail::unit_t<'X', 1, int64_t, std::kilo> v2{1};

  constexpr auto r = v1 - v2;
}