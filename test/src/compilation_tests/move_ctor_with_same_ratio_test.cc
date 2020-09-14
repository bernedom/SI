#include <SI/detail/unit.h>

auto move_ctor_same_ratio_test() {
  constexpr SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v1{
      1};
  constexpr SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v2{
      std::move(v1)};

  return v2;
}
