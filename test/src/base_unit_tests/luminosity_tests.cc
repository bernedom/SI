#include <catch2/catch.hpp>

#include <SI/luminosity.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _acd THEN result is a "
          "luminosity type AND ratio 1 to 10^18") {
  constexpr auto one = 1_acd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_acd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fcd THEN result is a "
          "luminosity type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pcd THEN result is a "
          "luminosity type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ncd THEN result is a "
          "luminosity type AND ratio 1 to 10^9") {
  constexpr auto one = 1_ncd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_ncd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ucd THEN result is a "
          "luminosity type AND ratio 1 to 10^6") {
  constexpr auto one = 1_ucd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_ucd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mcd THEN result is a "
          "luminosity type AND ratio 1 to 1000") {
  constexpr auto one = 1_mcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _cd THEN result is a "
          "luminosity type AND ratio 1 to 1") {
  constexpr auto one = 1_cd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_cd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kcd THEN result is a "
          "luminosity type AND ratio 1000 to 1") {
  constexpr auto one = 1_kcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Mcd THEN result is a "
          "luminosity type AND ratio 10^6 to 1") {
  constexpr auto one = 1_Mcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_Mcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Gcd THEN result is a "
          "luminosity type AND ratio 10^9 to 1") {
  constexpr auto one = 1_Gcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_Gcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Tcd THEN result is a "
          "luminosity type AND ratio 10^12 to 1") {
  constexpr auto one = 1_Tcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_Tcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Pcd THEN result is a "
          "luminosity type AND ratio 10^15 to 1") {
  constexpr auto one = 1_Pcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_Pcd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Ecd THEN result is a "
          "luminosity type AND ratio 10^18 to 1") {
  constexpr auto one = 1_Ecd;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::luminosity_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_Ecd;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::luminosity_t<long double, std::exa>>::value);
}

TEST_CASE("GIVEN a 1 atto candela WHEN passed to a streaming operator THEN "
          "result is '1acd'") {
  constexpr auto value = 1_acd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 acd");
}

TEST_CASE("GIVEN a 1 femto candela WHEN passed to a streaming operator THEN "
          "result is '1fcd'") {
  constexpr auto value = 1_fcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fcd");
}

TEST_CASE("GIVEN a 1 pico candela WHEN passed to a streaming operator THEN "
          "result is '1pcd'") {
  constexpr auto value = 1_pcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pcd");
}

TEST_CASE("GIVEN a 1 nano candela WHEN passed to a streaming operator THEN "
          "result is '1pcd'") {
  constexpr auto value = 1_ncd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 ncd");
}

TEST_CASE("GIVEN a 1 micro candela WHEN passed to a streaming operator THEN "
          "result is '1ucd'") {
  constexpr auto value = 1_ucd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 ucd");
}

TEST_CASE("GIVEN a 1 milli candela WHEN passed to a streaming operator THEN "
          "result is '1mcd'") {
  constexpr auto value = 1_mcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mcd");
}

TEST_CASE(
    "GIVEN a 1 candela WHEN passed to a streaming operator THEN result is "
    "'1cd'") {
  constexpr auto value = 1_cd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 cd");
}

TEST_CASE("GIVEN a 1 kilo candela WHEN passed to a streaming operator THEN "
          "result is '1kcd'") {
  constexpr auto value = 1_kcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kcd");
}

TEST_CASE("GIVEN a 1 mega candela WHEN passed to a streaming operator THEN "
          "result is '1Mcd'") {
  constexpr auto value = 1_Mcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Mcd");
}

TEST_CASE("GIVEN a 1 giga candela WHEN passed to a streaming operator THEN "
          "result is '1Gcd'") {
  constexpr auto value = 1_Gcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Gcd");
}

TEST_CASE("GIVEN a 1 tera candela WHEN passed to a streaming operator THEN "
          "result is '1Tcd'") {
  constexpr auto value = 1_Tcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Tcd");
}

