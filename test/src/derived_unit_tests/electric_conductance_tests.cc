#include <catch.hpp>

#include <SI/electric_conductance.h>
#include <SI/electric_resistance.h>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aS THEN result is a "
          "electric_conductance type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aS;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_conductance_t<
                                                 int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aS;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_conductance_t<
                                        long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fS THEN result is a "
          "electric_conductance type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fS;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_conductance_t<
                                                 int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fS;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_conductance_t<
                                        long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pS THEN result is a "
          "electric_conductance type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pS;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_conductance_t<
                                                 int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pS;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_conductance_t<
                                        long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nS THEN result is a "
          "electric_conductance type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nS;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_conductance_t<
                                                 int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nS;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_conductance_t<
                                        long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uS THEN result is a "
          "electric_conductance type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uS;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_conductance_t<
                                                 int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uS;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_conductance_t<
                                        long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mS THEN result is a "
          "electric_conductance type AND ratio 1 to 1000") {
  constexpr auto one = 1_mS;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_conductance_t<
                                                 int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mS;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_conductance_t<
                                        long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _S THEN result is a "
          "electric_conductance type AND ratio 1 to 1") {
  constexpr auto one = 1_S;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::electric_conductance_t<
                                      int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_S;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_conductance_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kS THEN result is a "
          "electric_conductance type AND ratio 1000 to 1") {
  constexpr auto one = 1_kS;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_conductance_t<
                                                 int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kS;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_conductance_t<
                                        long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MS THEN result is a "
          "electric_conductance type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MS;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_conductance_t<
                                                 int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MS;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_conductance_t<
                                        long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GS THEN result is a "
          "electric_conductance type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GS;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_conductance_t<
                                                 int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GS;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_conductance_t<
                                        long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TS THEN result is a "
          "electric_conductance type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TS;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_conductance_t<
                                                 int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TS;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_conductance_t<
                                        long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PS THEN result is a "
          "electric_conductance type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PS;
  STATIC_REQUIRE(std::is_same<decltype(one), const SI::electric_conductance_t<
                                                 int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PS;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_conductance_t<
                                        long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ES THEN result is a "
          "electric_conductance type AND ratio 10^18 to 1") {
  constexpr auto one = 1_ES;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_conductance_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_ES;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_conductance_t<
                                        long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_current value WHEN divided by an "
                   "electric_potential value THEN "
                   "result is a electric_conductance value",
                   "[electric_conductance][operator/]", int64_t, long double) {
  constexpr SI::electric_current_t<TestType, std::ratio<1>> electric_current{1};
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};

  constexpr auto result = electric_current / electric_potential;

  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_conductance_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_conductance value WHEN multiplied by an "
                   "electric_potential value "
                   "THEN result is a electric_current value",
                   "[electric_conductance][operator*]", int64_t, long double) {
  constexpr SI::electric_conductance_t<TestType, std::ratio<1>>
      electric_conductance{1};
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};

  constexpr auto result = electric_conductance * electric_potential;
  constexpr auto result_commutative = electric_potential * electric_conductance;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(std::is_same<
                 decltype(result),
                 const SI::electric_current_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_current value WHEN divided by a "
                   "electric_conductance value THEN "
                   "result is an electric_potential value",
                   "[electric_conductance][operator/]", int64_t, long double) {
  constexpr SI::electric_current_t<TestType, std::ratio<1>> electric_current{1};
  constexpr SI::electric_conductance_t<TestType, std::ratio<1>>
      electric_conductance{1};

  constexpr auto result = electric_current / electric_conductance;

  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_potential_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a scalar WHEN divided by a resistance value THEN "
                   "result is an electric conductance value",
                   "[electric_conductance][operator/]", int64_t, long double) {

  constexpr SI::electric_resistance_t<TestType, std::ratio<1>> resistance{5};
  constexpr TestType scalar{10};

  constexpr auto result = scalar / resistance;
  constexpr SI::siemens_t<TestType> expected{2};
  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::siemens_t<TestType>>::value);
  STATIC_REQUIRE(result == expected);
}

namespace {
/// helper struct to faciltate templated testcase
template <typename _ratio_lhs, typename _ratio_rhs> struct ratio_tuple {
  using ratio_lhs = _ratio_lhs;
  using ratio_rhs = _ratio_rhs;
};

} // namespace

TEMPLATE_TEST_CASE("GIVEN a scalar WHEN divided by a resistance value THEN "
                   "result is electric_conductance AND ratio is kept",
                   "[electric_conductance][operator/]",
                   (ratio_tuple<std::milli, std::kilo>),
                   (ratio_tuple<std::kilo, std::milli>),
                   (ratio_tuple<std::ratio<1>, std::ratio<1>>)) {

  constexpr auto resistance =
      SI::electric_resistance_t<int64_t, typename TestType::ratio_lhs>{5};
  constexpr int64_t scalar{10};

  constexpr auto result = scalar / resistance;
  constexpr SI::electric_conductance_t<int64_t, typename TestType::ratio_rhs>
      expected{2};
  STATIC_REQUIRE(std::ratio_equal<typename decltype(result)::ratio,
                                  typename TestType::ratio_rhs>::value);
  STATIC_REQUIRE(result == expected);
}