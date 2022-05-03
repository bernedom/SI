#include <SI/detail/unit.h>
#include <SI/stream.h>
#include <catch2/catch.hpp>

#include <sstream>

namespace SI {

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'X', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'x', 'x'> {};

template <typename _ratio>
struct unit_symbol<'X', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'x',
                                   'x'> {};

} // namespace SI

TEST_CASE("GIVEN a character sequence WHEN passed to unit_symbol_impl THEN "
          "string is stored inside struct") {
  constexpr const SI::detail::unit_symbol_impl<'A', 'B', 'C'> v;
  STATIC_REQUIRE(decltype(v)::str[0] == 'A');
  STATIC_REQUIRE(decltype(v)::str[1] == 'B');
  STATIC_REQUIRE(decltype(v)::str[2] == 'C');
}

// honest tests

TEST_CASE("GIVEN a ratio atto WHEN passed to ratio_prefix THEN resulting char "
          "is 'a'") {
  STATIC_REQUIRE(SI::detail::ratio_prefix<std::atto>::value == 'a');
}

namespace {
template <typename _ratio, char _literal> struct helper_struct {
  using ratio = _ratio;
  using literal = std::integral_constant<char, _literal>;
};
} // namespace

TEMPLATE_TEST_CASE(
    "GIVEN a ratio WHEN passed to ratio_prefix THEN resulting "
    "char is the SI-defined literal",
    "[detail][streaming]", (helper_struct<std::atto, 'a'>),
    (helper_struct<std::femto, 'f'>), (helper_struct<std::pico, 'p'>),
    (helper_struct<std::nano, 'n'>), (helper_struct<std::micro, 'u'>),
    (helper_struct<std::milli, 'm'>), (helper_struct<std::kilo, 'k'>),
    (helper_struct<std::mega, 'M'>), (helper_struct<std::giga, 'G'>),
    (helper_struct<std::peta, 'P'>), (helper_struct<std::exa, 'E'>)) {

  STATIC_REQUIRE(SI::detail::ratio_prefix<typename TestType::ratio>::value ==
                 TestType::literal::value);
}

TEST_CASE("GIVEN a unit AND ratio is <1> WHEN passed to an stringstream THEN "
          "resulting string contains value and unit symbol") {
  constexpr SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v{
      100};

  std::stringstream ss;

  ss << v;
  REQUIRE(ss.str() == "100 xx");
}

TEST_CASE("GIVEN a unit AND ratio is kilo WHEN passed to an stringstream THEN "
          "resulting string contains value and unit symbol AND unit symbol is "
          "prefixed with 'k'") {
  constexpr SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::kilo> v{100};

  std::stringstream ss;

  ss << v;
  REQUIRE(ss.str() == "100 kxx");
}

TEST_CASE("GIVEN a unit AND ratio is atto WHEN passed to an stringstream THEN "
          "resulting string contains value and unit symbol AND unit symbol is "
          "prefixed with 'a'") {
  constexpr SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::atto> v{100};

  std::stringstream ss;

  ss << v;
  REQUIRE(ss.str() == "100 axx");
}

TEST_CASE("GIVEN a unit AND with ratio 1:1 WHEN converted to string THEN "
          "result is iunit symbol") {
  constexpr SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v{
      100};

  REQUIRE(SI::to_string(v) == "100 xx");
}

TEST_CASE("GIVEN a string `99 xx` WHEN streamed into a unit then resulting "
          "value is 99 and ratio is 1") {
  SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v{0};

  std::stringstream ss;
  ss << "99 xx";

  ss >> v;
  REQUIRE(v.value() == 99);
  REQUIRE(!ss.fail());
}

TEST_CASE("GIVEN a string `1 axx` WHEN streamed into a unit then resulting "
          "value is 1 and ratio is atto") {
  SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::atto> v{0};

  std::stringstream ss;
  ss << "99 axx";

  ss >> v;
  REQUIRE(v.value() == 99);
  REQUIRE(!ss.fail());
}

TEST_CASE("GIVEN a string `1 axx` WHEN streamed into a unit of the wrong ratio "
          "THEN failbit is set AND value is set") {

  SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>> v{0};

  std::stringstream ss;
  ss << "99 axx";

  ss >> v;
  REQUIRE(v.value() == 99);
  REQUIRE(ss.fail());
}