#include <catch2/catch.hpp>

#include <SI/radioactivity.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aBq THEN result is a "
          "radioactivity type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fBq THEN result is a "
          "radioactivity type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pBq THEN result is a "
          "radioactivity type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nBq THEN result is a "
          "radioactivity type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uBq THEN result is a "
          "radioactivity type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mBq THEN result is a "
          "radioactivity type AND ratio 1 to 1000") {
  constexpr auto one = 1_mBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Bq THEN result is a "
          "radioactivity type AND ratio 1 to 1") {
  constexpr auto one = 1_Bq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_Bq;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::radioactivity_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kBq THEN result is a "
          "radioactivity type AND ratio 1000 to 1") {
  constexpr auto one = 1_kBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MBq THEN result is a "
          "radioactivity type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GBq THEN result is a "
          "radioactivity type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TBq THEN result is a "
          "radioactivity type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PBq THEN result is a "
          "radioactivity type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EBq THEN result is a "
          "radioactivity type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::radioactivity_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EBq;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::radioactivity_t<long double, std::exa>>::value);
}

TEST_CASE("GIVEN a 1 atto becquerel WHEN passed to a streaming operator THEN "
          "result is '1aBq'") {
  constexpr auto value = 1_aBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 aBq");
}

TEST_CASE("GIVEN a 1 femto becquerel WHEN passed to a streaming operator THEN "
          "result is '1fBq'") {
  constexpr auto value = 1_fBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fBq");
}

TEST_CASE("GIVEN a 1 pico becquerel WHEN passed to a streaming operator THEN "
          "result is '1pBq'") {
  constexpr auto value = 1_pBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pBq");
}

TEST_CASE("GIVEN a 1 nano becquerel WHEN passed to a streaming operator THEN "
          "result is '1pBq'") {
  constexpr auto value = 1_nBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nBq");
}

TEST_CASE("GIVEN a 1 micro becquerel WHEN passed to a streaming operator THEN "
          "result is '1uBq'") {
  constexpr auto value = 1_uBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 uBq");
}

TEST_CASE("GIVEN a 1 milli becquerel WHEN passed to a streaming operator THEN "
          "result is '1mBq'") {
  constexpr auto value = 1_mBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mBq");
}

TEST_CASE(
    "GIVEN a 1 becquerel WHEN passed to a streaming operator THEN result is "
    "'1Bq'") {
  constexpr auto value = 1_Bq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Bq");
}

TEST_CASE("GIVEN a 1 kilo becquerel WHEN passed to a streaming operator THEN "
          "result is '1kBq'") {
  constexpr auto value = 1_kBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kBq");
}

TEST_CASE("GIVEN a 1 mega becquerel WHEN passed to a streaming operator THEN "
          "result is '1MBq'") {
  constexpr auto value = 1_MBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 MBq");
}

TEST_CASE("GIVEN a 1 giga becquerel WHEN passed to a streaming operator THEN "
          "result is '1GBq'") {
  constexpr auto value = 1_GBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 GBq");
}

TEST_CASE("GIVEN a 1 tera becquerel WHEN passed to a streaming operator THEN "
          "result is '1TBq'") {
  constexpr auto value = 1_TBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 TBq");
}

TEST_CASE("GIVEN a 1 exa becquerel WHEN passed to a streaming operator THEN "
          "result is '1EBq'") {
  constexpr auto value = 1_EBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 EBq");
}

TEST_CASE("GIVEN a 1 peta becquerel WHEN passed to a streaming operator THEN "
          "result is '1PBq'") {
  constexpr auto value = 1_PBq;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 PBq");
}

TEST_CASE(
    "GIVEN a string of '1aBq' WHEN streamed into atto_becquerel_t THEN result "
    "is a value of 1 atto_becquerel_t AND stream is good") {
  std::stringstream ss;
  ss << "1aBq";
  SI::atto_becquerel_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_aBq);
}

TEST_CASE(
    "GIVEN a string of '1fBq' WHEN streamed into femto_becquerel_t THEN result "
    "is a value of 1 femto_becquerel_t AND stream is good") {
  std::stringstream ss;
  ss << "1fBq";
  SI::femto_becquerel_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fBq);
}

TEST_CASE(
    "GIVEN a string of '1pBq' WHEN streamed into pico_becquerel_t THEN result "
    "is a value of 1 pico_becquerel_t AND stream is good") {
  std::stringstream ss;
  ss << "1pBq";
  SI::pico_becquerel_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pBq);
}

TEST_CASE(
    "GIVEN a string of '1nBq' WHEN streamed into nano_becquerel_t THEN result "
    "is a value of 1 nano_becquerel_t AND stream is good") {
  std::stringstream ss;
  ss << "1nBq";
  SI::nano_becquerel_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nBq);
}

TEST_CASE(
    "GIVEN a string of '1uBq' WHEN streamed into micro_becquerel_t THEN result "
    "is a value of 1 micro_becquerel_t AND stream is good") {
  std::stringstream ss;
  ss << "1uBq";
  SI::micro_becquerel_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_uBq);
}

TEST_CASE(
    "GIVEN a string of '1mBq' WHEN streamed into milli_becquerel_t THEN result "
    "is a value of 1 milli_becquerel_t AND stream is good") {
  std::stringstream ss;
  ss << "1mBq";
  SI::milli_becquerel_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mBq);
}

TEST_CASE("GIVEN a string of '1Bq' WHEN streamed into becquerel_t THEN result "
          "is a value of 1 becquerel_t AND stream is good") {
  std::stringstream ss;
  ss << "1Bq";
  SI::becquerel_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Bq);
}

TEST_CASE(
    "GIVEN a string of '1kBq' WHEN streamed into kilo_becquerel_t THEN result "
    "is a value of 1 kilo_becquerel_t AND stream is good") {
  std::stringstream ss;
  ss << "1kBq";
  SI::kilo_becquerel_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kBq);
}

TEST_CASE(
    "GIVEN a string of '1MBq' WHEN streamed into mega_becquerel_t THEN result "
    "is a value of 1 mega_becquerel_t AND stream is good") {
  std::stringstream ss;
  ss << "1MBq";
  SI::mega_becquerel_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_MBq);
}

TEST_CASE(
    "GIVEN a string of '1GBq' WHEN streamed into giga_becquerel_t THEN result "
    "is a value of 1 giga_becquerel_t AND stream is good") {
  std::stringstream ss;
  ss << "1GBq";
  SI::giga_becquerel_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_GBq);
}

TEST_CASE(
    "GIVEN a string of '1TBq' WHEN streamed into tera_becquerel_t THEN result "
    "is a value of 1 tera_becquerel_t AND stream is good") {
  std::stringstream ss;
  ss << "1TBq";
  SI::tera_becquerel_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_TBq);
}

TEST_CASE(
    "GIVEN a string of '1PBq' WHEN streamed into peta_becquerel_t THEN result "
    "is a value of 1 peta_becquerel_t AND stream is good") {
  std::stringstream ss;
  ss << "1PBq";
  SI::peta_becquerel_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_PBq);
}

TEST_CASE(
    "GIVEN a string of '1EBq' WHEN streamed into exa_becquerel_t THEN result "
    "is a value of 1 exa_becquerel_t AND stream is good") {
  std::stringstream ss;
  ss << "1EBq";
  SI::exa_becquerel_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_EBq);
}
