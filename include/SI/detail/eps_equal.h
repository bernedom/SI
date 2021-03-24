#pragma once

#include <limits>
#include <numeric>
#include <type_traits>

namespace SI::detail {

template <typename T, std::enable_if_t<std::is_floating_point_v<T>> * = nullptr>
constexpr bool eps_equals(const T &lhs, const T &rhs) {

  return (lhs - rhs) < std::numeric_limits<T>::epsilon() &&
         (lhs - rhs) > -std::numeric_limits<T>::epsilon();
  // return std::abs(lhs - rhs) < std::numeric_limits<T>::epsilon();
}

} // namespace SI::detail