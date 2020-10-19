#include <SI/detail/unit.h>

auto operator_copy_assignment_test() {
  SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v1{1};
  constexpr SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v2{
      1};

  v1 = v2;
  return v1;
}
