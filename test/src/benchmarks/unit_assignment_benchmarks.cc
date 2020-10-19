#include <catch2/catch.hpp>

#include <SI/detail/unit.h>

using namespace SI::detail;

namespace {
using ratio_one_unit = unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>>;
using ratio_kilo_unit = unit_t<'X', std::ratio<1>, int64_t, std::kilo>;
using ratio_milli_unit = unit_t<'X', std::ratio<1>, int64_t, std::milli>;
} // namespace

TEST_CASE("Unit_assignment") {

  SECTION("Construction") {
    BENCHMARK_ADVANCED("Default construction")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<Catch::Benchmark::storage_for<ratio_one_unit>> storage(
          meter.runs());
      meter.measure([&](int i) { storage[i].construct(); });
    };
    BENCHMARK_ADVANCED("Value initialized construction")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<Catch::Benchmark::storage_for<ratio_one_unit>> storage(
          meter.runs());
      meter.measure(
          [&](int i) { storage[i].construct(static_cast<int64_t>(i)); });
    };
    BENCHMARK_ADVANCED("copy construction same ratio")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<Catch::Benchmark::storage_for<ratio_one_unit>> storage(
          meter.runs());
      const ratio_one_unit seed{1001};
      meter.measure([&](int i) { storage[i].construct(seed); });
    };

    BENCHMARK_ADVANCED("copy construction different ratio")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<Catch::Benchmark::storage_for<ratio_one_unit>> storage(
          meter.runs());
      const ratio_kilo_unit seed{1};
      meter.measure([&](int i) { storage[i].construct(seed); });
    };
  }

  SECTION("Assignment") {
    BENCHMARK_ADVANCED("Raw number assignment (reference)")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<int64_t> source(10000);
      std::vector<int64_t> target(10000, 0);
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

  SECTION("Add-Assignment") {
    BENCHMARK_ADVANCED("Raw number add assignment (reference)")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<int64_t> source(10000);
      std::vector<int64_t> target(10000, 0);
      for (size_t i = 0; i < source.size(); ++i) {
        source[i] = i;
      }

      meter.measure([&] {
        for (size_t i = 0; i < source.size(); ++i) {
          target[i] += source[i];
        }
        return target;
      });
    };
    BENCHMARK_ADVANCED("Same unit same ratio add assignment")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<ratio_one_unit> source(10000);
      std::vector<ratio_one_unit> target(10000, 0);
      for (size_t i = 0; i < source.size(); ++i) {
        source[i] = i;
      }

      meter.measure([&] {
        for (size_t i = 0; i < source.size(); ++i) {
          target[i] += source[i];
        }
        return target;
      });
    };
    BENCHMARK_ADVANCED("Same unit different ratio add assignment")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<ratio_one_unit> source(10000);
      std::vector<ratio_milli_unit> target(10000, 0);
      for (size_t i = 0; i < source.size(); ++i) {
        source[i] = i;
      }

      meter.measure([&] {
        for (size_t i = 0; i < source.size(); ++i) {
          target[i] += source[i];
        }
        return target;
      });
    };
  }

  SECTION("Subtract-Assignment") {
    BENCHMARK_ADVANCED("Raw number subtract assignment (reference)")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<int64_t> source(10000);
      std::vector<int64_t> target(10000, 0);
      for (size_t i = 0; i < source.size(); ++i) {
        source[i] = i;
      }

      meter.measure([&] {
        for (size_t i = 0; i < source.size(); ++i) {
          target[i] -= source[i];
        }
        return target;
      });
    };
    BENCHMARK_ADVANCED("Same unit same ratio subtract assignment")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<ratio_one_unit> source(10000);
      std::vector<ratio_one_unit> target(10000, 0);
      for (size_t i = 0; i < source.size(); ++i) {
        source[i] = i;
      }

      meter.measure([&] {
        for (size_t i = 0; i < source.size(); ++i) {
          target[i] -= source[i];
        }
        return target;
      });
    };
    BENCHMARK_ADVANCED("Same unit different ratio subtract assignment")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<ratio_one_unit> source(10000);
      std::vector<ratio_milli_unit> target(10000, 0);
      for (size_t i = 0; i < source.size(); ++i) {
        source[i] = i;
      }

      meter.measure([&] {
        for (size_t i = 0; i < source.size(); ++i) {
          target[i] -= source[i];
        }
        return target;
      });
    };
  }

  SECTION("scalar-unit-division") {
    BENCHMARK_ADVANCED("int64_t by unit division")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<int64_t> dividend(10000);
      std::vector<ratio_kilo_unit> divisor(dividend.size());
      std::vector<unit_t<'X', std::ratio<-1>, int64_t, std::kilo>> result(
          dividend.size());
      for (size_t i = 0; i < dividend.size(); ++i) {
        dividend[i] = i + 10000;
        divisor[i] = ratio_kilo_unit(static_cast<int64_t>(i + 1));
      }

      meter.measure([&] {
        for (size_t i = 0; i < divisor.size(); ++i) {
          REQUIRE(divisor[i].value() > 0);
          result[i] = dividend[i] / divisor[i];
        }
        return result;
      });
    };
    BENCHMARK_ADVANCED("long double by unit division")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<long double> dividend(10000);
      std::vector<unit_t<'X', std::ratio<1>, long double, std::kilo>> divisor(
          10000);
      std::vector<unit_t<'X', std::ratio<-1>, long double, std::kilo>> result(
          10000);
      for (size_t i = 0; i < dividend.size(); ++i) {
        dividend[i] = static_cast<long double>(i + 10000);
        divisor[i] = unit_t<'X', std::ratio<1>, long double, std::kilo>{
            static_cast<long double>(i + 1)};
      }

      meter.measure([&] {
        for (size_t i = 0; i < divisor.size(); ++i) {
          result[i] = dividend[i] / divisor[i];
        }
        return result;
      });
    };
  }
}
