#include <catch2/catch.hpp>

#include <SI/stream.h>
#include <SI/velocity.h>
#include <sstream>

using namespace SI;

TEST_CASE("GIVEN a value WHEN constructed with literal _c THEN result is a "
          "velocity type AND ratio is 299792458 to 1 (light speed)") {
  constexpr auto one = 1_c;
  STATIC_REQUIRE(
      std::is_same<
          decltype(one),
          const SI::velocity_t<int64_t, std::ratio<299792458, 1>>>::value);

  constexpr auto one_f = 1.0_c;
  STATIC_REQUIRE(
      std::is_same<
          decltype(one_f),
          const SI::velocity_t<long double, std::ratio<299792458, 1>>>::value);
}

TEST_CASE("GIVEN a length value in meters WHEN divided by time value in "
          "seconds THEN result is a velocity value AND ratio of result is 1") {
  constexpr auto one = 1_m / 1_s;

  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::velocity_t<int64_t, std::ratio<1>>>::value);
  STATIC_REQUIRE(std::ratio_equal<std::ratio<1>, decltype(one)::ratio>::value);

  constexpr auto one_mf = 1.0_m;
  constexpr auto one_sf = 1.0_s;
  constexpr auto one_f = one_mf / one_sf;
  STATIC_REQUIRE(
      std::ratio_equal<std::ratio<1>, decltype(one_f)::ratio>::value);
}

TEST_CASE("GIVEN a length value in km WHEN divided by a time value in h THEN "
          "result is a velocity value AND ratio of result is 1000 to 3600") {
  constexpr auto one = 1_km / 1_h;
  STATIC_REQUIRE(
      std::ratio_equal<std::ratio<1000, 3600>, decltype(one)::ratio>::value);
  STATIC_REQUIRE(one.value() == 1);
}

TEST_CASE("GIVEN a length value in km WHEN divided by a time value in seconds "
          "THEN result is a velocity value AND ratio of result is kilo") {
  constexpr auto one = 1_km / 1_s;
  STATIC_REQUIRE(
      std::is_same<decltype(one),
                   const SI::velocity_t<int64_t, std::ratio<1000, 1>>>::value);
}

TEST_CASE(
    "GIVEN a length value of 10 km WHEN divided by time value of 2 s THEN "
    "result is 5000m/s") {
  constexpr auto kms = 10_km / 2_s;
  constexpr auto ms = 10000_m / 2_s;

  STATIC_REQUIRE(kms.value() == 5);
  STATIC_REQUIRE(kms == ms);
}

TEMPLATE_TEST_CASE(
    "GIVEN velocity value WHEN multiplied with time THEN result is a "
    "length value",
    "[length][operator_tests]", int64_t, long double) {

  constexpr SI::velocity_t<TestType, std::ratio<1>> v{1};
  constexpr SI::time_t<TestType, std::ratio<1>> T{1};

  constexpr auto result = v * T;
  constexpr auto result_commutative = T * v;

  STATIC_REQUIRE(
      std::is_same<decltype(result),
                   const SI::length_t<TestType, std::ratio<1>>>::value);

  STATIC_REQUIRE(
      std::is_same<decltype(result), decltype(result_commutative)>::value);
}

TEST_CASE("GIVEN a value of 10km/h WHEN compared to a value of 80kmh THEN "
          "10km/h is smaller") {
  constexpr auto ten_kmh = 10.0_km / 1.0_h;
  constexpr auto eighty_kmh = 80.0_km / 1.0_h;

  STATIC_REQUIRE(std::is_same<decltype(ten_kmh), decltype(eighty_kmh)>::value);

  STATIC_REQUIRE(ten_kmh < eighty_kmh);
}

TEST_CASE(
    "GIVEN a value WHEN constructed with literal _km_p_h THEN result is a "
    "velocity type AND ratio 1000 to 3600") {
  constexpr auto one_kmh_literal = 1_km_p_h;
  constexpr auto one_kmh_literal_double = 1.0_km_p_h;
  constexpr auto expected_type = 1_km / 1_h;

  STATIC_REQUIRE(
      std::is_same<decltype(expected_type), decltype(one_kmh_literal)>::value);
  STATIC_REQUIRE(one_kmh_literal == expected_type);
  STATIC_REQUIRE(std::ratio_equal<decltype(one_kmh_literal)::ratio,
                                  std::ratio<1000, 3600>>::value);
  STATIC_REQUIRE(std::ratio_equal<decltype(one_kmh_literal_double)::ratio,
                                  std::ratio<1000, 3600>>::value);
  STATIC_REQUIRE(std::is_same<decltype(one_kmh_literal),
                              const SI::kilometre_per_hour_t<int64_t>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(one_kmh_literal_double),
                   const SI::kilometre_per_hour_t<long double>>::value);
}

