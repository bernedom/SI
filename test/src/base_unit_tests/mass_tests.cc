#include <catch2/catch.hpp>

#include <SI/mass.h>
#include <SI/stream.h>
#include <sstream>

using namespace SI::literals;

TEST_CASE("GIVEN a value WHEN constructed with literal _fg THEN result is a "
          "mass type AND ratio 1 to 10^18") {
  constexpr auto one = 1_fg;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_fg;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pg THEN result is a "
          "mass type AND ratio 1 to 10^15") {
  constexpr auto one = 1_pg;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::mass_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_pg;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::mass_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ng THEN result is a "
          "mass type AND ratio 1 to 10^12") {
  constexpr auto one = 1_ng;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_ng;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ug THEN result is a "
          "mass type AND ratio 1 to 10^9") {
  constexpr auto one = 1_ug;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_ug;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mg THEN result is a "
          "mass value AND ratio is 1/1000000") {
  constexpr auto one = 1_mg;

  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::mass_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_mg;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::mass_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _g THEN result is a "
          "mass value AND ratio is 1/1000") {
  constexpr auto one = 1_g;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::mass_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_g;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::mass_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kg THEN result is a "
          "mass value AND ratio is 1/1") {
  constexpr auto one = 1_kg;
  STATIC_REQUIRE(std::is_same<decltype(one),
                              const SI::mass_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_kg;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::mass_t<long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _t THEN result is a "
          "mass value AND ratio is 1000/1") {
  constexpr auto one = 1_t;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_t;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kt THEN result is a "
          "mass value AND ratio is 10^6/1") {
  constexpr auto one = 1_kt;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_kt;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Mt THEN result is a "
          "mass value AND ratio is 10^9/1") {
  constexpr auto one = 1_Mt;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_Mt;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Gt THEN result is a "
          "mass value AND ratio is 10^12/1") {
  constexpr auto one = 1_Gt;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_Gt;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Tt THEN result is a "
          "mass value AND ratio is 10^15/1") {
  constexpr auto one = 1_Tt;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_Tt;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Pt THEN result is a "
          "mass value AND ratio is 10^18/1") {
  constexpr auto one = 1_Pt;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_Pt;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::exa>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Mg THEN result is a "
          "mass value AND ratio is 1000/1") {
  constexpr auto one = 1_Mg;

  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_Mg;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Gg THEN result is a "
          "mass value AND ratio is 10^6/1") {
  constexpr auto one = 1_Gg;

  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_Gg;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Tg THEN result is a "
          "mass value AND ratio is 10^9/1") {
  constexpr auto one = 1_Tg;

  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_Tg;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Pg THEN result is a "
          "mass value AND ratio is 10^12/1") {
  constexpr auto one = 1_Pg;

  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_Pg;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Eg THEN result is a "
          "mass value AND ratio is 10^15/1") {
  constexpr auto one = 1_Eg;

  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_Eg;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Zg THEN result is a "
          "mass value AND ratio is 10^18/1") {
  constexpr auto one = 1_Zg;

  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::mass_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_Zg;
  STATIC_REQUIRE(std::is_same<decltype(one_f),
                              const SI::mass_t<long double, std::exa>>::value);
}

TEST_CASE("GIVEN a 1 femto gram WHEN passed to a streaming operator THEN "
          "result is '1fg'") {
  constexpr auto value = 1_fg;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fg");
}

TEST_CASE("GIVEN a 1 pico gram WHEN passed to a streaming operator THEN "
          "result is '1pg'") {
  constexpr auto value = 1_pg;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pg");
}

TEST_CASE("GIVEN a 1 nano gram WHEN passed to a streaming operator THEN "
          "result is '1pg'") {
  constexpr auto value = 1_ng;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 ng");
}

TEST_CASE("GIVEN a 1 micro gram WHEN passed to a streaming operator THEN "
          "result is '1ug'") {
  constexpr auto value = 1_ug;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 ug");
}

TEST_CASE("GIVEN a 1 milli gram WHEN passed to a streaming operator THEN "
          "result is '1mg'") {
  constexpr auto value = 1_mg;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mg");
}

TEST_CASE("GIVEN a 1 gram WHEN passed to a streaming operator THEN result is "
          "'1g'") {
  constexpr auto value = 1_g;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 g");
}

TEST_CASE("GIVEN a 1 kilo gram WHEN passed to a streaming operator THEN "
          "result is '1kg'") {
  constexpr auto value = 1_kg;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kg");
}

TEST_CASE("GIVEN a 1t WHEN passed to a streaming operator THEN "
          "result is '1t'") {
  constexpr auto value = 1_t;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 t");
}

TEST_CASE("GIVEN a string of '1fg' WHEN streamed into femto_gram_t THEN result "
          "is a value of 1 femto_gram_t AND stream is good") {
  std::stringstream ss;
  ss << "1fg";
  SI::femto_gram_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fg);
}

