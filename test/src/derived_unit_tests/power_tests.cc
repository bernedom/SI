#include <catch2/catch.hpp>

#include <SI/energy.h>
#include <SI/power.h>
#include <SI/stream.h>
#include <SI/time.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aW THEN result is a "
          "power type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fW THEN result is a "
          "power type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pW THEN result is a "
          "power type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nW THEN result is a "
          "power type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uW THEN result is a "
          "power type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mW THEN result is a "
          "power type AND ratio 1 to 1000") {
  constexpr auto one = 1_mW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _W THEN result is a "
          "power type AND ratio 1 to 1") {
  constexpr auto one = 1_W;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::power_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_W;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kW THEN result is a "
          "power type AND ratio 1000 to 1") {
  constexpr auto one = 1_kW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MW THEN result is a "
          "power type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GW THEN result is a "
          "power type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TW THEN result is a "
          "power type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PW THEN result is a "
          "power type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PW;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::power_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PW;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::power_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EW THEN result is a "
          "power type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EW;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::power_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EW;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::power_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a energy value WHEN divided by an time value THEN "
                   "result is a power value",
                   "[power][operator/]", int64_t, long double) {
  constexpr SI::energy_t<TestType, std::ratio<1>> energy{1};
  constexpr SI::time_t<TestType, std::ratio<1>> time{1};

  constexpr auto result = energy / time;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::power_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a power value WHEN multiplied by an time value "
                   "THEN result is a energy value",
                   "[power][operator*]", int64_t, long double) {
  constexpr SI::power_t<TestType, std::ratio<1>> power{1};
  constexpr SI::time_t<TestType, std::ratio<1>> time{1};

  constexpr auto result = power * time;
  constexpr auto result_commutative = time * power;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::energy_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a energy value WHEN divided by a power value THEN "
                   "result is an time value",
                   "[energy][operator/]", int64_t, long double) {
  constexpr SI::energy_t<TestType, std::ratio<1>> energy{1};
  constexpr SI::power_t<TestType, std::ratio<1>> power{1};

  constexpr auto result = energy / power;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::time_t<TestType, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a 1 atto Watt WHEN passed to a streaming operator THEN "
          "result is '1aW'") {
  constexpr auto value = 1_aW;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 aW");
}

TEST_CASE("GIVEN a 1 femto Watt WHEN passed to a streaming operator THEN "
          "result is '1fW'") {
  constexpr auto value = 1_fW;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fW");
}

TEST_CASE("GIVEN a 1 pico Watt WHEN passed to a streaming operator THEN "
          "result is '1pW'") {
  constexpr auto value = 1_pW;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pW");
}

TEST_CASE("GIVEN a 1 nano Watt WHEN passed to a streaming operator THEN "
          "result is '1pW'") {
  constexpr auto value = 1_nW;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nW");
}

TEST_CASE("GIVEN a 1 micro Watt WHEN passed to a streaming operator THEN "
          "result is '1uW'") {
  constexpr auto value = 1_uW;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 uW");
}

TEST_CASE("GIVEN a 1 milli Watt WHEN passed to a streaming operator THEN "
          "result is '1mW'") {
  constexpr auto value = 1_mW;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mW");
}

TEST_CASE("GIVEN a 1 Watt WHEN passed to a streaming operator THEN result is "
          "'1W'") {
  constexpr auto value = 1_W;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 W");
}

TEST_CASE("GIVEN a 1 kilo Watt WHEN passed to a streaming operator THEN "
          "result is '1kW'") {
  constexpr auto value = 1_kW;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kW");
}

TEST_CASE("GIVEN a 1 mega Watt WHEN passed to a streaming operator THEN "
          "result is '1MW'") {
  constexpr auto value = 1_MW;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 MW");
}

TEST_CASE("GIVEN a 1 giga Watt WHEN passed to a streaming operator THEN "
          "result is '1GW'") {
  constexpr auto value = 1_GW;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 GW");
}

