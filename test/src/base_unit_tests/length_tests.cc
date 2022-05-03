#include <catch2/catch.hpp>

#include <SI/length.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI;

TEST_CASE("GIVEN a value WHEN constructed with literal _am THEN result is a "
          "length type AND ratio 1 to 10^18") {
  constexpr auto one = 1_am;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_am;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fm THEN result is a "
          "length type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pm THEN result is a "
          "length type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nm THEN result is a "
          "length type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _um THEN result is a "
          "length type AND ratio 1 to 10^6") {
  constexpr auto one = 1_um;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_um;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mm THEN result is a "
          "length type AND ratio 1 to 1000") {
  constexpr auto one = 1_mm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _cm  THEN result is a "
          "length type ratio 1 to 100") {

  constexpr auto one = 1_cm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::centi>>::value);
  constexpr auto one_f = 1.0_cm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::centi>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _m THEN result is a "
          "length type AND ratio 1 to 1") {
  constexpr auto one = 1_m;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::length_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_m;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _km THEN result is a "
          "length type AND ratio 1000 to 1") {
  constexpr auto one = 1_km;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_km;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Mm THEN result is a "
          "length type AND ratio 10^6 to 1") {
  constexpr auto one = 1_Mm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_Mm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Gm THEN result is a "
          "length type AND ratio 10^9 to 1") {
  constexpr auto one = 1_Gm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_Gm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Tm THEN result is a "
          "length type AND ratio 10^12 to 1") {
  constexpr auto one = 1_Tm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_Tm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Pm THEN result is a "
          "length type AND ratio 10^15 to 1") {
  constexpr auto one = 1_Pm;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_Pm;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Em THEN result is a "
          "length type AND ratio 10^18 to 1") {
  constexpr auto one = 1_Em;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::length_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_Em;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::length_t<long double, std::exa>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _km THEN it is one "
          "thousand _m") {
  constexpr auto one_k = 1_km;
  constexpr auto one_m = 1_m;
  STATIC_REQUIRE(one_k == (one_m * 1000));
}

TEST_CASE(
    "GIVEN a value WHEN constructed with literal _m THEN result is 100 cm") {
  constexpr auto one_cm = 1_cm;
  constexpr auto one_m = 1_m;

  STATIC_REQUIRE(one_m == one_cm * 100);
}

TEST_CASE(
    "GIVEN a value WHEN constructed with literal _cm THEN result is 10 mm") {
  constexpr auto one_cm = 1_cm;
  constexpr auto one_mm = 1_mm;

  STATIC_REQUIRE(one_cm == one_mm * 10);
}

TEST_CASE("GIVEN a value of 1m WHEN multiplied with -1 THEN result is -1m") {
  constexpr auto one_m = 1_m;
  constexpr auto neg_one_m = -1_m;

  STATIC_REQUIRE(one_m * -1 == neg_one_m);
}

TEST_CASE("GIVEN a 1 atto metre WHEN passed to a streaming operator THEN "
          "result is '1am'") {
  constexpr auto value = 1_am;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 am");
}

TEST_CASE("GIVEN a 1 femto metre WHEN passed to a streaming operator THEN "
          "result is '1fm'") {
  constexpr auto value = 1_fm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fm");
}

TEST_CASE("GIVEN a 1 pico metre WHEN passed to a streaming operator THEN "
          "result is '1pm'") {
  constexpr auto value = 1_pm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pm");
}

TEST_CASE("GIVEN a 1 nano metre WHEN passed to a streaming operator THEN "
          "result is '1nm'") {
  constexpr auto value = 1_nm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nm");
}

TEST_CASE("GIVEN a 1 micro metre WHEN passed to a streaming operator THEN "
          "result is '1um'") {
  constexpr auto value = 1_um;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 um");
}

TEST_CASE("GIVEN a 1 milli metre WHEN passed to a streaming operator THEN "
          "result is '1mm'") {
  constexpr auto value = 1_mm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mm");
}

TEST_CASE("GIVEN a 1 centi metre WHEN passed to a streaming operator THEN "
          "result is '1cm'") {
  constexpr auto value = 1_cm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 cm");
}

TEST_CASE(
    "GIVEN a 1 metre WHEN passed to a streaming operator THEN result is '1m'") {
  constexpr auto value = 1_m;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 m");
}

TEST_CASE("GIVEN a 1 kilo metre WHEN passed to a streaming operator THEN "
          "result is '1km'") {
  constexpr auto value = 1_km;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 km");
}

TEST_CASE("GIVEN a 1 mega metre WHEN passed to a streaming operator THEN "
          "result is '1Mm'") {
  constexpr auto value = 1_Mm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Mm");
}

