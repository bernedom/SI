#include <catch2/catch.hpp>

#include <SI/catalytic_activity.h>
#include <SI/stream.h>
#include <SI/substance.h>
#include <SI/time.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _akat THEN result is a "
          "catalytic_activity type AND ratio 1 to 10^15") {
  constexpr auto one = 1_akat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_akat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fkat THEN result is a "
          "catalytic_activity type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pkat THEN result is a "
          "catalytic_activity type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nkat THEN result is a "
          "catalytic_activity type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _ukat THEN result is a "
          "catalytic_activity type AND ratio 1 to 10^6") {
  constexpr auto one = 1_ukat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_ukat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mkat THEN result is a "
          "catalytic_activity type AND ratio 1 to 1000") {
  constexpr auto one = 1_mkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kat THEN result is a "
          "catalytic_activity type AND ratio 1 to 1") {
  constexpr auto one = 1_kat;
  STATIC_REQUIRE(
      std::is_same<decltype(one), const SI::catalytic_activity_t<
                                      int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_kat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kkat THEN result is a "
          "catalytic_activity type AND ratio 1000 to 1") {
  constexpr auto one = 1_kkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Mkat THEN result is a "
          "catalytic_activity type AND ratio 10^6 to 1") {
  constexpr auto one = 1_Mkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_Mkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Gkat THEN result is a "
          "catalytic_activity type AND ratio 10^9 to 1") {
  constexpr auto one = 1_Gkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_Gkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Tkat THEN result is a "
          "catalytic_activity type AND ratio 10^12 to 1") {
  constexpr auto one = 1_Tkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_Tkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Pkat THEN result is a "
          "catalytic_activity type AND ratio 10^15 to 1") {
  constexpr auto one = 1_Pkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_Pkat;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::catalytic_activity_t<
                                        long double, std::peta>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _Ekat THEN result is a "
          "catalytic_activity type AND ratio 10^18 to 1") {
  constexpr auto one = 1_Ekat;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::catalytic_activity_t<int64_t, std::exa>>::value);

  constexpr auto one_f = 1.0_Ekat;
  STATIC_REQUIRE(std::is_same<
                 decltype(one_f),
                 const SI::catalytic_activity_t<long double, std::exa>>::value);
}

TEMPLATE_TEST_CASE("GIVEN a substance value WHEN divided by a time value THEN "
                   "result is a catalytic_activity value",
                   "[catalytic_activity][operator/]", int64_t, long double) {
  constexpr SI::substance_t<TestType, std::ratio<1>> substance{1};
  constexpr SI::time_t<TestType, std::ratio<1>> time{1};

  constexpr auto result = substance / time;

  STATIC_REQUIRE(
      std::is_same<decltype(result), const SI::catalytic_activity_t<
                                         TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a catalytic_activity value WHEN multiplied by an time value "
    "THEN result is a substance value",
    "[catalytic_activity][operator*]", int64_t, long double) {
  constexpr SI::catalytic_activity_t<TestType, std::ratio<1>>
      catalytic_activity{1};
  constexpr SI::time_t<TestType, std::ratio<1>> time{1};

  constexpr auto result = catalytic_activity * time;
  constexpr auto result_commutative = time * catalytic_activity;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::substance_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a substance value WHEN divided by a catalytic_activity value THEN "
    "result is an time value",
    "[substance][operator/]", int64_t, long double) {
  constexpr SI::substance_t<TestType, std::ratio<1>> substance{1};
  constexpr SI::catalytic_activity_t<TestType, std::ratio<1>>
      catalytic_activity{1};

  constexpr auto result = substance / catalytic_activity;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::time_t<TestType, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a 1 atto katal WHEN passed to a streaming operator THEN "
          "result is '1akat'") {
  constexpr auto value = 1_akat;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 akat");
}

TEST_CASE("GIVEN a 1 femto katal WHEN passed to a streaming operator THEN "
          "result is '1fkat'") {
  constexpr auto value = 1_fkat;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fkat");
}

TEST_CASE("GIVEN a 1 pico katal WHEN passed to a streaming operator THEN "
          "result is '1pkat'") {
  constexpr auto value = 1_pkat;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pkat");
}

TEST_CASE("GIVEN a 1 nano katal WHEN passed to a streaming operator THEN "
          "result is '1pkat'") {
  constexpr auto value = 1_nkat;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nkat");
}

TEST_CASE("GIVEN a 1 micro katal WHEN passed to a streaming operator THEN "
          "result is '1ukat'") {
  constexpr auto value = 1_ukat;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 ukat");
}

TEST_CASE("GIVEN a 1 milli katal WHEN passed to a streaming operator THEN "
          "result is '1mkat'") {
  constexpr auto value = 1_mkat;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mkat");
}

TEST_CASE("GIVEN a 1 katal WHEN passed to a streaming operator THEN result is "
          "'1kat'") {
  constexpr auto value = 1_kat;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kat");
}

TEST_CASE("GIVEN a 1 kilo katal WHEN passed to a streaming operator THEN "
          "result is '1kkat'") {
  constexpr auto value = 1_kkat;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kkat");
}

TEST_CASE("GIVEN a 1 mega katal WHEN passed to a streaming operator THEN "
          "result is '1Mkat'") {
  constexpr auto value = 1_Mkat;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Mkat");
}

TEST_CASE("GIVEN a 1 giga katal WHEN passed to a streaming operator THEN "
          "result is '1Gkat'") {
  constexpr auto value = 1_Gkat;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Gkat");
}

TEST_CASE("GIVEN a 1 tera katal WHEN passed to a streaming operator THEN "
          "result is '1Tkat'") {
  constexpr auto value = 1_Tkat;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Tkat");
}

TEST_CASE("GIVEN a 1 exa katal WHEN passed to a streaming operator THEN "
          "result is '1Ekat'") {
  constexpr auto value = 1_Ekat;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Ekat");
}

TEST_CASE("GIVEN a 1 peta katal WHEN passed to a streaming operator THEN "
          "result is '1Pkat'") {
  constexpr auto value = 1_Pkat;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Pkat");
}

TEST_CASE(
    "GIVEN a string of '1akat' WHEN streamed into atto_katal_t THEN result "
    "is a value of 1 atto_katal_t AND stream is good") {
  std::stringstream ss;
  ss << "1akat";
  SI::atto_katal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_akat);
}

