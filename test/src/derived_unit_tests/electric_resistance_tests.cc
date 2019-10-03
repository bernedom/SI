#include <catch.hpp>

#include <SI/electric_conductance.h>
#include <SI/electric_resistance.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aOhm THEN result is a "
          "electric_resistance type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fOhm THEN result is a "
          "electric_resistance type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fOhm;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_resistance_t<
                                                 int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pOhm THEN result is a "
          "electric_resistance type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nOhm THEN result is a "
          "electric_resistance type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uOhm THEN result is a "
          "electric_resistance type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uOhm;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_resistance_t<
                                                 int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mOhm THEN result is a "
          "electric_resistance type AND ratio 1 to 1000") {
  constexpr auto one = 1_mOhm;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_resistance_t<
                                                 int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Ohm THEN result is a "
          "electric_resistance type AND ratio 1 to 1") {
  constexpr auto one = 1_Ohm;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::electric_resistance_t<
                                      int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_Ohm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kOhm THEN result is a "
          "electric_resistance type AND ratio 1000 to 1") {
  constexpr auto one = 1_kOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MOhm THEN result is a "
          "electric_resistance type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GOhm THEN result is a "
          "electric_resistance type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TOhm THEN result is a "
          "electric_resistance type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _POhm THEN result is a "
          "electric_resistance type AND ratio 10^15 to 1") {
  constexpr auto one = 1_POhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_POhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EOhm THEN result is a "
          "electric_resistance type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_resistance_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EOhm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_resistance_t<
                                        long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_potential value WHEN divided by an "
                   "electric_current value THEN "
                   "result is a electric_resistance value",
                   "[electric_resistance][operator/]", int64_t, long double) {
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};
  constexpr SI::electric_current_t<TestType, std::ratio<1>> electric_current{1};

  constexpr auto result = electric_potential / electric_current;

  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_resistance_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_resistance value WHEN multiplied by an "
                   "electric_current value "
                   "THEN result is a electric_potential value",
                   "[electric_resistance][operator*]", int64_t, long double) {
  constexpr SI::electric_resistance_t<TestType, std::ratio<1>>
      electric_resistance{1};
  constexpr SI::electric_current_t<TestType, std::ratio<1>> electric_current{1};

  constexpr auto result = electric_resistance * electric_current;
  constexpr auto result_commutative = electric_current * electric_resistance;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_potential_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_potential value WHEN divided by a "
                   "electric_resistance value THEN "
                   "result is an electric_current value",
                   "[electric_potential][operator/]", int64_t, long double) {
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};
  constexpr SI::electric_resistance_t<TestType, std::ratio<1>>
      electric_resistance{1};

  constexpr auto result = electric_potential / electric_resistance;

  STATIC_REQUIRE(std::is_same<
                 decltype(result),
                 const SI::electric_current_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a scalar WHEN divided by a conductance value THEN "
                   "result is an electric resistance value",
                   "[electric_resistance][operator/]", int64_t, long double) {

  constexpr SI::electric_conductance_t<TestType, std::ratio<1>> conductance{5};
  constexpr TestType scalar{10};

  constexpr auto result = scalar / conductance;
  constexpr SI::ohm_t<TestType> expected{2};
  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::ohm_t<TestType>>::value);
  STATIC_REQUIRE(result == expected);
}

namespace {
/// helper struct to faciltate templated testcase
template <typename _ratio_lhs, typename _ratio_rhs> struct ratio_tuple {
  using ratio_lhs = _ratio_lhs;
  using ratio_rhs = _ratio_rhs;
};

} // namespace

TEMPLATE_TEST_CASE("GIVEN a scalar WHEN divided by a conductance value THEN "
                   "result is electric_resistance AND ratio is inverse",
                   "[electric_conductance][operator/]",
                   (ratio_tuple<std::milli, std::kilo>),
                   (ratio_tuple<std::kilo, std::milli>),
                   (ratio_tuple<std::ratio<1>, std::ratio<1>>)) {

  constexpr auto conductance =
      SI::electric_conductance_t<int64_t, typename TestType::ratio_lhs>{5};
  constexpr int64_t scalar{10};

  constexpr auto result = scalar / conductance;
  constexpr SI::electric_resistance_t<int64_t, typename TestType::ratio_rhs>
      expected{2};
  STATIC_REQUIRE(std::ratio_equal<typename decltype(result)::ratio,
                                  typename TestType::ratio_rhs>::value);
  STATIC_REQUIRE(result == expected);
}

TEST_CASE("GIVEN a 1 atto Ohm WHEN passed to a streaming operator THEN "
          "result is '1aOhm'") {
  constexpr auto value = 1_aOhm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1aOhm");
}

TEST_CASE("GIVEN a 1 femto Ohm WHEN passed to a streaming operator THEN "
          "result is '1fOhm'") {
  constexpr auto value = 1_fOhm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1fOhm");
}

TEST_CASE("GIVEN a 1 pico Ohm WHEN passed to a streaming operator THEN "
          "result is '1pOhm'") {
  constexpr auto value = 1_pOhm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1pOhm");
}

TEST_CASE("GIVEN a 1 nano Ohm WHEN passed to a streaming operator THEN "
          "result is '1pOhm'") {
  constexpr auto value = 1_nOhm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1nOhm");
}

TEST_CASE("GIVEN a 1 micro Ohm WHEN passed to a streaming operator THEN "
          "result is '1uOhm'") {
  constexpr auto value = 1_uOhm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1uOhm");
}

TEST_CASE("GIVEN a 1 milli Ohm WHEN passed to a streaming operator THEN "
          "result is '1mOhm'") {
  constexpr auto value = 1_mOhm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1mOhm");
}

TEST_CASE("GIVEN a 1 Ohm WHEN passed to a streaming operator THEN result is "
          "'1Ohm'") {
  constexpr auto value = 1_Ohm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1Ohm");
}

TEST_CASE("GIVEN a 1 kilo Ohm WHEN passed to a streaming operator THEN "
          "result is '1kOhm'") {
  constexpr auto value = 1_kOhm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1kOhm");
}

TEST_CASE("GIVEN a 1 mega Ohm WHEN passed to a streaming operator THEN "
          "result is '1MOhm'") {
  constexpr auto value = 1_MOhm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1MOhm");
}

TEST_CASE("GIVEN a 1 giga Ohm WHEN passed to a streaming operator THEN "
          "result is '1GOhm'") {
  constexpr auto value = 1_GOhm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1GOhm");
}

TEST_CASE("GIVEN a 1 tera Ohm WHEN passed to a streaming operator THEN "
          "result is '1TOhm'") {
  constexpr auto value = 1_TOhm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1TOhm");
}

TEST_CASE("GIVEN a 1 exa Ohm WHEN passed to a streaming operator THEN "
          "result is '1EOhm'") {
  constexpr auto value = 1_EOhm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1EOhm");
}

TEST_CASE("GIVEN a 1 peta Ohm WHEN passed to a streaming operator THEN "
          "result is '1POhm'") {
  constexpr auto value = 1_POhm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1POhm");
}