TEST_CASE("GIVEN a 1 giga metre WHEN passed to a streaming operator THEN "
          "result is '1Gm'") {
  constexpr auto value = 1_Gm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Gm");
}

TEST_CASE("GIVEN a 1 tera metre WHEN passed to a streaming operator THEN "
          "result is '1Tm'") {
  constexpr auto value = 1_Tm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Tm");
}

TEST_CASE("GIVEN a 1 exa metre WHEN passed to a streaming operator THEN "
          "result is '1Em'") {
  constexpr auto value = 1_Em;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Em");
}

TEST_CASE("GIVEN a 1 peta metre WHEN passed to a streaming operator THEN "
          "result is '1Pm'") {
  constexpr auto value = 1_Pm;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Pm");
}

TEST_CASE(
    "GIVEN a string of '1m' WHEN streamed into length_t THEN value is '1") {
  std::stringstream ss;
  ss << "1m";
  SI::metre_t<int64_t> metre{0};

  ss >> metre;

  REQUIRE(metre == 1_m);
  REQUIRE(!ss.fail());
}

TEST_CASE(
    "GIVEN a string of '1km' WHEN streamed into length_t THEN value is '1") {
  std::stringstream ss;
  ss << "1km";
  SI::kilo_metre_t<int64_t> metre{0};

  ss >> metre;

  REQUIRE(metre == 1_km);
  REQUIRE(!ss.fail());
}

TEST_CASE("GIVEN a string of '1km' WHEN streamed into metre_t THEN conversion "
          "fails") {

  std::stringstream ss;
  ss << "1km";

  SI::metre_t<int64_t> metre{0};
  ss >> metre;

  REQUIRE(ss.fail());
}

TEST_CASE("GIVEN a string of '1x' WHEN streamed into metre_t THEN conversion "
          "fails") {

  std::stringstream ss;
  ss << "1kx";

  SI::kilo_metre_t<int64_t> metre{0};
  ss >> metre;

  REQUIRE(ss.fail());
}

TEST_CASE("GIVEN a string of '1am' WHEN streamed into atto_metre_t THEN result "
          "is a value of 1 atto_metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1am";
  SI::atto_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_am);
}

TEST_CASE(
    "GIVEN a string of '1fm' WHEN streamed into femto_metre_t THEN result "
    "is a value of 1 femto_metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1fm";
  SI::femto_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fm);
}

TEST_CASE("GIVEN a string of '1pm' WHEN streamed into pico_metre_t THEN result "
          "is a value of 1 pico_metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1pm";
  SI::pico_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pm);
}

TEST_CASE("GIVEN a string of '1nm' WHEN streamed into nano_metre_t THEN result "
          "is a value of 1 nano_metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1nm";
  SI::nano_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nm);
}

TEST_CASE(
    "GIVEN a string of '1um' WHEN streamed into micro_metre_t THEN result "
    "is a value of 1 micro_metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1um";
  SI::micro_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_um);
}

TEST_CASE(
    "GIVEN a string of '1mm' WHEN streamed into milli_metre_t THEN result "
    "is a value of 1 milli_metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1mm";
  SI::milli_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mm);
}

TEST_CASE("GIVEN a string of '1m' WHEN streamed into metre_t THEN result "
          "is a value of 1 metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1m";
  SI::metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_m);
}

TEST_CASE("GIVEN a string of '1km' WHEN streamed into kilo_metre_t THEN result "
          "is a value of 1 kilo_metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1km";
  SI::kilo_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_km);
}

TEST_CASE("GIVEN a string of '1Mm' WHEN streamed into mega_metre_t THEN result "
          "is a value of 1 mega_metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1Mm";
  SI::mega_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Mm);
}

TEST_CASE("GIVEN a string of '1Gm' WHEN streamed into giga_metre_t THEN result "
          "is a value of 1 giga_metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1Gm";
  SI::giga_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Gm);
}

TEST_CASE("GIVEN a string of '1Tm' WHEN streamed into tera_metre_t THEN result "
          "is a value of 1 tera_metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1Tm";
  SI::tera_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Tm);
}

TEST_CASE("GIVEN a string of '1Pm' WHEN streamed into peta_metre_t THEN result "
          "is a value of 1 peta_metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1Pm";
  SI::peta_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Pm);
}

TEST_CASE("GIVEN a string of '1Em' WHEN streamed into exa_metre_t THEN result "
          "is a value of 1 exa_metre_t AND stream is good") {
  std::stringstream ss;
  ss << "1Em";
  SI::exa_metre_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Em);
}

// TEST_CASE("Test") {
//   constexpr auto r = 2L / 1_mm;
//   // constexpr auto x = 2.0 / SI::milli_metre_t<double>{1};
//   //  constexpr auto x = 2 / SI::milli_metre_t<double>{1};
// }