#include <SI/detail/unit.h>

auto copy_ctor_test() {
  constexpr SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v1{
      1};
  constexpr SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::kilo> v2{v1};

  return v2;
}
