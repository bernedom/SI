#include <catch.hpp>

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

TEST_CASE("GIVEN a value WHEN constructed with literal _pmol THEN result is a "
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
  REQUIRE(ss.str() == "1amol");
}

TEST_CASE("GIVEN a 1 femto mol WHEN passed to a streaming operator THEN "
          "result is '1fmol'") {
  constexpr auto value = 1_fmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1fmol");
}

TEST_CASE("GIVEN a 1 pico mol WHEN passed to a streaming operator THEN "
          "result is '1pmol'") {
  constexpr auto value = 1_pmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1pmol");
}

TEST_CASE("GIVEN a 1 nano mol WHEN passed to a streaming operator THEN "
          "result is '1pmol'") {
  constexpr auto value = 1_nmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1nmol");
}

TEST_CASE("GIVEN a 1 micro mol WHEN passed to a streaming operator THEN "
          "result is '1umol'") {
  constexpr auto value = 1_umol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1umol");
}

TEST_CASE("GIVEN a 1 milli mol WHEN passed to a streaming operator THEN "
          "result is '1mmol'") {
  constexpr auto value = 1_mmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1mmol");
}

TEST_CASE("GIVEN a 1 mol WHEN passed to a streaming operator THEN result is "
          "'1mol'") {
  constexpr auto value = 1_mol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1mol");
}

TEST_CASE("GIVEN a 1 kilo mol WHEN passed to a streaming operator THEN "
          "result is '1kmol'") {
  constexpr auto value = 1_kmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1kmol");
}

TEST_CASE("GIVEN a 1 mega mol WHEN passed to a streaming operator THEN "
          "result is '1Mmol'") {
  constexpr auto value = 1_Mmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1Mmol");
}

TEST_CASE("GIVEN a 1 giga mol WHEN passed to a streaming operator THEN "
          "result is '1Gmol'") {
  constexpr auto value = 1_Gmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1Gmol");
}

TEST_CASE("GIVEN a 1 tera mol WHEN passed to a streaming operator THEN "
          "result is '1Tmol'") {
  constexpr auto value = 1_Tmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1Tmol");
}

TEST_CASE("GIVEN a 1 exa mol WHEN passed to a streaming operator THEN "
          "result is '1Emol'") {
  constexpr auto value = 1_Emol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1Emol");
}

TEST_CASE("GIVEN a 1 peta mol WHEN passed to a streaming operator THEN "
          "result is '1Pmol'") {
  constexpr auto value = 1_Pmol;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == "1Pmol");
}