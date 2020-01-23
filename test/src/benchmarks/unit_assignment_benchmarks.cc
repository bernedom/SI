#include <catch2/catch.hpp>

#include <SI/detail/unit.h>

using namespace SI::detail;

namespace {
using ratio_one_unit = unit_t<'X', 1, int64_t, std::ratio<1>>;
using ratio_kilo_unit = unit_t<'X', 1, int64_t, std::kilo>;
using ratio_milli_unit = unit_t<'X', 1, int64_t, std::milli>;
} // namespace

TEST_CASE("Unit_assignment") {

  SECTION("Construction") {
    BENCHMARK_ADVANCED("Default construction")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<Catch::storage_for<ratio_one_unit>> storage(meter.runs());
      meter.measure([&](int i) { storage[i].construct(); });
    };
    BENCHMARK_ADVANCED("Value initialized construction")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<Catch::storage_for<ratio_one_unit>> storage(meter.runs());
      meter.measure(
          [&](int i) { storage[i].construct(static_cast<int64_t>(i)); });
    };
    BENCHMARK_ADVANCED("copy construction same ratio")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<Catch::storage_for<ratio_one_unit>> storage(meter.runs());
      const ratio_one_unit seed{1001};
      meter.measure([&](int i) { storage[i].construct(seed); });
    };

    BENCHMARK_ADVANCED("copy construction different ratio")
    (Catch::Benchmark::Chronometer meter) {
      std::vector<Catch::storage_for<ratio_one_unit>> storage(meter.runs());
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

  // SECTION("multiply-Assignment") {
  //   BENCHMARK_ADVANCED("Raw number multiply assignment (reference)")
  //   (Catch::Benchmark::Chronometer meter) {
  //     std::vector<int64_t> source(10000);
  //     std::vector<int64_t> target(10000, 0);
  //     for (size_t i = 0; i < source.size(); ++i) {
  //       source[i] = i;
  //     }

  //     meter.measure([&] {
  //       for (size_t i = 0; i < source.size(); ++i) {
  //         target[i] *= source[i];
  //       }
  //       return target;
  //     });
  //   };
  //   BENCHMARK_ADVANCED("Same unit same ratio multiply assignment")
  //   (Catch::Benchmark::Chronometer meter) {
  //     std::vector<ratio_one_unit> source(10000);
  //     std::vector<ratio_one_unit> target(10000, 0);
  //     for (size_t i = 0; i < source.size(); ++i) {
  //       source[i] = i;
  //     }

  //     meter.measure([&] {
  //       for (size_t i = 0; i < source.size(); ++i) {
  //         target[i] *= source[i];
  //       }
  //       return target;
  //     });
  //   };
  //   BENCHMARK_ADVANCED("Same unit different ratio multiply assignment")
  //   (Catch::Benchmark::Chronometer meter) {
  //     std::vector<ratio_one_unit> source(10000);
  //     std::vector<ratio_milli_unit> target(10000, 0);
  //     for (size_t i = 0; i < source.size(); ++i) {
  //       source[i] = i;
  //     }

  //     meter.measure([&] {
  //       for (size_t i = 0; i < source.size(); ++i) {
  //         target[i] *= source[i];
  //       }
  //       return target;
  //     });
  //   };
  // }
}