TEST_CASE("GIVEN a 1 exa candela WHEN passed to a streaming operator THEN "
          "result is '1Ecd'") {
  constexpr auto value = 1_Ecd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Ecd");
}

TEST_CASE("GIVEN a 1 peta candela WHEN passed to a streaming operator THEN "
          "result is '1Pcd'") {
  constexpr auto value = 1_Pcd;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Pcd");
}
TEST_CASE(
    "GIVEN a string of '1acd' WHEN streamed into atto_candela_t THEN result "
    "is a value of 1 atto_candela_t AND stream is good") {
  std::stringstream ss;
  ss << "1acd";
  SI::atto_candela_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_acd);
}

TEST_CASE(
    "GIVEN a string of '1fcd' WHEN streamed into femto_candela_t THEN result "
    "is a value of 1 femto_candela_t AND stream is good") {
  std::stringstream ss;
  ss << "1fcd";
  SI::femto_candela_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fcd);
}

TEST_CASE(
    "GIVEN a string of '1pcd' WHEN streamed into pico_candela_t THEN result "
    "is a value of 1 pico_candela_t AND stream is good") {
  std::stringstream ss;
  ss << "1pcd";
  SI::pico_candela_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pcd);
}

TEST_CASE(
    "GIVEN a string of '1ncd' WHEN streamed into nano_candela_t THEN result "
    "is a value of 1 nano_candela_t AND stream is good") {
  std::stringstream ss;
  ss << "1ncd";
  SI::nano_candela_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_ncd);
}

TEST_CASE(
    "GIVEN a string of '1ucd' WHEN streamed into micro_candela_t THEN result "
    "is a value of 1 micro_candela_t AND stream is good") {
  std::stringstream ss;
  ss << "1ucd";
  SI::micro_candela_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_ucd);
}

TEST_CASE(
    "GIVEN a string of '1mcd' WHEN streamed into milli_candela_t THEN result "
    "is a value of 1 milli_candela_t AND stream is good") {
  std::stringstream ss;
  ss << "1mcd";
  SI::milli_candela_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mcd);
}

TEST_CASE("GIVEN a string of '1cd' WHEN streamed into candela_t THEN result "
          "is a value of 1 candela_t AND stream is good") {
  std::stringstream ss;
  ss << "1cd";
  SI::candela_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_cd);
}

TEST_CASE(
    "GIVEN a string of '1kcd' WHEN streamed into kilo_candela_t THEN result "
    "is a value of 1 kilo_candela_t AND stream is good") {
  std::stringstream ss;
  ss << "1kcd";
  SI::kilo_candela_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kcd);
}

TEST_CASE(
    "GIVEN a string of '1Mcd' WHEN streamed into mega_candela_t THEN result "
    "is a value of 1 mega_candela_t AND stream is good") {
  std::stringstream ss;
  ss << "1Mcd";
  SI::mega_candela_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Mcd);
}

TEST_CASE(
    "GIVEN a string of '1Gcd' WHEN streamed into giga_candela_t THEN result "
    "is a value of 1 giga_candela_t AND stream is good") {
  std::stringstream ss;
  ss << "1Gcd";
  SI::giga_candela_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Gcd);
}

TEST_CASE(
    "GIVEN a string of '1Tcd' WHEN streamed into tera_candela_t THEN result "
    "is a value of 1 tera_candela_t AND stream is good") {
  std::stringstream ss;
  ss << "1Tcd";
  SI::tera_candela_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Tcd);
}

TEST_CASE(
    "GIVEN a string of '1Pcd' WHEN streamed into peta_candela_t THEN result "
    "is a value of 1 peta_candela_t AND stream is good") {
  std::stringstream ss;
  ss << "1Pcd";
  SI::peta_candela_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Pcd);
}

TEST_CASE(
    "GIVEN a string of '1Ecd' WHEN streamed into exa_candela_t THEN result "
    "is a value of 1 exa_candela_t AND stream is good") {
  std::stringstream ss;
  ss << "1Ecd";
  SI::exa_candela_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Ecd);
}
