#include <catch2/catch.hpp>

#include <SI/electric_conductance.h>
#include <SI/electric_resistance.h>
#include <SI/stream.h>
#include <sstream>

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
/// helper struct to facilitate templated testcase
template <typename _ratio_lhs, typename _ratio_rhs> struct ratio_tuple {
  using ratio_lhs = _ratio_lhs;
  using ratio_rhs = _ratio_rhs;
};

} // namespace

TEMPLATE_TEST_CASE("GIVEN a scalar WHEN divided by a resistance value THEN "
                   "result is electric_conductance AND ratio is inverse",
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

TEST_CASE("GIVEN a 1 atto Siemens WHEN passed to a streaming operator THEN "
          "result is '1aS'") {
  constexpr auto value = 1_aS;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 aS");
}

TEST_CASE("GIVEN a 1 femto Siemens WHEN passed to a streaming operator THEN "
          "result is '1fS'") {
  constexpr auto value = 1_fS;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fS");
}

TEST_CASE("GIVEN a 1 pico Siemens WHEN passed to a streaming operator THEN "
          "result is '1pS'") {
  constexpr auto value = 1_pS;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pS");
}

TEST_CASE("GIVEN a 1 nano Siemens WHEN passed to a streaming operator THEN "
          "result is '1pS'") {
  constexpr auto value = 1_nS;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nS");
}

TEST_CASE("GIVEN a 1 micro Siemens WHEN passed to a streaming operator THEN "
          "result is '1uS'") {
  constexpr auto value = 1_uS;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 uS");
}

TEST_CASE("GIVEN a 1 milli Siemens WHEN passed to a streaming operator THEN "
          "result is '1mS'") {
  constexpr auto value = 1_mS;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mS");
}

TEST_CASE(
    "GIVEN a 1 Siemens WHEN passed to a streaming operator THEN result is "
    "'1S'") {
  constexpr auto value = 1_S;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 S");
}

TEST_CASE("GIVEN a 1 kilo Siemens WHEN passed to a streaming operator THEN "
          "result is '1kS'") {
  constexpr auto value = 1_kS;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kS");
}

TEST_CASE("GIVEN a 1 mega Siemens WHEN passed to a streaming operator THEN "
          "result is '1MS'") {
  constexpr auto value = 1_MS;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 MS");
}

TEST_CASE("GIVEN a 1 giga Siemens WHEN passed to a streaming operator THEN "
          "result is '1GS'") {
  constexpr auto value = 1_GS;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 GS");
}

TEST_CASE("GIVEN a 1 tera Siemens WHEN passed to a streaming operator THEN "
          "result is '1TS'") {
  constexpr auto value = 1_TS;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 TS");
}

TEST_CASE("GIVEN a 1 exa Siemens WHEN passed to a streaming operator THEN "
          "result is '1ES'") {
  constexpr auto value = 1_ES;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 ES");
}

TEST_CASE("GIVEN a 1 peta Siemens WHEN passed to a streaming operator THEN "
          "result is '1PS'") {
  constexpr auto value = 1_PS;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 PS");
}

TEST_CASE(
    "GIVEN a string of '1aS' WHEN streamed into atto_siemens_t THEN result "
    "is a value of 1 atto_siemens_t AND stream is good") {
  std::stringstream ss;
  ss << "1aS";
  SI::atto_siemens_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_aS);
}

TEST_CASE(
    "GIVEN a string of '1fS' WHEN streamed into femto_siemens_t THEN result "
    "is a value of 1 femto_siemens_t AND stream is good") {
  std::stringstream ss;
  ss << "1fS";
  SI::femto_siemens_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fS);
}

TEST_CASE(
    "GIVEN a string of '1pS' WHEN streamed into pico_siemens_t THEN result "
    "is a value of 1 pico_siemens_t AND stream is good") {
  std::stringstream ss;
  ss << "1pS";
  SI::pico_siemens_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pS);
}

TEST_CASE(
    "GIVEN a string of '1nS' WHEN streamed into nano_siemens_t THEN result "
    "is a value of 1 nano_siemens_t AND stream is good") {
  std::stringstream ss;
  ss << "1nS";
  SI::nano_siemens_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nS);
}

TEST_CASE(
    "GIVEN a string of '1uS' WHEN streamed into micro_siemens_t THEN result "
    "is a value of 1 micro_siemens_t AND stream is good") {
  std::stringstream ss;
  ss << "1uS";
  SI::micro_siemens_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_uS);
}

TEST_CASE(
    "GIVEN a string of '1mS' WHEN streamed into milli_siemens_t THEN result "
    "is a value of 1 milli_siemens_t AND stream is good") {
  std::stringstream ss;
  ss << "1mS";
  SI::milli_siemens_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mS);
}

TEST_CASE("GIVEN a string of '1S' WHEN streamed into siemens_t THEN result "
          "is a value of 1 siemens_t AND stream is good") {
  std::stringstream ss;
  ss << "1S";
  SI::siemens_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_S);
}

TEST_CASE(
    "GIVEN a string of '1kS' WHEN streamed into kilo_siemens_t THEN result "
    "is a value of 1 kilo_siemens_t AND stream is good") {
  std::stringstream ss;
  ss << "1kS";
  SI::kilo_siemens_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kS);
}

TEST_CASE(
    "GIVEN a string of '1MS' WHEN streamed into mega_siemens_t THEN result "
    "is a value of 1 mega_siemens_t AND stream is good") {
  std::stringstream ss;
  ss << "1MS";
  SI::mega_siemens_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_MS);
}

TEST_CASE(
    "GIVEN a string of '1GS' WHEN streamed into giga_siemens_t THEN result "
    "is a value of 1 giga_siemens_t AND stream is good") {
  std::stringstream ss;
  ss << "1GS";
  SI::giga_siemens_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_GS);
}

TEST_CASE(
    "GIVEN a string of '1TS' WHEN streamed into tera_siemens_t THEN result "
    "is a value of 1 tera_siemens_t AND stream is good") {
  std::stringstream ss;
  ss << "1TS";
  SI::tera_siemens_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_TS);
}

TEST_CASE(
    "GIVEN a string of '1PS' WHEN streamed into peta_siemens_t THEN result "
    "is a value of 1 peta_siemens_t AND stream is good") {
  std::stringstream ss;
  ss << "1PS";
  SI::peta_siemens_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_PS);
}

TEST_CASE(
    "GIVEN a string of '1ES' WHEN streamed into exa_siemens_t THEN result "
    "is a value of 1 exa_siemens_t AND stream is good") {
  std::stringstream ss;
  ss << "1ES";
  SI::exa_siemens_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_ES);
}
