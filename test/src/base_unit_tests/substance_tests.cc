#include <catch2/catch.hpp>

#include <SI/stream.h>
#include <SI/substance.h>
#include <sstream>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _amol THEN result is a "
          "substance type AND ratio 1 to 10^18") {
  constexpr auto one = 1_amol;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::substance_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_amol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fmol THEN result is a "
          "substance type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::substance_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pmol THEN result is a "
          "substance type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::substance_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nmol THEN result is a "
          "substance type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::substance_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _umol THEN result is a "
          "substance type AND ratio 1 to 10^6") {
  constexpr auto one = 1_umol;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::substance_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_umol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mmol THEN result is a "
          "substance type AND ratio 1 to 1000") {
  constexpr auto one = 1_mmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::substance_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mol THEN result is a "
          "substance type AND ratio 1 to 1") {
  constexpr auto one = 1_mol;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::substance_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_mol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kmol THEN result is a "
          "substance type AND ratio 1000 to 1") {
  constexpr auto one = 1_kmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::substance_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Mmol THEN result is a "
          "substance type AND ratio 10^6 to 1") {
  constexpr auto one = 1_Mmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::substance_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_Mmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Gmol THEN result is a "
          "substance type AND ratio 10^9 to 1") {
  constexpr auto one = 1_Gmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::substance_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_Gmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Tmol THEN result is a "
          "substance type AND ratio 10^12 to 1") {
  constexpr auto one = 1_Tmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::substance_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_Tmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Pmol THEN result is a "
          "substance type AND ratio 10^15 to 1") {
  constexpr auto one = 1_Pmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::substance_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_Pmol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Emol THEN result is a "
          "substance type AND ratio 10^18 to 1") {
  constexpr auto one = 1_Emol;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::substance_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_Emol;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::substance_t<long double, std::exa>>::value);
}

TEST_CASE("GIVEN a 1 atto mol WHEN passed to a streaming operator THEN "
          "result is '1amol'") {
  constexpr auto value = 1_amol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 amol");
}

TEST_CASE("GIVEN a 1 femto mol WHEN passed to a streaming operator THEN "
          "result is '1fmol'") {
  constexpr auto value = 1_fmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fmol");
}

TEST_CASE("GIVEN a 1 pico mol WHEN passed to a streaming operator THEN "
          "result is '1pmol'") {
  constexpr auto value = 1_pmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pmol");
}

TEST_CASE("GIVEN a 1 nano mol WHEN passed to a streaming operator THEN "
          "result is '1pmol'") {
  constexpr auto value = 1_nmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nmol");
}

TEST_CASE("GIVEN a 1 micro mol WHEN passed to a streaming operator THEN "
          "result is '1umol'") {
  constexpr auto value = 1_umol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 umol");
}

TEST_CASE("GIVEN a 1 milli mol WHEN passed to a streaming operator THEN "
          "result is '1mmol'") {
  constexpr auto value = 1_mmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mmol");
}

TEST_CASE("GIVEN a 1 mol WHEN passed to a streaming operator THEN result is "
          "'1mol'") {
  constexpr auto value = 1_mol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mol");
}

TEST_CASE("GIVEN a 1 kilo mol WHEN passed to a streaming operator THEN "
          "result is '1kmol'") {
  constexpr auto value = 1_kmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kmol");
}

TEST_CASE("GIVEN a 1 mega mol WHEN passed to a streaming operator THEN "
          "result is '1Mmol'") {
  constexpr auto value = 1_Mmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Mmol");
}

TEST_CASE("GIVEN a 1 giga mol WHEN passed to a streaming operator THEN "
          "result is '1Gmol'") {
  constexpr auto value = 1_Gmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Gmol");
}

TEST_CASE("GIVEN a 1 tera mol WHEN passed to a streaming operator THEN "
          "result is '1Tmol'") {
  constexpr auto value = 1_Tmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Tmol");
}

