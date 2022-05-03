#include <catch2/catch.hpp>

#include <SI/electric_charge.h>
#include <SI/electric_potential.h>
#include <SI/energy.h>
#include <SI/power.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aV THEN result is a "
          "electric_potential type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fV THEN result is a "
          "electric_potential type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pV THEN result is a "
          "electric_potential type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nV THEN result is a "
          "electric_potential type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uV THEN result is a "
          "electric_potential type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mV THEN result is a "
          "electric_potential type AND ratio 1 to 1000") {
  constexpr auto one = 1_mV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _V THEN result is a "
          "electric_potential type AND ratio 1 to 1") {
  constexpr auto one = 1_V;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::electric_potential_t<
                                      int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_V;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kV THEN result is a "
          "electric_potential type AND ratio 1000 to 1") {
  constexpr auto one = 1_kV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MV THEN result is a "
          "electric_potential type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GV THEN result is a "
          "electric_potential type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TV THEN result is a "
          "electric_potential type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PV THEN result is a "
          "electric_potential type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PV;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_potential_t<
                                        long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EV THEN result is a "
          "electric_potential type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EV;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_potential_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EV;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_potential_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a power value WHEN divided by an electric_current value THEN "
    "result is a electric_potential value",
    "[electric_potential][operator/]", int64_t, long double) {
  constexpr SI::power_t<TestType, std::ratio<1>> power{1};
  constexpr SI::electric_current_t<TestType, std::ratio<1>> electric_current{1};

  constexpr auto result = power / electric_current;

  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_potential_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_potential value WHEN multiplied by an "
                   "electric_current value "
                   "THEN result is a power value",
                   "[electric_potential][operator*]", int64_t, long double) {
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};
  constexpr SI::electric_current_t<TestType, std::ratio<1>> electric_current{1};

  constexpr auto result = electric_potential * electric_current;
  constexpr auto result_commutative = electric_current * electric_potential;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::power_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a power value WHEN divided by a electric_potential value THEN "
    "result is an electric_current value",
    "[power][operator/]", int64_t, long double) {
  constexpr SI::power_t<TestType, std::ratio<1>> power{1};
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};

  constexpr auto result = power / electric_potential;

  STATIC_REQUIRE(std::is_same<
                 decltype(result),
                 const SI::electric_current_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a energy value WHEN divided by an electric_charge value THEN "
    "result is a electric_potential value",
    "[electric_potential][operator/]", int64_t, long double) {
  constexpr SI::energy_t<TestType, std::ratio<1>> energy{1};
  constexpr SI::electric_charge_t<TestType, std::ratio<1>> electric_charge{1};

  constexpr auto result = energy / electric_charge;

  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::electric_potential_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a electric_potential value WHEN multiplied by an "
                   "electric_charge value "
                   "THEN result is a energy value",
                   "[electric_potential][operator*]", int64_t, long double) {
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};
  constexpr SI::electric_charge_t<TestType, std::ratio<1>> electric_charge{1};

  constexpr auto result = electric_potential * electric_charge;
  constexpr auto result_commutative = electric_charge * electric_potential;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::energy_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a energy value WHEN divided by a electric_potential value THEN "
    "result is an electric_charge value",
    "[energy][operator/]", int64_t, long double) {
  constexpr SI::energy_t<TestType, std::ratio<1>> energy{1};
  constexpr SI::electric_potential_t<TestType, std::ratio<1>>
      electric_potential{1};

  constexpr auto result = energy / electric_potential;

  STATIC_REQUIRE(std::is_same<
                 decltype(result),
                 const SI::electric_charge_t<TestType, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a 1 atto Volt WHEN passed to a streaming operator THEN "
          "result is '1aV'") {
  constexpr auto value = 1_aV;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 aV");
}

TEST_CASE("GIVEN a 1 femto Volt WHEN passed to a streaming operator THEN "
          "result is '1fV'") {
  constexpr auto value = 1_fV;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fV");
}

TEST_CASE("GIVEN a 1 pico Volt WHEN passed to a streaming operator THEN "
          "result is '1pV'") {
  constexpr auto value = 1_pV;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pV");
}

TEST_CASE("GIVEN a 1 nano Volt WHEN passed to a streaming operator THEN "
          "result is '1pV'") {
  constexpr auto value = 1_nV;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nV");
}

TEST_CASE("GIVEN a 1 micro Volt WHEN passed to a streaming operator THEN "
          "result is '1uV'") {
  constexpr auto value = 1_uV;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 uV");
}

TEST_CASE("GIVEN a 1 milli Volt WHEN passed to a streaming operator THEN "
          "result is '1mV'") {
  constexpr auto value = 1_mV;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mV");
}

TEST_CASE("GIVEN a 1 Volt WHEN passed to a streaming operator THEN result is "
          "'1V'") {
  constexpr auto value = 1_V;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 V");
}

TEST_CASE("GIVEN a 1 kilo Volt WHEN passed to a streaming operator THEN "
          "result is '1kV'") {
  constexpr auto value = 1_kV;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kV");
}

TEST_CASE("GIVEN a 1 mega Volt WHEN passed to a streaming operator THEN "
          "result is '1MV'") {
  constexpr auto value = 1_MV;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 MV");
}

TEST_CASE("GIVEN a 1 giga Volt WHEN passed to a streaming operator THEN "
          "result is '1GV'") {
  constexpr auto value = 1_GV;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 GV");
}

TEST_CASE("GIVEN a 1 tera Volt WHEN passed to a streaming operator THEN "
          "result is '1TV'") {
  constexpr auto value = 1_TV;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 TV");
}

TEST_CASE("GIVEN a 1 exa Volt WHEN passed to a streaming operator THEN "
          "result is '1EV'") {
  constexpr auto value = 1_EV;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 EV");
}

TEST_CASE("GIVEN a 1 peta Volt WHEN passed to a streaming operator THEN "
          "result is '1PV'") {
  constexpr auto value = 1_PV;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 PV");
}

TEST_CASE("GIVEN a string of '1aV' WHEN streamed into atto_volt_t THEN result "
          "is a value of 1 atto_volt_t AND stream is good") {
  std::stringstream ss;
  ss << "1aV";
  SI::atto_volt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_aV);
}

