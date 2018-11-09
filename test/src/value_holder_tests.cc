#include <catch.hpp>

#include <ratio>
#include <value_holder.h>

TEST_CASE("GIVEN two values with ratio 1 THEN value holders returns "
          "ratio<1>") {
  const value_holder_t<std::ratio<1>> v1{0};
  const value_holder_t<std::ratio<1>> v2{0};

  const auto rr = v1.ratio_to(v2);
  REQUIRE(decltype(rr)::num == 1);
  REQUIRE(decltype(rr)::den == 1);
}

TEST_CASE(
    "GIVEN two values with ratio<1,1> and <1, 1000> THEN value holders returns "
    "ratio<1, 1000>") {
  const value_holder_t<std::ratio<1>> v1{0};
  const value_holder_t<std::milli> v2{0};

  const auto rr = v1.ratio_to(v2);
  REQUIRE(decltype(rr)::num == 1);
  REQUIRE(decltype(rr)::den == 1000);
}