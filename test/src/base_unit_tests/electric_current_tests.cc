#include <catch2/catch.hpp>

#include <SI/electric_current.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _aA THEN result is a "
          "electric_current type AND ratio 1 to 10^18") {
  constexpr auto one = 1_aA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fA THEN result is a "
          "electric_current type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pA THEN result is a "
          "electric_current type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nA THEN result is a "
          "electric_current type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uA THEN result is a "
          "electric_current type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mA THEN result is a "
          "electric_current type AND ratio 1 to 1000") {
  constexpr auto one = 1_mA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _A THEN result is a "
          "electric_current type AND ratio 1 to 1") {
  constexpr auto one = 1_A;
  STATIC_REQUIRE(std::is_same<
                 decltype(one),
                 const SI::electric_current_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_A;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::electric_current_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kA THEN result is a "
          "electric_current type AND ratio 1000 to 1") {
  constexpr auto one = 1_kA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MA THEN result is a "
          "electric_current type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GA THEN result is a "
          "electric_current type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TA THEN result is a "
          "electric_current type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PA THEN result is a "
          "electric_current type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PA;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::electric_current_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EA THEN result is a "
          "electric_current type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EA;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::electric_current_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EA;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::electric_current_t<long double, std::exa>>::value);
}

TEST_CASE("GIVEN a 1 atto ampere WHEN passed to a streaming operator THEN "
          "result is '1aA'") {
  constexpr auto value = 1_aA;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 aA");
}

TEST_CASE("GIVEN a 1 femto ampere WHEN passed to a streaming operator THEN "
          "result is '1fA'") {
  constexpr auto value = 1_fA;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fA");
}

TEST_CASE("GIVEN a 1 pico ampere WHEN passed to a streaming operator THEN "
          "result is '1pA'") {
  constexpr auto value = 1_pA;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pA");
}

TEST_CASE("GIVEN a 1 nano ampere WHEN passed to a streaming operator THEN "
          "result is '1pA'") {
  constexpr auto value = 1_nA;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nA");
}

TEST_CASE("GIVEN a 1 micro ampere WHEN passed to a streaming operator THEN "
          "result is '1uA'") {
  constexpr auto value = 1_uA;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 uA");
}

TEST_CASE("GIVEN a 1 milli ampere WHEN passed to a streaming operator THEN "
          "result is '1mA'") {
  constexpr auto value = 1_mA;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mA");
}

TEST_CASE("GIVEN a 1 ampere WHEN passed to a streaming operator THEN result is "
          "'1A'") {
  constexpr auto value = 1_A;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 A");
}

TEST_CASE("GIVEN a 1 kilo ampere WHEN passed to a streaming operator THEN "
          "result is '1kA'") {
  constexpr auto value = 1_kA;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kA");
}

TEST_CASE("GIVEN a 1 mega ampere WHEN passed to a streaming operator THEN "
          "result is '1MA'") {
  constexpr auto value = 1_MA;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 MA");
}

TEST_CASE("GIVEN a 1 giga ampere WHEN passed to a streaming operator THEN "
          "result is '1GA'") {
  constexpr auto value = 1_GA;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 GA");
}

TEST_CASE("GIVEN a 1 tera ampere WHEN passed to a streaming operator THEN "
          "result is '1TA'") {
  constexpr auto value = 1_TA;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 TA");
}

TEST_CASE("GIVEN a 1 exa ampere WHEN passed to a streaming operator THEN "
          "result is '1EA'") {
  constexpr auto value = 1_EA;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 EA");
}

TEST_CASE("GIVEN a 1 peta ampere WHEN passed to a streaming operator THEN "
          "result is '1PA'") {
  constexpr auto value = 1_PA;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 PA");
}

TEST_CASE(
    "GIVEN a string of '1aA' WHEN streamed into atto_ampere_t THEN result "
    "is a value of 1 atto_ampere_t AND stream is good") {
  std::stringstream ss;
  ss << "1aA";
  SI::atto_ampere_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_aA);
}

TEST_CASE(
    "GIVEN a string of '1fA' WHEN streamed into femto_ampere_t THEN result "
    "is a value of 1 femto_ampere_t AND stream is good") {
  std::stringstream ss;
  ss << "1fA";
  SI::femto_ampere_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fA);
}

TEST_CASE(
    "GIVEN a string of '1pA' WHEN streamed into pico_ampere_t THEN result "
    "is a value of 1 pico_ampere_t AND stream is good") {
  std::stringstream ss;
  ss << "1pA";
  SI::pico_ampere_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pA);
}

TEST_CASE(
    "GIVEN a string of '1nA' WHEN streamed into nano_ampere_t THEN result "
    "is a value of 1 nano_ampere_t AND stream is good") {
  std::stringstream ss;
  ss << "1nA";
  SI::nano_ampere_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nA);
}

TEST_CASE(
    "GIVEN a string of '1uA' WHEN streamed into micro_ampere_t THEN result "
    "is a value of 1 micro_ampere_t AND stream is good") {
  std::stringstream ss;
  ss << "1uA";
  SI::micro_ampere_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_uA);
}

TEST_CASE(
    "GIVEN a string of '1mA' WHEN streamed into milli_ampere_t THEN result "
    "is a value of 1 milli_ampere_t AND stream is good") {
  std::stringstream ss;
  ss << "1mA";
  SI::milli_ampere_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mA);
}

TEST_CASE("GIVEN a string of '1A' WHEN streamed into ampere_t THEN result "
          "is a value of 1 ampere_t AND stream is good") {
  std::stringstream ss;
  ss << "1A";
  SI::ampere_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_A);
}

TEST_CASE(
    "GIVEN a string of '1kA' WHEN streamed into kilo_ampere_t THEN result "
    "is a value of 1 kilo_ampere_t AND stream is good") {
  std::stringstream ss;
  ss << "1kA";
  SI::kilo_ampere_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kA);
}

TEST_CASE(
    "GIVEN a string of '1MA' WHEN streamed into mega_ampere_t THEN result "
    "is a value of 1 mega_ampere_t AND stream is good") {
  std::stringstream ss;
  ss << "1MA";
  SI::mega_ampere_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_MA);
}

TEST_CASE(
    "GIVEN a string of '1GA' WHEN streamed into giga_ampere_t THEN result "
    "is a value of 1 giga_ampere_t AND stream is good") {
  std::stringstream ss;
  ss << "1GA";
  SI::giga_ampere_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_GA);
}

TEST_CASE(
    "GIVEN a string of '1TA' WHEN streamed into tera_ampere_t THEN result "
    "is a value of 1 tera_ampere_t AND stream is good") {
  std::stringstream ss;
  ss << "1TA";
  SI::tera_ampere_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_TA);
}

TEST_CASE(
    "GIVEN a string of '1PA' WHEN streamed into peta_ampere_t THEN result "
    "is a value of 1 peta_ampere_t AND stream is good") {
  std::stringstream ss;
  ss << "1PA";
  SI::peta_ampere_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_PA);
}

TEST_CASE("GIVEN a string of '1EA' WHEN streamed into exa_ampere_t THEN result "
          "is a value of 1 exa_ampere_t AND stream is good") {
  std::stringstream ss;
  ss << "1EA";
  SI::exa_ampere_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_EA);
}
