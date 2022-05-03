#include <catch2/catch.hpp>

#include <SI/frequency.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aHz THEN result is a "
          "frequency type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fHz THEN result is a "
          "frequency type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pHz THEN result is a "
          "frequency type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nHz THEN result is a "
          "frequency type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uHz THEN result is a "
          "frequency type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mHz THEN result is a "
          "frequency type AND ratio 1 to 1000") {
  constexpr auto one = 1_mHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Hz THEN result is a "
          "frequency type AND ratio 1 to 1") {
  constexpr auto one = 1_Hz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_Hz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kHz THEN result is a "
          "frequency type AND ratio 1000 to 1") {
  constexpr auto one = 1_kHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MHz THEN result is a "
          "frequency type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GHz THEN result is a "
          "frequency type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _THz THEN result is a "
          "frequency type AND ratio 10^12 to 1") {
  constexpr auto one = 1_THz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_THz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PHz THEN result is a "
          "frequency type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::frequency_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EHz THEN result is a "
          "frequency type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EHz;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::frequency_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EHz;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::frequency_t<long double, std::exa>>::value);
}

TEST_CASE("GIVEN a 1 atto Hertz WHEN passed to a streaming operator THEN "
          "result is '1aHz'") {
  constexpr auto value = 1_aHz;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 aHz");
}

TEST_CASE("GIVEN a 1 femto Hertz WHEN passed to a streaming operator THEN "
          "result is '1fHz'") {
  constexpr auto value = 1_fHz;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fHz");
}

TEST_CASE("GIVEN a 1 pico Hertz WHEN passed to a streaming operator THEN "
          "result is '1pHz'") {
  constexpr auto value = 1_pHz;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pHz");
}

TEST_CASE("GIVEN a 1 nano Hertz WHEN passed to a streaming operator THEN "
          "result is '1pHz'") {
  constexpr auto value = 1_nHz;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nHz");
}

TEST_CASE("GIVEN a 1 micro Hertz WHEN passed to a streaming operator THEN "
          "result is '1uHz'") {
  constexpr auto value = 1_uHz;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 uHz");
}

TEST_CASE("GIVEN a 1 milli Hertz WHEN passed to a streaming operator THEN "
          "result is '1mHz'") {
  constexpr auto value = 1_mHz;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mHz");
}

TEST_CASE("GIVEN a 1 Hertz WHEN passed to a streaming operator THEN result is "
          "'1Hz'") {
  constexpr auto value = 1_Hz;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Hz");
}

TEST_CASE("GIVEN a 1 kilo Hertz WHEN passed to a streaming operator THEN "
          "result is '1kHz'") {
  constexpr auto value = 1_kHz;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kHz");
}

TEST_CASE("GIVEN a 1 mega Hertz WHEN passed to a streaming operator THEN "
          "result is '1MHz'") {
  constexpr auto value = 1_MHz;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 MHz");
}

TEST_CASE("GIVEN a 1 giga Hertz WHEN passed to a streaming operator THEN "
          "result is '1GHz'") {
  constexpr auto value = 1_GHz;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 GHz");
}

TEST_CASE("GIVEN a 1 tera Hertz WHEN passed to a streaming operator THEN "
          "result is '1THz'") {
  constexpr auto value = 1_THz;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 THz");
}

TEST_CASE("GIVEN a 1 exa Hertz WHEN passed to a streaming operator THEN "
          "result is '1EHz'") {
  constexpr auto value = 1_EHz;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 EHz");
}

TEST_CASE("GIVEN a 1 peta Hertz WHEN passed to a streaming operator THEN "
          "result is '1PHz'") {
  constexpr auto value = 1_PHz;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 PHz");
}

TEST_CASE(
    "GIVEN a string of '1aHz' WHEN streamed into atto_hertz_t THEN result "
    "is a value of 1 atto_hertz_t AND stream is good") {
  std::stringstream ss;
  ss << "1aHz";
  SI::atto_hertz_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_aHz);
}

TEST_CASE(
    "GIVEN a string of '1fHz' WHEN streamed into femto_hertz_t THEN result "
    "is a value of 1 femto_hertz_t AND stream is good") {
  std::stringstream ss;
  ss << "1fHz";
  SI::femto_hertz_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fHz);
}

TEST_CASE(
    "GIVEN a string of '1pHz' WHEN streamed into pico_hertz_t THEN result "
    "is a value of 1 pico_hertz_t AND stream is good") {
  std::stringstream ss;
  ss << "1pHz";
  SI::pico_hertz_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pHz);
}

TEST_CASE(
    "GIVEN a string of '1nHz' WHEN streamed into nano_hertz_t THEN result "
    "is a value of 1 nano_hertz_t AND stream is good") {
  std::stringstream ss;
  ss << "1nHz";
  SI::nano_hertz_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nHz);
}

TEST_CASE(
    "GIVEN a string of '1uHz' WHEN streamed into micro_hertz_t THEN result "
    "is a value of 1 micro_hertz_t AND stream is good") {
  std::stringstream ss;
  ss << "1uHz";
  SI::micro_hertz_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_uHz);
}

TEST_CASE(
    "GIVEN a string of '1mHz' WHEN streamed into milli_hertz_t THEN result "
    "is a value of 1 milli_hertz_t AND stream is good") {
  std::stringstream ss;
  ss << "1mHz";
  SI::milli_hertz_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mHz);
}

TEST_CASE("GIVEN a string of '1Hz' WHEN streamed into hertz_t THEN result "
          "is a value of 1 hertz_t AND stream is good") {
  std::stringstream ss;
  ss << "1Hz";
  SI::hertz_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Hz);
}

TEST_CASE(
    "GIVEN a string of '1kHz' WHEN streamed into kilo_hertz_t THEN result "
    "is a value of 1 kilo_hertz_t AND stream is good") {
  std::stringstream ss;
  ss << "1kHz";
  SI::kilo_hertz_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kHz);
}

TEST_CASE(
    "GIVEN a string of '1MHz' WHEN streamed into mega_hertz_t THEN result "
    "is a value of 1 mega_hertz_t AND stream is good") {
  std::stringstream ss;
  ss << "1MHz";
  SI::mega_hertz_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_MHz);
}

TEST_CASE(
    "GIVEN a string of '1GHz' WHEN streamed into giga_hertz_t THEN result "
    "is a value of 1 giga_hertz_t AND stream is good") {
  std::stringstream ss;
  ss << "1GHz";
  SI::giga_hertz_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_GHz);
}

TEST_CASE(
    "GIVEN a string of '1THz' WHEN streamed into tera_hertz_t THEN result "
    "is a value of 1 tera_hertz_t AND stream is good") {
  std::stringstream ss;
  ss << "1THz";
  SI::tera_hertz_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_THz);
}

TEST_CASE(
    "GIVEN a string of '1PHz' WHEN streamed into peta_hertz_t THEN result "
    "is a value of 1 peta_hertz_t AND stream is good") {
  std::stringstream ss;
  ss << "1PHz";
  SI::peta_hertz_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_PHz);
}

TEST_CASE("GIVEN a string of '1EHz' WHEN streamed into exa_hertz_t THEN result "
          "is a value of 1 exa_hertz_t AND stream is good") {
  std::stringstream ss;
  ss << "1EHz";
  SI::exa_hertz_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_EHz);
}
