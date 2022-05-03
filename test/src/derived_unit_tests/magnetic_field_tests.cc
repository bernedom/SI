#include <catch2/catch.hpp>

#include <SI/electric_potential.h>
#include <SI/magnetic_field.h>
#include <SI/stream.h>
#include <SI/time.h>
#include <sstream>

using namespace SI::literals;
TEST_CASE("GIVEN a value WHEN constructed with literal _aT THEN result is a "
          "magnetic_field type AND ratio 1 to 10^15") {
  constexpr auto one = 1_aT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::atto>>::value);

  constexpr auto one_f = 1.0_aT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::atto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _fT THEN result is a "
          "magnetic_field type AND ratio 1 to 10^15") {
  constexpr auto one = 1_fT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::femto>>::value);

  constexpr auto one_f = 1.0_fT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::femto>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _pT THEN result is a "
          "magnetic_field type AND ratio 1 to 10^12") {
  constexpr auto one = 1_pT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::pico>>::value);

  constexpr auto one_f = 1.0_pT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::pico>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _nT THEN result is a "
          "magnetic_field type AND ratio 1 to 10^9") {
  constexpr auto one = 1_nT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::nano>>::value);

  constexpr auto one_f = 1.0_nT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::nano>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _uT THEN result is a "
          "magnetic_field type AND ratio 1 to 10^6") {
  constexpr auto one = 1_uT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::micro>>::value);

  constexpr auto one_f = 1.0_uT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::micro>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _mT THEN result is a "
          "magnetic_field type AND ratio 1 to 1000") {
  constexpr auto one = 1_mT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::milli>>::value);

  constexpr auto one_f = 1.0_mT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::milli>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _T THEN result is a "
          "magnetic_field type AND ratio 1 to 1") {
  constexpr auto one = 1_T;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::ratio<1>>>::value);

  constexpr auto one_f = 1.0_T;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f), const SI::magnetic_field_t<
                                        long double, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _kT THEN result is a "
          "magnetic_field type AND ratio 1000 to 1") {
  constexpr auto one = 1_kT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::kilo>>::value);

  constexpr auto one_f = 1.0_kT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::kilo>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _MT THEN result is a "
          "magnetic_field type AND ratio 10^6 to 1") {
  constexpr auto one = 1_MT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::mega>>::value);

  constexpr auto one_f = 1.0_MT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::mega>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _GT THEN result is a "
          "magnetic_field type AND ratio 10^9 to 1") {
  constexpr auto one = 1_GT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::giga>>::value);

  constexpr auto one_f = 1.0_GT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::giga>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _TT THEN result is a "
          "magnetic_field type AND ratio 10^12 to 1") {
  constexpr auto one = 1_TT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::tera>>::value);

  constexpr auto one_f = 1.0_TT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::tera>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _PT THEN result is a "
          "magnetic_field type AND ratio 10^15 to 1") {
  constexpr auto one = 1_PT;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::magnetic_field_t<int64_t, std::peta>>::value);

  constexpr auto one_f = 1.0_PT;
  STATIC_REQUIRE(
      std::is_same<decltype(one_f),
                   const SI::magnetic_field_t<long double, std::peta>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a magnetic_flux value WHEN divided by an area value THEN "
    "result is a magnetic_field value",
    "[magnetic_field][operator/]", int64_t, long double) {
  constexpr SI::magnetic_flux_t<TestType, std::ratio<1>> magnetic_flux{1};
  constexpr SI::area_t<TestType, std::ratio<1>> area{1};

  constexpr auto result = magnetic_flux / area;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::magnetic_field_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a magnetic_field value WHEN multiplied by an area value "
    "THEN result is a magnetic_flux value",
    "[magnetic_field][operator*]", int64_t, long double) {
  constexpr SI::magnetic_field_t<TestType, std::ratio<1>> magnetic_field{1};
  constexpr SI::area_t<TestType, std::ratio<1>> area{1};

  constexpr auto result = magnetic_field * area;
  constexpr auto result_commutative = area * magnetic_field;

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::magnetic_flux_t<TestType, std::ratio<1>>>::value);
}

TEMPLATE_TEST_CASE(
    "GIVEN a magnetic_flux value WHEN divided by a magnetic_field value THEN "
    "result is an area value",
    "[magnetic_flux][operator/]", int64_t, long double) {
  constexpr SI::magnetic_flux_t<TestType, std::ratio<1>> magnetic_flux{1};
  constexpr SI::magnetic_field_t<TestType, std::ratio<1>> magnetic_field{1};

  constexpr auto result = magnetic_flux / magnetic_field;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::area_t<TestType, std::ratio<1>>>::value);
}

TEST_CASE("GIVEN a 1 atto Tesla WHEN passed to a streaming operator THEN "
          "result is '1aT'") {
  constexpr auto value = 1_aT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 aT");
}

TEST_CASE("GIVEN a 1 femto Tesla WHEN passed to a streaming operator THEN "
          "result is '1fT'") {
  constexpr auto value = 1_fT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fT");
}

TEST_CASE("GIVEN a 1 pico Tesla WHEN passed to a streaming operator THEN "
          "result is '1pT'") {
  constexpr auto value = 1_pT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pT");
}

TEST_CASE("GIVEN a 1 nano Tesla WHEN passed to a streaming operator THEN "
          "result is '1pT'") {
  constexpr auto value = 1_nT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nT");
}

