#include <SI/detail/unit.h>
#include <SI/stream.h>
#include <catch.hpp>

#include <cstring>
#include <sstream>

namespace SI::detail {

// specialize unit_symbol for usage with stream operators
template <> struct unit_symbol<'X', std::ratio<1>> {
  static constexpr const char *value = "xx";
};

template <typename _ratio> struct unit_symbol<'X', _ratio> {
  static constexpr const char *value = concatter<'k', 'x', 'x'>::value_;
};
// template <> struct unit_symbol<'X', std::kilo> {
//   static constexpr const char *value = "kxx";
// };

} // namespace SI::detail

TEST_CASE("GIVEN a single character WHEN concated with an string THEN "
          "character is prepended to string") {
  constexpr const SI::detail::concatter<'x', 'A', 'B', 'C'> v;
  STATIC_REQUIRE(decltype(v)::value_[0] == 'x');
  STATIC_REQUIRE(decltype(v)::value_[1] == 'A');
  STATIC_REQUIRE(decltype(v)::value_[2] == 'B');
  STATIC_REQUIRE(decltype(v)::value_[3] == 'C');
}

TEST_CASE("GIVEN a character sequence WHEN passed to test_char_list THEN "
          "string is stored inside struct") {
  constexpr const SI::detail::test_char_list<'A', 'B', 'C'> v;
  STATIC_REQUIRE(decltype(v)::value_[0] == 'A');
  STATIC_REQUIRE(decltype(v)::value_[1] == 'B');
  STATIC_REQUIRE(decltype(v)::value_[2] == 'C');
}

TEST_CASE("GIVEN a unit AND ratio is <1> WHEN passed to an stringstream THEN "
          "resulting string contains value and unit symbol") {
  constexpr SI::detail::unit_t<'X', 1, int64_t, std::ratio<1>> v{100};

  std::stringstream ss;

  ss << v;
  REQUIRE(ss.str() == "100xx");
}

TEST_CASE("GIVEN a unit AND ratio is kilo WHEN passed to an stringstream THEN "
          "resulting string contains value and unit symbol AND unit symbol is "
          "prefixed with 'k'") {
  constexpr SI::detail::unit_t<'X', 1, int64_t, std::kilo> v{100};

  std::stringstream ss;

  ss << v;
  REQUIRE(ss.str() == "100kxx");
}
