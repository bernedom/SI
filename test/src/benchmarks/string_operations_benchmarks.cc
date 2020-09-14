#include <SI/detail/unit.h>
#include <SI/stream.h>
#include <catch2/catch.hpp>

#include <sstream>

namespace SI {

// specialize unit_symbol for usage with stream operators
template <>
struct unit_symbol<'X', std::ratio<1>>
    : SI::detail::unit_symbol_impl<'x', 'x'> {};

template <typename _ratio>
struct unit_symbol<'X', _ratio>
    : SI::detail::unit_symbol_impl<SI::detail::ratio_prefix<_ratio>::value, 'x',
                                   'x'> {};

} // namespace SI

TEST_CASE("String operations") {

  SECTION("unit to string conversion") {
    BENCHMARK_ADVANCED("conversion by streams without construction")
    (Catch::Benchmark::Chronometer meter) {

      constexpr SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>>
          v{100};
      std::stringstream ss;

      meter.measure([&] {
        ss << v;
        return ss.str();
      });
    };

    BENCHMARK_ADVANCED("conversion by streams including construction")
    (Catch::Benchmark::Chronometer meter) {

      constexpr SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>>
          v{100};

      meter.measure([&] {
        std::stringstream ss;
        ss << v;
        return ss.str();
      });
    };

    BENCHMARK_ADVANCED("conversion by to_string")
    (Catch::Benchmark::Chronometer meter) {

      constexpr SI::detail::unit_t<'X', std::ratio<1>, int64_t, std::ratio<1>>
          v{100};

      meter.measure([&] { return SI::to_string(v); });
    };
  }
}