TEST_CASE("GIVEN a 1 micro Tesla WHEN passed to a streaming operator THEN "
          "result is '1uT'") {
  constexpr auto value = 1_uT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 uT");
}

TEST_CASE("GIVEN a 1 milli Tesla WHEN passed to a streaming operator THEN "
          "result is '1mT'") {
  constexpr auto value = 1_mT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mT");
}

TEST_CASE("GIVEN a 1 Tesla WHEN passed to a streaming operator THEN result is "
          "'1T'") {
  constexpr auto value = 1_T;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 T");
}

TEST_CASE("GIVEN a 1 kilo Tesla WHEN passed to a streaming operator THEN "
          "result is '1kT'") {
  constexpr auto value = 1_kT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 kT");
}

TEST_CASE("GIVEN a 1 mega Tesla WHEN passed to a streaming operator THEN "
          "result is '1MT'") {
  constexpr auto value = 1_MT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 MT");
}

TEST_CASE("GIVEN a 1 giga Tesla WHEN passed to a streaming operator THEN "
          "result is '1GT'") {
  constexpr auto value = 1_GT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 GT");
}

TEST_CASE("GIVEN a 1 tera Tesla WHEN passed to a streaming operator THEN "
          "result is '1TT'") {
  constexpr auto value = 1_TT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 TT");
}

TEST_CASE("GIVEN a 1 exa Tesla WHEN passed to a streaming operator THEN "
          "result is '1ET'") {
  constexpr auto value = 1_ET;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 ET");
}

TEST_CASE("GIVEN a 1 peta Tesla WHEN passed to a streaming operator THEN "
          "result is '1PT'") {
  constexpr auto value = 1_PT;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 PT");
}

TEST_CASE("GIVEN a string of '1aT' WHEN streamed into atto_tesla_t THEN result "
          "is a value of 1 atto_tesla_t AND stream is good") {
  std::stringstream ss;
  ss << "1aT";
  SI::atto_tesla_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_aT);
}

TEST_CASE(
    "GIVEN a string of '1fT' WHEN streamed into femto_tesla_t THEN result "
    "is a value of 1 femto_tesla_t AND stream is good") {
  std::stringstream ss;
  ss << "1fT";
  SI::femto_tesla_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_fT);
}

TEST_CASE("GIVEN a string of '1pT' WHEN streamed into pico_tesla_t THEN result "
          "is a value of 1 pico_tesla_t AND stream is good") {
  std::stringstream ss;
  ss << "1pT";
  SI::pico_tesla_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_pT);
}

TEST_CASE("GIVEN a string of '1nT' WHEN streamed into nano_tesla_t THEN result "
          "is a value of 1 nano_tesla_t AND stream is good") {
  std::stringstream ss;
  ss << "1nT";
  SI::nano_tesla_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_nT);
}

TEST_CASE(
    "GIVEN a string of '1uT' WHEN streamed into micro_tesla_t THEN result "
    "is a value of 1 micro_tesla_t AND stream is good") {
  std::stringstream ss;
  ss << "1uT";
  SI::micro_tesla_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_uT);
}

TEST_CASE(
    "GIVEN a string of '1mT' WHEN streamed into milli_tesla_t THEN result "
    "is a value of 1 milli_tesla_t AND stream is good") {
  std::stringstream ss;
  ss << "1mT";
  SI::milli_tesla_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_mT);
}

TEST_CASE("GIVEN a string of '1T' WHEN streamed into tesla_t THEN result "
          "is a value of 1 tesla_t AND stream is good") {
  std::stringstream ss;
  ss << "1T";
  SI::tesla_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_T);
}

TEST_CASE("GIVEN a string of '1kT' WHEN streamed into kilo_tesla_t THEN result "
          "is a value of 1 kilo_tesla_t AND stream is good") {
  std::stringstream ss;
  ss << "1kT";
  SI::kilo_tesla_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_kT);
}

TEST_CASE("GIVEN a string of '1MT' WHEN streamed into mega_tesla_t THEN result "
          "is a value of 1 mega_tesla_t AND stream is good") {
  std::stringstream ss;
  ss << "1MT";
  SI::mega_tesla_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_MT);
}

TEST_CASE("GIVEN a string of '1GT' WHEN streamed into giga_tesla_t THEN result "
          "is a value of 1 giga_tesla_t AND stream is good") {
  std::stringstream ss;
  ss << "1GT";
  SI::giga_tesla_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_GT);
}

TEST_CASE("GIVEN a string of '1TT' WHEN streamed into tera_tesla_t THEN result "
          "is a value of 1 tera_tesla_t AND stream is good") {
  std::stringstream ss;
  ss << "1TT";
  SI::tera_tesla_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_TT);
}

TEST_CASE("GIVEN a string of '1PT' WHEN streamed into peta_tesla_t THEN result "
          "is a value of 1 peta_tesla_t AND stream is good") {
  std::stringstream ss;
  ss << "1PT";
  SI::peta_tesla_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_PT);
}

TEST_CASE("GIVEN a string of '1ET' WHEN streamed into exa_tesla_t THEN result "
          "is a value of 1 exa_tesla_t AND stream is good") {
  std::stringstream ss;
  ss << "1ET";
  SI::exa_tesla_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_ET);
}