TEST_CASE("GIVEN a value WHEN constructed with literal _m_p_h THEN result is a "
          "velocity type AND ratio 1") {
  constexpr auto one_m_ps_literal = 1_m_p_s;
  constexpr auto one_m_ps_literal_double = 1.0_m_p_s;
  constexpr auto expected_type = 1_m / 1_s;

  STATIC_REQUIRE(
      std::is_same<decltype(expected_type), decltype(one_m_ps_literal)>::value);
  STATIC_REQUIRE(one_m_ps_literal == expected_type);
  STATIC_REQUIRE(std::ratio_equal<decltype(one_m_ps_literal)::ratio,
                                  std::ratio<1>>::value);
  STATIC_REQUIRE(std::ratio_equal<decltype(one_m_ps_literal_double)::ratio,
                                  std::ratio<1>>::value);
  STATIC_REQUIRE(std::is_same<decltype(one_m_ps_literal),
                              const SI::metre_per_second_t<int64_t>>::value);
  STATIC_REQUIRE(
      std::is_same<decltype(one_m_ps_literal_double),
                   const SI::metre_per_second_t<long double>>::value);
}

TEST_CASE("GIVEN a length of type float WHEN divided by a value of type double "
          "THEN resulting type is a velocity of type float") {

  SI::metre_t<long double> a = 1.5_km;
  SI::seconds_t<float> s{1.0};
  SI::metre_per_second_t<long double> c = a / s;
  STATIC_REQUIRE(
      std::is_same<decltype(c), SI::metre_per_second_t<long double>>::value);
}

TEST_CASE(
    "GIVEN a 1 atto metre per second WHEN passed to a streaming operator THEN "
    "result is '1 am/s'") {
  constexpr velocity_t<int64_t, std::atto> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 am/s");
}

TEST_CASE(
    "GIVEN a string of '1am/s' WHEN streamed into metre_per_second_t THEN "
    "result "
    "is a value of 1 atto metre_per_second AND stream is good") {
  std::stringstream ss;
  ss << "1am/s";
  SI::velocity_t<int64_t, std::atto> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == velocity_t<int64_t, std::atto>{1});
}

TEST_CASE(
    "GIVEN a 1 femto metre per second WHEN passed to a streaming operator THEN "
    "result is '1 fm/s'") {
  constexpr velocity_t<int64_t, std::femto> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 fm/s");
}

TEST_CASE(
    "GIVEN a string of '1fm/s' WHEN streamed into metre_per_second_t THEN "
    "result "
    "is a value of 1 femto metre_per_second AND stream is good") {
  std::stringstream ss;
  ss << "1fm/s";
  SI::velocity_t<int64_t, std::femto> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == velocity_t<int64_t, std::femto>{1});
}

TEST_CASE(
    "GIVEN a 1 pico metre per second WHEN passed to a streaming operator THEN "
    "result is '1pm/s'") {
  constexpr velocity_t<int64_t, std::pico> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 pm/s");
}

TEST_CASE(
    "GIVEN a string of '1pm/s' WHEN streamed into metre_per_second_t THEN "
    "result "
    "is a value of 1 pico metre_per_second AND stream is good") {
  std::stringstream ss;
  ss << "1pm/s";
  SI::velocity_t<int64_t, std::pico> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == velocity_t<int64_t, std::pico>{1});
}

TEST_CASE(
    "GIVEN a 1 nano metre per second WHEN passed to a streaming operator THEN "
    "result is '1 nm/s'") {
  constexpr velocity_t<int64_t, std::nano> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 nm/s");
}

TEST_CASE(
    "GIVEN a string of '1nm/s' WHEN streamed into metre_per_second_t THEN "
    "result "
    "is a value of 1 nano metre_per_second AND stream is good") {
  std::stringstream ss;
  ss << "1nm/s";
  SI::velocity_t<int64_t, std::nano> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == velocity_t<int64_t, std::nano>{1});
}

TEST_CASE(
    "GIVEN a 1 micro metre per second WHEN passed to a streaming operator THEN "
    "result is '1um/s'") {
  constexpr velocity_t<int64_t, std::micro> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 um/s");
}

TEST_CASE(
    "GIVEN a string of '1um/s' WHEN streamed into metre_per_second_t THEN "
    "result "
    "is a value of 1 micro metre_per_second AND stream is good") {
  std::stringstream ss;
  ss << "1um/s";
  SI::velocity_t<int64_t, std::micro> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == velocity_t<int64_t, std::micro>{1});
}

TEST_CASE(
    "GIVEN a 1 milli metre per second WHEN passed to a streaming operator THEN "
    "result is '1mm/s'") {
  constexpr velocity_t<int64_t, std::milli> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 mm/s");
}

TEST_CASE(
    "GIVEN a string of '1mm/s' WHEN streamed into metre_per_second_t THEN "
    "result "
    "is a value of 1 milli metre_per_second AND stream is good") {
  std::stringstream ss;
  ss << "1mm/s";
  SI::velocity_t<int64_t, std::milli> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == velocity_t<int64_t, std::milli>{1});
}