TEST_CASE("GIVEN a 1 exa mol WHEN passed to a streaming operator THEN "
          "result is '1Emol'") {
  constexpr auto value = 1_Emol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Emol");
}

TEST_CASE("GIVEN a 1 peta mol WHEN passed to a streaming operator THEN "
          "result is '1Pmol'") {
  constexpr auto value = 1_Pmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Pmol");
}
TEST_CASE("GIVEN a string of '1amol' WHEN streamed into atto_mol_t THEN result "
          "is a value of 1 atto_mol_t AND stream is good") {
  std::stringstream ss;
  ss << "1amol";
  SI::atto_mol_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_amol);
}

TEST_CASE(
    "GIVEN a string of '1fmol' WHEN streamed into femto_mol_t THEN result "
    "is a value of 1 femto_mol_t AND stream is good") {
  std::stringstream ss;
  ss << "1fmol";
  SI::femto_mol_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fmol);
}

TEST_CASE("GIVEN a string of '1pmol' WHEN streamed into pico_mol_t THEN result "
          "is a value of 1 pico_mol_t AND stream is good") {
  std::stringstream ss;
  ss << "1pmol";
  SI::pico_mol_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pmol);
}

TEST_CASE("GIVEN a string of '1nmol' WHEN streamed into nano_mol_t THEN result "
          "is a value of 1 nano_mol_t AND stream is good") {
  std::stringstream ss;
  ss << "1nmol";
  SI::nano_mol_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nmol);
}

TEST_CASE(
    "GIVEN a string of '1umol' WHEN streamed into micro_mol_t THEN result "
    "is a value of 1 micro_mol_t AND stream is good") {
  std::stringstream ss;
  ss << "1umol";
  SI::micro_mol_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_umol);
}

TEST_CASE(
    "GIVEN a string of '1mmol' WHEN streamed into milli_mol_t THEN result "
    "is a value of 1 milli_mol_t AND stream is good") {
  std::stringstream ss;
  ss << "1mmol";
  SI::milli_mol_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mmol);
}

TEST_CASE("GIVEN a string of '1mol' WHEN streamed into mol_t THEN result "
          "is a value of 1 mol_t AND stream is good") {
  std::stringstream ss;
  ss << "1mol";
  SI::mol_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mol);
}

TEST_CASE("GIVEN a string of '1kmol' WHEN streamed into kilo_mol_t THEN result "
          "is a value of 1 kilo_mol_t AND stream is good") {
  std::stringstream ss;
  ss << "1kmol";
  SI::kilo_mol_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kmol);
}

TEST_CASE("GIVEN a string of '1Mmol' WHEN streamed into mega_mol_t THEN result "
          "is a value of 1 mega_mol_t AND stream is good") {
  std::stringstream ss;
  ss << "1Mmol";
  SI::mega_mol_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Mmol);
}

TEST_CASE("GIVEN a string of '1Gmol' WHEN streamed into giga_mol_t THEN result "
          "is a value of 1 giga_mol_t AND stream is good") {
  std::stringstream ss;
  ss << "1Gmol";
  SI::giga_mol_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Gmol);
}

TEST_CASE("GIVEN a string of '1Tmol' WHEN streamed into tera_mol_t THEN result "
          "is a value of 1 tera_mol_t AND stream is good") {
  std::stringstream ss;
  ss << "1Tmol";
  SI::tera_mol_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Tmol);
}

TEST_CASE("GIVEN a string of '1Pmol' WHEN streamed into peta_mol_t THEN result "
          "is a value of 1 peta_mol_t AND stream is good") {
  std::stringstream ss;
  ss << "1Pmol";
  SI::peta_mol_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Pmol);
}

TEST_CASE("GIVEN a string of '1Emol' WHEN streamed into exa_mol_t THEN result "
          "is a value of 1 exa_mol_t AND stream is good") {
  std::stringstream ss;
  ss << "1Emol";
  SI::exa_mol_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Emol);
}