TEST_CASE("GIVEN a 1 tera Watt WHEN passed to a streaming operator THEN "
          "result is '1TW'") {
  constexpr auto value = 1_TW;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 TW");
}

TEST_CASE("GIVEN a 1 exa Watt WHEN passed to a streaming operator THEN "
          "result is '1EW'") {
  constexpr auto value = 1_EW;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 EW");
}

TEST_CASE("GIVEN a 1 peta Watt WHEN passed to a streaming operator THEN "
          "result is '1PW'") {
  constexpr auto value = 1_PW;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 PW");
}

TEST_CASE("GIVEN a string of '1aW' WHEN streamed into atto_watt_t THEN result "
          "is a value of 1 atto_watt_t AND stream is good") {
  std::stringstream ss;
  ss << "1aW";
  SI::atto_watt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_aW);
}

TEST_CASE("GIVEN a string of '1fW' WHEN streamed into femto_watt_t THEN result "
          "is a value of 1 femto_watt_t AND stream is good") {
  std::stringstream ss;
  ss << "1fW";
  SI::femto_watt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fW);
}

TEST_CASE("GIVEN a string of '1pW' WHEN streamed into pico_watt_t THEN result "
          "is a value of 1 pico_watt_t AND stream is good") {
  std::stringstream ss;
  ss << "1pW";
  SI::pico_watt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pW);
}

TEST_CASE("GIVEN a string of '1nW' WHEN streamed into nano_watt_t THEN result "
          "is a value of 1 nano_watt_t AND stream is good") {
  std::stringstream ss;
  ss << "1nW";
  SI::nano_watt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nW);
}

TEST_CASE("GIVEN a string of '1uW' WHEN streamed into micro_watt_t THEN result "
          "is a value of 1 micro_watt_t AND stream is good") {
  std::stringstream ss;
  ss << "1uW";
  SI::micro_watt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_uW);
}

TEST_CASE("GIVEN a string of '1mW' WHEN streamed into milli_watt_t THEN result "
          "is a value of 1 milli_watt_t AND stream is good") {
  std::stringstream ss;
  ss << "1mW";
  SI::milli_watt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mW);
}

TEST_CASE("GIVEN a string of '1W' WHEN streamed into watt_t THEN result "
          "is a value of 1 watt_t AND stream is good") {
  std::stringstream ss;
  ss << "1W";
  SI::watt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_W);
}

TEST_CASE("GIVEN a string of '1kW' WHEN streamed into kilo_watt_t THEN result "
          "is a value of 1 kilo_watt_t AND stream is good") {
  std::stringstream ss;
  ss << "1kW";
  SI::kilo_watt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kW);
}

TEST_CASE("GIVEN a string of '1MW' WHEN streamed into mega_watt_t THEN result "
          "is a value of 1 mega_watt_t AND stream is good") {
  std::stringstream ss;
  ss << "1MW";
  SI::mega_watt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_MW);
}

TEST_CASE("GIVEN a string of '1GW' WHEN streamed into giga_watt_t THEN result "
          "is a value of 1 giga_watt_t AND stream is good") {
  std::stringstream ss;
  ss << "1GW";
  SI::giga_watt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_GW);
}

TEST_CASE("GIVEN a string of '1TW' WHEN streamed into tera_watt_t THEN result "
          "is a value of 1 tera_watt_t AND stream is good") {
  std::stringstream ss;
  ss << "1TW";
  SI::tera_watt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_TW);
}

TEST_CASE("GIVEN a string of '1PW' WHEN streamed into peta_watt_t THEN result "
          "is a value of 1 peta_watt_t AND stream is good") {
  std::stringstream ss;
  ss << "1PW";
  SI::peta_watt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_PW);
}

TEST_CASE("GIVEN a string of '1EW' WHEN streamed into exa_watt_t THEN result "
          "is a value of 1 exa_watt_t AND stream is good") {
  std::stringstream ss;
  ss << "1EW";
  SI::exa_watt_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_EW);
}