TEST_CASE("GIVEN a string of '1fV' WHEN streamed into femto_volt_t THEN result "
          "is a value of 1 femto_volt_t AND stream is good") {
  std::stringstream ss;
  ss << "1fV";
  SI::femto_volt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fV);
}

TEST_CASE("GIVEN a string of '1pV' WHEN streamed into pico_volt_t THEN result "
          "is a value of 1 pico_volt_t AND stream is good") {
  std::stringstream ss;
  ss << "1pV";
  SI::pico_volt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pV);
}

TEST_CASE("GIVEN a string of '1nV' WHEN streamed into nano_volt_t THEN result "
          "is a value of 1 nano_volt_t AND stream is good") {
  std::stringstream ss;
  ss << "1nV";
  SI::nano_volt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nV);
}

TEST_CASE("GIVEN a string of '1uV' WHEN streamed into micro_volt_t THEN result "
          "is a value of 1 micro_volt_t AND stream is good") {
  std::stringstream ss;
  ss << "1uV";
  SI::micro_volt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_uV);
}

TEST_CASE("GIVEN a string of '1mV' WHEN streamed into milli_volt_t THEN result "
          "is a value of 1 milli_volt_t AND stream is good") {
  std::stringstream ss;
  ss << "1mV";
  SI::milli_volt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mV);
}

TEST_CASE("GIVEN a string of '1V' WHEN streamed into volt_t THEN result "
          "is a value of 1 volt_t AND stream is good") {
  std::stringstream ss;
  ss << "1V";
  SI::volt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_V);
}

TEST_CASE("GIVEN a string of '1kV' WHEN streamed into kilo_volt_t THEN result "
          "is a value of 1 kilo_volt_t AND stream is good") {
  std::stringstream ss;
  ss << "1kV";
  SI::kilo_volt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kV);
}

TEST_CASE("GIVEN a string of '1MV' WHEN streamed into mega_volt_t THEN result "
          "is a value of 1 mega_volt_t AND stream is good") {
  std::stringstream ss;
  ss << "1MV";
  SI::mega_volt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_MV);
}

TEST_CASE("GIVEN a string of '1GV' WHEN streamed into giga_volt_t THEN result "
          "is a value of 1 giga_volt_t AND stream is good") {
  std::stringstream ss;
  ss << "1GV";
  SI::giga_volt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_GV);
}

TEST_CASE("GIVEN a string of '1TV' WHEN streamed into tera_volt_t THEN result "
          "is a value of 1 tera_volt_t AND stream is good") {
  std::stringstream ss;
  ss << "1TV";
  SI::tera_volt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_TV);
}

TEST_CASE("GIVEN a string of '1PV' WHEN streamed into peta_volt_t THEN result "
          "is a value of 1 peta_volt_t AND stream is good") {
  std::stringstream ss;
  ss << "1PV";
  SI::peta_volt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_PV);
}

TEST_CASE("GIVEN a string of '1EV' WHEN streamed into exa_volt_t THEN result "
          "is a value of 1 exa_volt_t AND stream is good") {
  std::stringstream ss;
  ss << "1EV";
  SI::exa_volt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_EV);
}