TEST_CASE("GIVEN a 1 metre per second WHEN passed to a streaming operator THEN "
          "result is '1m/s'") {
  constexpr auto value = 1_m_p_s;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 m/s");
}

TEST_CASE("GIVEN a string of '1m/s' WHEN streamed into metre_per_second_t THEN "
          "result "
          "is a value of 1 metre_per_second AND stream is good") {
  std::stringstream ss;
  ss << "1m/s";
  SI::metre_per_second_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_m_p_s);
}

TEST_CASE(
    "GIVEN a 1 kilo metre per second WHEN passed to a streaming operator THEN "
    "result is '1km/s'") {
  constexpr velocity_t<int64_t, std::kilo> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 km/s");
}

TEST_CASE(
    "GIVEN a string of '1km/s' WHEN streamed into metre_per_second_t THEN "
    "result "
    "is a value of 1 kilo metre_per_second AND stream is good") {
  std::stringstream ss;
  ss << "1km/s";
  SI::velocity_t<int64_t, std::kilo> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == velocity_t<int64_t, std::kilo>{1});
}

TEST_CASE(
    "GIVEN a 1 mega metre per second WHEN passed to a streaming operator THEN "
    "result is '1Mm/s'") {
  constexpr velocity_t<int64_t, std::mega> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Mm/s");
}

TEST_CASE(
    "GIVEN a string of '1Mm/s' WHEN streamed into metre_per_second_t THEN "
    "result "
    "is a value of 1 mega metre_per_second AND stream is good") {
  std::stringstream ss;
  ss << "1Mm/s";
  SI::velocity_t<int64_t, std::mega> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == velocity_t<int64_t, std::mega>{1});
}

TEST_CASE(
    "GIVEN a 1 giga metre per second WHEN passed to a streaming operator THEN "
    "result is '1 Gm/s'") {
  constexpr velocity_t<int64_t, std::giga> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Gm/s");
}

TEST_CASE(
    "GIVEN a string of '1Gm/s' WHEN streamed into metre_per_second_t THEN "
    "result "
    "is a value of 1 giga metre_per_second AND stream is good") {
  std::stringstream ss;
  ss << "1Gm/s";
  SI::velocity_t<int64_t, std::giga> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == velocity_t<int64_t, std::giga>{1});
}

TEST_CASE(
    "GIVEN a 1 tera metre per second WHEN passed to a streaming operator THEN "
    "result is '1 Tm/s'") {
  constexpr velocity_t<int64_t, std::tera> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Tm/s");
}

TEST_CASE(
    "GIVEN a string of '1Tm/s' WHEN streamed into metre_per_second_t THEN "
    "result "
    "is a value of 1 tera metre_per_second AND stream is good") {
  std::stringstream ss;
  ss << "1Tm/s";
  SI::velocity_t<int64_t, std::tera> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == velocity_t<int64_t, std::tera>{1});
}

TEST_CASE(
    "GIVEN a 1 peta metre per second WHEN passed to a streaming operator THEN "
    "result is '1Pm/s'") {
  constexpr velocity_t<int64_t, std::peta> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Pm/s");
}

TEST_CASE(
    "GIVEN a string of '1Pm/s' WHEN streamed into metre_per_second_t THEN "
    "result "
    "is a value of 1 peta metre_per_second AND stream is good") {
  std::stringstream ss;
  ss << "1Pm/s";
  SI::velocity_t<int64_t, std::peta> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == velocity_t<int64_t, std::peta>{1});
}

TEST_CASE(
    "GIVEN a 1 exa metre per second WHEN passed to a streaming operator THEN "
    "result is '1Em/s'") {
  constexpr velocity_t<int64_t, std::exa> value{1};
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 Em/s");
}

TEST_CASE(
    "GIVEN a string of '1Em/s' WHEN streamed into metre_per_second_t THEN "
    "result "
    "is a value of 1 exa metre_per_second AND stream is good") {
  std::stringstream ss;
  ss << "1Em/s";
  SI::velocity_t<int64_t, std::exa> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == velocity_t<int64_t, std::exa>{1});
}

TEST_CASE(
    "GIVEN a 1 kilometre per hour WHEN passed to a streaming operator THEN "
    "result is '1km/h'") {
  constexpr auto value = 1_km_p_h;
  std::stringstream ss;
  ss << value;
  REQUIRE(ss.str() == SI::to_string(value));
  REQUIRE(ss.str() == "1 km/h");
}

TEST_CASE(
    "GIVEN a string of '1km/h' WHEN streamed into kilometre_per_hour_t THEN "
    "result "
    "is a value of 1 kilometre_per_hour_t AND stream is good") {
  std::stringstream ss;
  ss << "1km/h";
  SI::kilometre_per_hour_t<int64_t> value{0};
  ss >> value;
  REQUIRE(!ss.fail());
  REQUIRE(value == 1_km_p_h);
}
