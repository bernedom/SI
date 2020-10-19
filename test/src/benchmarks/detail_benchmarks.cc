#include <catch2/catch.hpp>

#include <SI/detail/unit.h>

using namespace SI::detail;

namespace {
using ratio_one_unit = unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>>;
using ratio_kilo_unit = unit_t<'X', std::ratio<1>, int64_t, std::kilo>;
using ratio_milli_unit = unit_t<'X', std::ratio<1>, int64_t, std::milli>;
} // namespace

TEST_CASE("Detail benchmarks") {
  SECTION("Unit_cast benchmarks") {
    BENCHMARK_ADVANCED("unit_cast same ratio unit")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<ratio_milli_unit> source(10000);
      std::vector<ratio_milli_unit> target(10000, 0);

      for (size_t i = 0; i < source.size(); ++i) {
        source[i] = i;
      }

      meter.measure([&] {
        for (size_t i = 0; i < source.size(); ++i) {
          target[i] = unit_cast<ratio_milli_unit>(source[i]);
        }
        return target;
      });
    };
    BENCHMARK_ADVANCED("unit_cast different ratio unit")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<ratio_kilo_unit> source(10000);
      std::vector<ratio_one_unit> target(10000, 0);

      for (size_t i = 0; i < source.size(); ++i) {
        source[i] = i;
      }

      meter.measure([&] {
        for (size_t i = 0; i < source.size(); ++i) {
          target[i] = unit_cast<ratio_one_unit>(source[i]);
        }
        return target;
      });
    };
  }
}
