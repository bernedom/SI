#include <catch2/catch.hpp>

#include <SI/absorbed_dose.h>
#include <SI/stream.h>

#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aGy THEN result is a "
          "absorbed_dose type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fGy THEN result is a "
          "absorbed_dose type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pGy THEN result is a "
          "absorbed_dose type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nGy THEN result is a "
          "absorbed_dose type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uGy THEN result is a "
          "absorbed_dose type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mGy THEN result is a "
          "absorbed_dose type AND ratio 1 to 1000") {
  constexpr auto one = 1_mGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Gy THEN result is a "
          "absorbed_dose type AND ratio 1 to 1") {
  constexpr auto one = 1_Gy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_Gy;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::absorbed_dose_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kGy THEN result is a "
          "absorbed_dose type AND ratio 1000 to 1") {
  constexpr auto one = 1_kGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MGy THEN result is a "
          "absorbed_dose type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GGy THEN result is a "
          "absorbed_dose type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TGy THEN result is a "
          "absorbed_dose type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PGy THEN result is a "
          "absorbed_dose type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _EGy THEN result is a "
          "absorbed_dose type AND ratio 10^18 to 1") {
  constexpr auto one = 1_EGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::absorbed_dose_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_EGy;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::absorbed_dose_t<long double, std::exa>>::value);
}

TEST_CASE("GIVEN a 1 atto Gray WHEN passed to a streaming operator THEN "
          "result is '1aGy'") {
  constexpr auto value = 1_aGy;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 aGy");
}

TEST_CASE("GIVEN a 1 femto Gray WHEN passed to a streaming operator THEN "
          "result is '1fGy'") {
  constexpr auto value = 1_fGy;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fGy");
}

TEST_CASE("GIVEN a 1 pico Gray WHEN passed to a streaming operator THEN "
          "result is '1pGy'") {
  constexpr auto value = 1_pGy;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pGy");
}

TEST_CASE("GIVEN a 1 nano Gray WHEN passed to a streaming operator THEN "
          "result is '1pGy'") {
  constexpr auto value = 1_nGy;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nGy");
}

TEST_CASE("GIVEN a 1 micro Gray WHEN passed to a streaming operator THEN "
          "result is '1uGy'") {
  constexpr auto value = 1_uGy;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 uGy");
}

TEST_CASE("GIVEN a 1 milli Gray WHEN passed to a streaming operator THEN "
          "result is '1mGy'") {
  constexpr auto value = 1_mGy;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mGy");
}

TEST_CASE("GIVEN a 1 Gray WHEN passed to a streaming operator THEN result is "
          "'1Gy'") {
  constexpr auto value = 1_Gy;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Gy");
}

TEST_CASE("GIVEN a 1 kilo Gray WHEN passed to a streaming operator THEN "
          "result is '1kGy'") {
  constexpr auto value = 1_kGy;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kGy");
}

TEST_CASE("GIVEN a 1 mega Gray WHEN passed to a streaming operator THEN "
          "result is '1MGy'") {
  constexpr auto value = 1_MGy;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 MGy");
}

TEST_CASE("GIVEN a 1 giga Gray WHEN passed to a streaming operator THEN "
          "result is '1GGy'") {
  constexpr auto value = 1_GGy;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 GGy");
}

TEST_CASE("GIVEN a 1 tera Gray WHEN passed to a streaming operator THEN "
          "result is '1TGy'") {
  constexpr auto value = 1_TGy;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 TGy");
}

TEST_CASE("GIVEN a 1 exa Gray WHEN passed to a streaming operator THEN "
          "result is '1EGy'") {
  constexpr auto value = 1_EGy;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 EGy");
}

TEST_CASE("GIVEN a 1 peta Gray WHEN passed to a streaming operator THEN "
          "result is '1PGy'") {
  constexpr auto value = 1_PGy;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 PGy");
}

TEST_CASE("GIVEN a string of '1aGy' WHEN streamed into atto_gray_t THEN result "
          "is a value of 1 atto_gray_t AND stream is good") {
  std::stringstream ss;
  ss << "1aGy";
  SI::atto_gray_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_aGy);
}

TEST_CASE(
    "GIVEN a string of '1fGy' WHEN streamed into femto_gray_t THEN result "
    "is a value of 1 femto_gray_t AND stream is good") {
  std::stringstream ss;
  ss << "1fGy";
  SI::femto_gray_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fGy);
}

TEST_CASE("GIVEN a string of '1pGy' WHEN streamed into pico_gray_t THEN result "
          "is a value of 1 pico_gray_t AND stream is good") {
  std::stringstream ss;
  ss << "1pGy";
  SI::pico_gray_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pGy);
}

TEST_CASE("GIVEN a string of '1nGy' WHEN streamed into nano_gray_t THEN result "
          "is a value of 1 nano_gray_t AND stream is good") {
  std::stringstream ss;
  ss << "1nGy";
  SI::nano_gray_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nGy);
}

TEST_CASE(
    "GIVEN a string of '1uGy' WHEN streamed into micro_gray_t THEN result "
    "is a value of 1 micro_gray_t AND stream is good") {
  std::stringstream ss;
  ss << "1uGy";
  SI::micro_gray_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_uGy);
}

TEST_CASE(
    "GIVEN a string of '1mGy' WHEN streamed into milli_gray_t THEN result "
    "is a value of 1 milli_gray_t AND stream is good") {
  std::stringstream ss;
  ss << "1mGy";
  SI::milli_gray_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mGy);
}

TEST_CASE("GIVEN a string of '1Gy' WHEN streamed into gray_t THEN result "
          "is a value of 1 gray_t AND stream is good") {
  std::stringstream ss;
  ss << "1Gy";
  SI::gray_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Gy);
}

TEST_CASE("GIVEN a string of '1kGy' WHEN streamed into kilo_gray_t THEN result "
          "is a value of 1 kilo_gray_t AND stream is good") {
  std::stringstream ss;
  ss << "1kGy";
  SI::kilo_gray_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kGy);
}

TEST_CASE("GIVEN a string of '1MGy' WHEN streamed into mega_gray_t THEN result "
          "is a value of 1 mega_gray_t AND stream is good") {
  std::stringstream ss;
  ss << "1MGy";
  SI::mega_gray_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_MGy);
}

TEST_CASE("GIVEN a string of '1GGy' WHEN streamed into giga_gray_t THEN result "
          "is a value of 1 giga_gray_t AND stream is good") {
  std::stringstream ss;
  ss << "1GGy";
  SI::giga_gray_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_GGy);
}

TEST_CASE("GIVEN a string of '1TGy' WHEN streamed into tera_gray_t THEN result "
          "is a value of 1 tera_gray_t AND stream is good") {
  std::stringstream ss;
  ss << "1TGy";
  SI::tera_gray_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_TGy);
}

TEST_CASE("GIVEN a string of '1PGy' WHEN streamed into peta_gray_t THEN result "
          "is a value of 1 peta_gray_t AND stream is good") {
  std::stringstream ss;
  ss << "1PGy";
  SI::peta_gray_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_PGy);
}

TEST_CASE("GIVEN a string of '1EGy' WHEN streamed into exa_gray_t THEN result "
          "is a value of 1 exa_gray_t AND stream is good") {
  std::stringstream ss;
  ss << "1EGy";
  SI::exa_gray_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_EGy);
}
