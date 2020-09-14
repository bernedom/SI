#include <SI/detail/unit.h>

auto operator_divide_from_integral_test() {
  constexpr int64_t v1{1};
  constexpr SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::kilo> v2{1};

  constexpr auto r = v1 / v2;
  return r;
}
