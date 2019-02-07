#pragma once

#include <limits>
#include <ratio>
#include <stdexcept>
#include <type_traits>

#include <bits/parse_numbers.h> // for literals support.

namespace SI::detail {

/// Kudos to std::chrono authors for the overflow check of literals
template <typename _Rep, unsigned long long _Val>
struct _checked_integral_constant
    : std::integral_constant<_Rep, static_cast<_Rep>(_Val)> {
  static_assert(_checked_integral_constant::value >= 0 &&
                    _checked_integral_constant::value == _Val,
                "literal value cannot be represented by duration type");
};

template <typename _Unit, char... _Digits> constexpr _Unit check_overflow() {
  using _Val = std::__parse_int::_Parse_int<_Digits...>;
  using _Rep = typename _Unit::internal_type;
  using _CheckedVal = _checked_integral_constant<_Rep, _Val::value>;
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

/// @todo consider specializing std::common type
/// as described here
/// https://stackoverflow.com/questions/36523038/stdcommon-type-trait-for-user-defined-types
/// or as std::chrono does
template <typename _ratio_lhs, typename _ratio_rhs> struct ratio_gcd {
private:
  typedef std::__static_gcd<_ratio_lhs::num, _ratio_rhs::num> __gcd_num;
  typedef std::__static_gcd<_ratio_lhs::den, _ratio_rhs::den> __gcd_den;

public:
  typedef std::ratio<__gcd_num::value,
                     (_ratio_lhs::den / __gcd_den::value) * _ratio_rhs::den>
      ratio;
};

} // namespace SI::detail