TEST_CASE("GIVEN a string of '1pg' WHEN streamed into pico_gram_t THEN result "
          "is a value of 1 pico_gram_t AND stream is good") {
  std::stringstream ss;
  ss << "1pg";
  SI::pico_gram_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pg);
}

TEST_CASE("GIVEN a string of '1ng' WHEN streamed into nano_gram_t THEN result "
          "is a value of 1 nano_gram_t AND stream is good") {
  std::stringstream ss;
  ss << "1ng";
  SI::nano_gram_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_ng);
}

TEST_CASE("GIVEN a string of '1ug' WHEN streamed into micro_gram_t THEN result "
          "is a value of 1 micro_gram_t AND stream is good") {
  std::stringstream ss;
  ss << "1ug";
  SI::micro_gram_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_ug);
}

TEST_CASE("GIVEN a string of '1mg' WHEN streamed into milli_gram_t THEN result "
          "is a value of 1 milli_gram_t AND stream is good") {
  std::stringstream ss;
  ss << "1mg";
  SI::milli_gram_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mg);
}

TEST_CASE("GIVEN a string of '1g' WHEN streamed into gram_t THEN result "
          "is a value of 1 gram_t AND stream is good") {
  std::stringstream ss;
  ss << "1g";
  SI::gram_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_g);
}

TEST_CASE("GIVEN a string of '1kg' WHEN streamed into kilo_gram_t THEN result "
          "is a value of 1 kilo_gram_t AND stream is good") {
  std::stringstream ss;
  ss << "1kg";
  SI::kilo_gram_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kg);
}

TEST_CASE("GIVEN a string of '1t' WHEN streamed into ton_t THEN result "
          "is a value of 1 ton_t AND stream is good") {
  std::stringstream ss;
  ss << "1t";
  SI::ton_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_t);
}

TEST_CASE("GIVEN a 1 mega gram WHEN passed to a streaming operator THEN "
          "result is '1t'") {
  constexpr auto value = 1_Mg;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 t");
}

TEST_CASE("GIVEN a 1 giga gram WHEN passed to a streaming operator THEN "
          "result is '1Gg'") {
  constexpr auto value = 1_Gg;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Gg");
}

TEST_CASE("GIVEN a 1 tera gram WHEN passed to a streaming operator THEN "
          "result is '1Tg'") {
  constexpr auto value = 1_Tg;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Tg");
}

TEST_CASE("GIVEN a 1 peta gram WHEN passed to a streaming operator THEN "
          "result is '1Pg'") {
  constexpr auto value = 1_Pg;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Pg");
}

TEST_CASE("GIVEN a 1 exa gram WHEN passed to a streaming operator THEN "
          "result is '1Eg'") {
  constexpr auto value = 1_Eg;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Eg");
}

TEST_CASE("GIVEN a 1 zetta gram WHEN passed to a streaming operator THEN "
          "result is '1Zg'") {
  constexpr auto value = 1_Zg;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Zg");
}

TEST_CASE("GIVEN a string of '1Gg' WHEN streamed into giga_gram_t THEN result "
          "is a value of 1 giga_gram_t AND stream is good") {
  std::stringstream ss;
  ss << "1Gg";
  SI::giga_gram_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Gg);
}

TEST_CASE("GIVEN a string of '1Tg' WHEN streamed into tera_gram_t THEN result "
          "is a value of 1 tera_gram_t AND stream is good") {
  std::stringstream ss;
  ss << "1Tg";
  SI::tera_gram_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Tg);
}

TEST_CASE("GIVEN a string of '1Pg' WHEN streamed into peta_gram_t THEN result "
          "is a value of 1 peta_gram_t AND stream is good") {
  std::stringstream ss;
  ss << "1Pg";
  SI::peta_gram_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Pg);
}

TEST_CASE("GIVEN a string of '1Eg' WHEN streamed into exa_gram_t THEN result "
          "is a value of 1 exa_gram_t AND stream is good") {
  std::stringstream ss;
  ss << "1Eg";
  SI::exa_gram_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Eg);
}

TEST_CASE("GIVEN a string of '1Zg' WHEN streamed into zetta_gram_t THEN result "
          "is a value of 1 zetta_gram_t AND stream is good") {
  std::stringstream ss;
  ss << "1Zg";
  SI::zetta_gram_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Zg);
}