TEST_CASE(
    "GIVEN a string of '1fkat' WHEN streamed into femto_katal_t THEN result "
    "is a value of 1 femto_katal_t AND stream is good") {
  std::stringstream ss;
  ss << "1fkat";
  SI::femto_katal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fkat);
}

TEST_CASE(
    "GIVEN a string of '1pkat' WHEN streamed into pico_katal_t THEN result "
    "is a value of 1 pico_katal_t AND stream is good") {
  std::stringstream ss;
  ss << "1pkat";
  SI::pico_katal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pkat);
}

TEST_CASE(
    "GIVEN a string of '1nkat' WHEN streamed into nano_katal_t THEN result "
    "is a value of 1 nano_katal_t AND stream is good") {
  std::stringstream ss;
  ss << "1nkat";
  SI::nano_katal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nkat);
}

TEST_CASE(
    "GIVEN a string of '1ukat' WHEN streamed into micro_katal_t THEN result "
    "is a value of 1 micro_katal_t AND stream is good") {
  std::stringstream ss;
  ss << "1ukat";
  SI::micro_katal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_ukat);
}

TEST_CASE(
    "GIVEN a string of '1mkat' WHEN streamed into milli_katal_t THEN result "
    "is a value of 1 milli_katal_t AND stream is good") {
  std::stringstream ss;
  ss << "1mkat";
  SI::milli_katal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mkat);
}

TEST_CASE("GIVEN a string of '1kat' WHEN streamed into katal_t THEN result "
          "is a value of 1 katal_t AND stream is good") {
  std::stringstream ss;
  ss << "1kat";
  SI::katal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kat);
}

TEST_CASE(
    "GIVEN a string of '1kkat' WHEN streamed into kilo_katal_t THEN result "
    "is a value of 1 kilo_katal_t AND stream is good") {
  std::stringstream ss;
  ss << "1kkat";
  SI::kilo_katal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kkat);
}

TEST_CASE(
    "GIVEN a string of '1Mkat' WHEN streamed into mega_katal_t THEN result "
    "is a value of 1 mega_katal_t AND stream is good") {
  std::stringstream ss;
  ss << "1Mkat";
  SI::mega_katal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Mkat);
}

TEST_CASE(
    "GIVEN a string of '1Gkat' WHEN streamed into giga_katal_t THEN result "
    "is a value of 1 giga_katal_t AND stream is good") {
  std::stringstream ss;
  ss << "1Gkat";
  SI::giga_katal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Gkat);
}

TEST_CASE(
    "GIVEN a string of '1Tkat' WHEN streamed into tera_katal_t THEN result "
    "is a value of 1 tera_katal_t AND stream is good") {
  std::stringstream ss;
  ss << "1Tkat";
  SI::tera_katal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Tkat);
}

TEST_CASE(
    "GIVEN a string of '1Pkat' WHEN streamed into peta_katal_t THEN result "
    "is a value of 1 peta_katal_t AND stream is good") {
  std::stringstream ss;
  ss << "1Pkat";
  SI::peta_katal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Pkat);
}

TEST_CASE(
    "GIVEN a string of '1Ekat' WHEN streamed into exa_katal_t THEN result "
    "is a value of 1 exa_katal_t AND stream is good") {
  std::stringstream ss;
  ss << "1Ekat";
  SI::exa_katal_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_Ekat);
}
