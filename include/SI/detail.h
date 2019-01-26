#pragma once

#include <limits>
#include <ratio>
#include <stdexcept>
#include <type_traits>

#include <bits/parse_numbers.h> // for literals support.

namespace SI::detail {

/// Kudos to std::chrono authors for the overflow check of literals
template <typename _Rep, unsigned long long _Val>
struct _Checked_integral_constant
    : std::integral_constant<_Rep, static_cast<_Rep>(_Val)> {
  static_assert(_Checked_integral_constant::value >= 0 &&
                    _Checked_integral_constant::value == _Val,
                "literal value cannot be represented by duration type");
};

template <typename _Unit, char... _Digits> constexpr _Unit check_overflow() {
  using _Val = std::__parse_int::_Parse_int<_Digits...>;
  using _Rep = typename _Unit::internal_type;
  using _CheckedVal = _Checked_integral_constant<_Rep, _Val::value>;
  return _Unit{_CheckedVal::value};
}

/// to check if a template is an instatiation of std::ratio
template <typename _Tp> struct is_ratio : std::false_type {};

template <intmax_t _Num, intmax_t _Den>
struct is_ratio<std::ratio<_Num, _Den>> : std::true_type {};

template <typename T, typename std::enable_if<
                          std::is_floating_point<T>::value>::type * = nullptr>
constexpr bool epsEqual(const T &lhs, const T &rhs) {
  return std::abs(lhs - rhs) < std::numeric_limits<T>::epsilon();
}

} // namespace SI::detail
