#include <catch2/catch.hpp>

#include <SI/detail/unit.h>

using namespace SI::detail;

namespace {
using ratio_one_unit = unit_t<'X', 1, int64_t, std::ratio<1>>;
using ratio_kilo_unit = unit_t<'X', 1, int64_t, std::kilo>;
using ratio_milli_unit = unit_t<'X', 1, int64_t, std::milli>;
} // namespace

TEST_CASE("Unit_assignment") {

  SECTION("Assignment") {
    BENCHMARK_ADVANCED("Same unit same ratio assignment")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<ratio_one_unit> source(10000);
      std::vector<ratio_one_unit> target(10000, 0);
      for (size_t i = 0; i < source.size(); ++i) {
        source[i] = i;
      }

      meter.measure([&] {
        for (size_t i = 0; i < source.size(); ++i) {
          target[i] = source[i];
        }
        return target;
      });
    };
    BENCHMARK_ADVANCED("Same unit different ratio assignment")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<ratio_one_unit> source(10000);
      std::vector<ratio_milli_unit> target(10000, 0);
      for (size_t i = 0; i < source.size(); ++i) {
        source[i] = i;
      }

      meter.measure([&] {
        for (size_t i = 0; i < source.size(); ++i) {
          target[i] = source[i];
        }
        return target;
      });
    };
  }
}