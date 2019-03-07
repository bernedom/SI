#include <catch.hpp>

#include <type_traits>

template <char _Str_digit>
struct Digit : public std::integral_constant<char, _Str_digit - '0'> {
  static_assert(_Str_digit >= '0' && _Str_digit <= '9');
};

TEST_CASE("GIVEN a value as string WHEN passed to a digit implementation THEN "
          "stored value is an integer") {
  using digit_0 = Digit<'0'>;
  static_assert(digit_0::value == 0);

  using digit_9 = Digit<'9'>;
  static_assert(digit_9::value == 9);
}
