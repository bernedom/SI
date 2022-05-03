#include <catch2/catch.hpp>

#include <SI/equivalent_dose.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aSv THEN result is a "
          "equivalent_dose type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fSv THEN result is a "
          "equivalent_dose type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fSv;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::equivalent_dose_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pSv THEN result is a "
          "equivalent_dose type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nSv THEN result is a "
          "equivalent_dose type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uSv THEN result is a "
          "equivalent_dose type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uSv;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::equivalent_dose_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mSv THEN result is a "
          "equivalent_dose type AND ratio 1 to 1000") {
  constexpr auto one = 1_mSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mSv;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::equivalent_dose_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Sv THEN result is a "
          "equivalent_dose type AND ratio 1 to 1") {
  constexpr auto one = 1_Sv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_Sv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::equivalent_dose_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kSv THEN result is a "
          "equivalent_dose type AND ratio 1000 to 1") {
  constexpr auto one = 1_kSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MSv THEN result is a "
          "equivalent_dose type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GSv THEN result is a "
          "equivalent_dose type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TSv THEN result is a "
          "equivalent_dose type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PSv THEN result is a "
          "equivalent_dose type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PSv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ESv THEN result is a "
          "equivalent_dose type AND ratio 10^18 to 1") {
  constexpr auto one = 1_ESv;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::equivalent_dose_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_ESv;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::equivalent_dose_t<long double, std::exa>>::value);
}

TEST_CASE("GIVEN a 1 atto Sievert WHEN passed to a streaming operator THEN "
          "result is '1aSv'") {
  constexpr auto value = 1_aSv;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 aSv");
}

TEST_CASE("GIVEN a 1 femto Sievert WHEN passed to a streaming operator THEN "
          "result is '1fSv'") {
  constexpr auto value = 1_fSv;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fSv");
}

TEST_CASE("GIVEN a 1 pico Sievert WHEN passed to a streaming operator THEN "
          "result is '1pSv'") {
  constexpr auto value = 1_pSv;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pSv");
}

TEST_CASE("GIVEN a 1 nano Sievert WHEN passed to a streaming operator THEN "
          "result is '1pSv'") {
  constexpr auto value = 1_nSv;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nSv");
}

TEST_CASE("GIVEN a 1 micro Sievert WHEN passed to a streaming operator THEN "
          "result is '1uSv'") {
  constexpr auto value = 1_uSv;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 uSv");
}

TEST_CASE("GIVEN a 1 milli Sievert WHEN passed to a streaming operator THEN "
          "result is '1mSv'") {
  constexpr auto value = 1_mSv;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mSv");
}

TEST_CASE(
    "GIVEN a 1 Sievert WHEN passed to a streaming operator THEN result is "
    "'1Sv'") {
  constexpr auto value = 1_Sv;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Sv");
}

TEST_CASE("GIVEN a 1 kilo Sievert WHEN passed to a streaming operator THEN "
          "result is '1kSv'") {
  constexpr auto value = 1_kSv;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kSv");
}

TEST_CASE("GIVEN a 1 mega Sievert WHEN passed to a streaming operator THEN "
          "result is '1MSv'") {
  constexpr auto value = 1_MSv;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 MSv");
}

TEST_CASE("GIVEN a 1 giga Sievert WHEN passed to a streaming operator THEN "
          "result is '1GSv'") {
  constexpr auto value = 1_GSv;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 GSv");
}

TEST_CASE("GIVEN a 1 tera Sievert WHEN passed to a streaming operator THEN "
          "result is '1TSv'") {
  constexpr auto value = 1_TSv;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 TSv");
}

TEST_CASE("GIVEN a 1 exa Sievert WHEN passed to a streaming operator THEN "
          "result is '1ESv'") {
  constexpr auto value = 1_ESv;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 ESv");
}

TEST_CASE("GIVEN a 1 peta Sievert WHEN passed to a streaming operator THEN "
          "result is '1PSv'") {
  constexpr auto value = 1_PSv;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 PSv");
}

TEST_CASE(
    "GIVEN a string of '1aSv' WHEN streamed into atto_sievert_t THEN result "
    "is a value of 1 atto_sievert_t AND stream is good") {
  std::stringstream ss;
  ss << "1aSv";
  SI::atto_sievert_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_aSv);
}

TEST_CASE(
    "GIVEN a string of '1fSv' WHEN streamed into femto_sievert_t THEN result "
    "is a value of 1 femto_sievert_t AND stream is good") {
  std::stringstream ss;
  ss << "1fSv";
  SI::femto_sievert_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fSv);
}

TEST_CASE(
    "GIVEN a string of '1pSv' WHEN streamed into pico_sievert_t THEN result "
    "is a value of 1 pico_sievert_t AND stream is good") {
  std::stringstream ss;
  ss << "1pSv";
  SI::pico_sievert_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pSv);
}

TEST_CASE(
    "GIVEN a string of '1nSv' WHEN streamed into nano_sievert_t THEN result "
    "is a value of 1 nano_sievert_t AND stream is good") {
  std::stringstream ss;
  ss << "1nSv";
  SI::nano_sievert_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nSv);
}

TEST_CASE(
    "GIVEN a string of '1uSv' WHEN streamed into micro_sievert_t THEN result "
    "is a value of 1 micro_sievert_t AND stream is good") {
  std::stringstream ss;
  ss << "1uSv";
  SI::micro_sievert_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_uSv);
}

TEST_CASE(
    "GIVEN a string of '1mSv' WHEN streamed into milli_sievert_t THEN result "
    "is a value of 1 milli_sievert_t AND stream is good") {
  std::stringstream ss;
  ss << "1mSv";
  SI::milli_sievert_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mSv);
}

TEST_CASE("GIVEN a string of '1Sv' WHEN streamed into sievert_t THEN result "
          "is a value of 1 sievert_t AND stream is good") {
  std::stringstream ss;
  ss << "1Sv";
  SI::sievert_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Sv);
}

TEST_CASE(
    "GIVEN a string of '1kSv' WHEN streamed into kilo_sievert_t THEN result "
    "is a value of 1 kilo_sievert_t AND stream is good") {
  std::stringstream ss;
  ss << "1kSv";
  SI::kilo_sievert_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kSv);
}

TEST_CASE(
    "GIVEN a string of '1MSv' WHEN streamed into mega_sievert_t THEN result "
    "is a value of 1 mega_sievert_t AND stream is good") {
  std::stringstream ss;
  ss << "1MSv";
  SI::mega_sievert_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_MSv);
}

TEST_CASE(
    "GIVEN a string of '1GSv' WHEN streamed into giga_sievert_t THEN result "
    "is a value of 1 giga_sievert_t AND stream is good") {
  std::stringstream ss;
  ss << "1GSv";
  SI::giga_sievert_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_GSv);
}

TEST_CASE(
    "GIVEN a string of '1TSv' WHEN streamed into tera_sievert_t THEN result "
    "is a value of 1 tera_sievert_t AND stream is good") {
  std::stringstream ss;
  ss << "1TSv";
  SI::tera_sievert_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_TSv);
}

TEST_CASE(
    "GIVEN a string of '1PSv' WHEN streamed into peta_sievert_t THEN result "
    "is a value of 1 peta_sievert_t AND stream is good") {
  std::stringstream ss;
  ss << "1PSv";
  SI::peta_sievert_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_PSv);
}

TEST_CASE(
    "GIVEN a string of '1ESv' WHEN streamed into exa_sievert_t THEN result "
    "is a value of 1 exa_sievert_t AND stream is good") {
  std::stringstream ss;
  ss << "1ESv";
  SI::exa_sievert_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_ESv);
}
