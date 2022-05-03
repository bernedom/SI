#include <catch2/catch.hpp>

#include <SI/stream.h>
#include <SI/temperature.h>
#include <sstream>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _aK THEN result is a "
          "temperature type AND ratio 1 to 10^18") {
  constexpr auto one = 1_aK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fK THEN result is a "
          "temperature type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pK THEN result is a "
          "temperature type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nK THEN result is a "
          "temperature type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uK THEN result is a "
          "temperature type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mK THEN result is a "
          "temperature type AND ratio 1 to 1000") {
  constexpr auto one = 1_mK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _K THEN result is a "
          "temperature type AND ratio 1 to 1") {
  constexpr auto one = 1_K;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_K;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kK THEN result is a "
          "temperature type AND ratio 1000 to 1") {
  constexpr auto one = 1_kK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MK THEN result is a "
          "temperature type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GK THEN result is a "
          "temperature type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TK THEN result is a "
          "temperature type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PK THEN result is a "
          "temperature type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EK THEN result is a "
          "temperature type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EK;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::temperature_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EK;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::temperature_t<long double, std::exa>>::value);
}

TEST_CASE("GIVEN a 1 atto Kelvin WHEN passed to a streaming operator THEN "
          "result is '1aK'") {
  constexpr auto value = 1_aK;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 aK");
}

TEST_CASE("GIVEN a 1 femto Kelvin WHEN passed to a streaming operator THEN "
          "result is '1fK'") {
  constexpr auto value = 1_fK;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fK");
}

TEST_CASE("GIVEN a 1 pico Kelvin WHEN passed to a streaming operator THEN "
          "result is '1pK'") {
  constexpr auto value = 1_pK;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pK");
}

TEST_CASE("GIVEN a 1 nano Kelvin WHEN passed to a streaming operator THEN "
          "result is '1pK'") {
  constexpr auto value = 1_nK;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nK");
}

TEST_CASE("GIVEN a 1 micro Kelvin WHEN passed to a streaming operator THEN "
          "result is '1uK'") {
  constexpr auto value = 1_uK;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 uK");
}

TEST_CASE("GIVEN a 1 milli Kelvin WHEN passed to a streaming operator THEN "
          "result is '1mK'") {
  constexpr auto value = 1_mK;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mK");
}

TEST_CASE("GIVEN a 1 Kelvin WHEN passed to a streaming operator THEN result is "
          "'1K'") {
  constexpr auto value = 1_K;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 K");
}

TEST_CASE("GIVEN a 1 kilo Kelvin WHEN passed to a streaming operator THEN "
          "result is '1kK'") {
  constexpr auto value = 1_kK;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kK");
}

TEST_CASE("GIVEN a 1 mega Kelvin WHEN passed to a streaming operator THEN "
          "result is '1MK'") {
  constexpr auto value = 1_MK;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 MK");
}

TEST_CASE("GIVEN a 1 giga Kelvin WHEN passed to a streaming operator THEN "
          "result is '1GK'") {
  constexpr auto value = 1_GK;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 GK");
}

TEST_CASE("GIVEN a 1 tera Kelvin WHEN passed to a streaming operator THEN "
          "result is '1TK'") {
  constexpr auto value = 1_TK;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 TK");
}

TEST_CASE("GIVEN a 1 exa Kelvin WHEN passed to a streaming operator THEN "
          "result is '1EK'") {
  constexpr auto value = 1_EK;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 EK");
}

TEST_CASE("GIVEN a 1 peta Kelvin WHEN passed to a streaming operator THEN "
          "result is '1PK'") {
  constexpr auto value = 1_PK;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 PK");
}
TEST_CASE(
    "GIVEN a string of '1aK' WHEN streamed into atto_kelvin_t THEN result "
    "is a value of 1 atto_kelvin_t AND stream is good") {
  std::stringstream ss;
  ss << "1aK";
  SI::atto_kelvin_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_aK);
}

TEST_CASE(
    "GIVEN a string of '1fK' WHEN streamed into femto_kelvin_t THEN result "
    "is a value of 1 femto_kelvin_t AND stream is good") {
  std::stringstream ss;
  ss << "1fK";
  SI::femto_kelvin_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fK);
}

TEST_CASE(
    "GIVEN a string of '1pK' WHEN streamed into pico_kelvin_t THEN result "
    "is a value of 1 pico_kelvin_t AND stream is good") {
  std::stringstream ss;
  ss << "1pK";
  SI::pico_kelvin_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pK);
}

TEST_CASE(
    "GIVEN a string of '1nK' WHEN streamed into nano_kelvin_t THEN result "
    "is a value of 1 nano_kelvin_t AND stream is good") {
  std::stringstream ss;
  ss << "1nK";
  SI::nano_kelvin_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nK);
}

TEST_CASE(
    "GIVEN a string of '1uK' WHEN streamed into micro_kelvin_t THEN result "
    "is a value of 1 micro_kelvin_t AND stream is good") {
  std::stringstream ss;
  ss << "1uK";
  SI::micro_kelvin_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_uK);
}

TEST_CASE(
    "GIVEN a string of '1mK' WHEN streamed into milli_kelvin_t THEN result "
    "is a value of 1 milli_kelvin_t AND stream is good") {
  std::stringstream ss;
  ss << "1mK";
  SI::milli_kelvin_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mK);
}

TEST_CASE("GIVEN a string of '1K' WHEN streamed into kelvin_t THEN result "
          "is a value of 1 kelvin_t AND stream is good") {
  std::stringstream ss;
  ss << "1K";
  SI::kelvin_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_K);
}

TEST_CASE(
    "GIVEN a string of '1kK' WHEN streamed into kilo_kelvin_t THEN result "
    "is a value of 1 kilo_kelvin_t AND stream is good") {
  std::stringstream ss;
  ss << "1kK";
  SI::kilo_kelvin_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kK);
}

TEST_CASE(
    "GIVEN a string of '1MK' WHEN streamed into mega_kelvin_t THEN result "
    "is a value of 1 mega_kelvin_t AND stream is good") {
  std::stringstream ss;
  ss << "1MK";
  SI::mega_kelvin_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_MK);
}

TEST_CASE(
    "GIVEN a string of '1GK' WHEN streamed into giga_kelvin_t THEN result "
    "is a value of 1 giga_kelvin_t AND stream is good") {
  std::stringstream ss;
  ss << "1GK";
  SI::giga_kelvin_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_GK);
}

TEST_CASE(
    "GIVEN a string of '1TK' WHEN streamed into tera_kelvin_t THEN result "
    "is a value of 1 tera_kelvin_t AND stream is good") {
  std::stringstream ss;
  ss << "1TK";
  SI::tera_kelvin_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_TK);
}

TEST_CASE(
    "GIVEN a string of '1PK' WHEN streamed into peta_kelvin_t THEN result "
    "is a value of 1 peta_kelvin_t AND stream is good") {
  std::stringstream ss;
  ss << "1PK";
  SI::peta_kelvin_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_PK);
}

TEST_CASE("GIVEN a string of '1EK' WHEN streamed into exa_kelvin_t THEN result "
          "is a value of 1 exa_kelvin_t AND stream is good") {
  std::stringstream ss;
  ss << "1EK";
  SI::exa_kelvin_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_EK);
}
