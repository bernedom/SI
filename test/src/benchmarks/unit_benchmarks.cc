#include <catch2/catch.hpp>

#include <SI/detail/unit.h>

using namespace SI::detail;

TEST_CASE("Unit_assignment") {
  BENCHMARK("Same Unit assignment") {
    constexpr unit_t<'X', 1, int64_t, std::ratio<1>> v1{123};
    unit_t<'X', 1, int64_t, std::ratio<1>> v2{0};
    v2 = v1;
  };
  BENCHMARK("Same Unit different ratio assignment") {
    constexpr unit_t<'X', 1, int64_t, std::ratio<1>> v1{123};
    unit_t<'X', 1, int64_t, std::milli> v2{2000};
    v2 = v1;
  };
}