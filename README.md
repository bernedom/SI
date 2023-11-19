-<img align="right" src="SI-logo.jpg">

[![Continuous Integration](https://github.com/bernedom/SI/actions/workflows/ci.yml/badge.svg?branch=main)](https://github.com/bernedom/SI/actions?query=workflow%3ACI)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/ec7f65662b91480a9968bd77bd32c66c)](https://www.codacy.com/app/bernedom/SI?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=bernedom/SI&amp;utm_campaign=Badge_Grade)
[![API Documentation](https://github.com/bernedom/SI/actions/workflows/api-doc.yml/badge.svg?branch=main)](https://si.dominikberner.ch/doc/)
[![CodeQL](https://github.com/bernedom/SI/actions/workflows/codeql.yml/badge.svg?branch=main)](https://github.com/bernedom/SI/actions?query=workflow%3ACodeQL)

[![GitHub Releases](https://img.shields.io/github/release/bernedom/SI.svg)](https://github.com/bernedom/SI/releases)
[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/bernedom/SI/main/LICENSE)

# SI - Type safety for physical units

A header only c++ library that provides type safety and user defined literals for handling physical values defined in the [International System of Units](https://en.wikipedia.org/wiki/International_System_of_Units) regulated by the [International Bureau of Weights and Measures (BIPM)](https://www.bipm.org/en/about-us/)  and published in the [SI brochure](https://www.bipm.org/en/publications/si-brochure/). For a quick start see [the installation guide](https://github.com/bernedom/SI/blob/master/doc/installation-guide.md). Contributions and comments are welcome, please check the [contribution guidelines](CONTRIBUTING.md) for further information.

An illustrative example:

```cpp
#include <SI/electric_charge.h>
#include <SI/mass.h>

using namespace SI::literals;

constexpr auto one_kilogram = 1.0_kg;
constexpr auto ten_coulomb = 5.0_A * 2.0_s;
constexpr auto half_an_ampere = ten_coulomb / 20.0_s;
constexpr auto thousand_grams = one_kilogram.as<SI::gram_t>();

void calculate_mass(const SI::kilo_gram_t<long double> &kg) {
  // do something meaningful here
}

int main(int, char **) {
  calculate_mass(one_kilogram);
  return 0;
}
```

SI provides conversions and arithmetic operations with values of any of the [International System of Units](https://en.wikipedia.org/wiki/International_System_of_Units) with strong **type safety at compile time**. All units are special typedefs of the template struct `SI::unit_t`. Only the value of the unit is stored internally, the ratio (i.e. milli, micro, kilo...) is determined as a type trait to allow all units to have the same resolution across the whole implemented ratios. SI handles operations of units of the same ratios as well as when the ratios are different. See the [documentation implementation details](doc/implementation-details.md) for further information. Operations between units of the same ratio are overhead-free, else there is an additional computation cost to adjust the values to the units. Passing the flag `SI_DISABLE_IMPLICIT_RATIO_CONVERSION` to the compiler implicit ratio conversion is not done and fails with a compiler error. See the [continuous benchmark results](https://si.dominikberner.ch/dev/bench/) for a comparison between the reference measurements and the implementation in SI. 

It is possible to supply custom ratios to the built-in types and they are fully compatible for calculation with other units. However, the necessary literals or typedefs have to be supplied by the user. For instance `SI::velocity_t<double, std::ratio<1000, 36>>` would be "kilometre per one-hundredth-of-an-hour".

Converting between units is either done with the `as<unit_t>()` member function of `unit_` or the free function `SI::unit_cast<unit_t>(unit_t u)`. This will convert a value of the same type but a different ratio. 

## SI Base units

For each unit the available literals are the implemented ratios prefixed with an underscore. i.e. `_mm`. `_km`. Generally the ratios follow [metric prefixes of the international system of units](https://en.wikipedia.org/wiki/Metric_prefix)
The typedefs are prefixed (or in rare cases interfixed) with the standard metric prefixes. i.e. `metre_t, milli_metre_t, kilo_metre_t`. The prefix or interfix is marked with an `*` in the tables below. Units that have defined typedefs and literals can be [converted to strings](doc/implementation-details.md#conversion-to-strings) using stream operators or the `SI::to_string` function. To use  the stream operators, include the header file `SI/stream.h`  

| Unit                        | Dimension Symbol | Unit Symbol | implemented ratios                                  | unit typedefs                     |
| --------------------------- | ---------------- | ----------- | --------------------------------------------------- | --------------------------------- |
| Length                      | L                | m           | 10<sup>-18</sup> to 10<sup>18</sup>                 | `*_metre_t`                       |
| Time                        | T                | s           | 10<sup>-18</sup> to 10<sup>0</sup> and 60/1, 3600/1 | `*_seconds_t, minutes_t, hours_t` |
| Mass*                       | M                | kg          | 10<sup>-15</sup> to 10<sup>18</sup>                 | `*_gram_t`, `*_ton_t`             |
| Electric current            | I                | A           | 10<sup>-18</sup> to 10<sup>18</sup>                 | `*_ampere_t`                      |
| Thermodynamic temperature** | t                | K           | 10<sup>-18</sup> to 10<sup>18</sup>                 | `*_kelvin_t`                      |
| Amount of substance         | N                | mol         | 10<sup>-18</sup> to 10<sup>18</sup>                 | `*_mol_t`                         |
| Luminosity                  | J                | cd          | 10<sup>-18</sup> to 10<sup>18</sup>                 | `*_candela_t`                     |

\* for mass the base ratio is `kg` (not `g`) as defined in the SI unit table. So there is a mismatch between the literal prefix and the internal representation.

\** The dimension symbol for thermodynamic temperature should be `Θ (Theta)`, but the current implementation does not allow for non-ASCII symbols or multi-char symbols

### Special Units

| Unit             | Dimension Symbol | Exponent | Unit Symbol | implemented ratios                  | unit typedefs      |
| ---------------- | ---------------- | -------- | ----------- | ----------------------------------- | ------------------ |
| Area             | L                | 2        | m2          | 10<sup>-18</sup> to 10<sup>18</sup> | `square_*_metre_t` |
| Volume           | L                | 3        | m3          | 10<sup>-18</sup> to 10<sup>18</sup> | `cubic_*_metre_t`  |
| Frequency        | T                | -1       | Hz          | 10<sup>-18</sup> to 10<sup>18</sup> | `*_hertz_t`        |
| Angle*           | r                | 1        | rad         | 10<sup>-18</sup> to 1               | `*_radian_t`       |
| Angle (Degrees)* | r                | 1        | deg         | micro, milli, 1                     | `*_radian_t`       |
| Solid Angle*     | R                | 1        | sr          | 10<sup>-18</sup> to 1               | `*_steradian_t`    |


\* Angle, Angle (degree) and solid angle are simple containers, not containing any functionality to do angle/solid-angle computation such as an overflow after 2*pi. Converting between radians and degree might lose precision, especially if working with `long doubles` because the ratios not precise enough, as they have to be represented as long ints

## Derived units with special names

All units that can be built from other units decay to the respective units by inverting the mathematical operation. I.e if `Q = I * T` then `Q / I = T` and `Q / T = I`

| Unit                 | Dimension Symbol | Unit Symbol | buildable from   | implemented literals    | unit typedefs                                                      |
| -------------------- | ---------------- | ----------- | ---------------- | ----------------------- | ------------------------------------------------------------------ |
| Velocity             | v                | m/s         | L / T            | `m_p_s`, `km_p_h`, `_c` | `metre_per_second_t`, `kilometre_per_second_t`, `speed_of_light_t` |
| Acceleration         | a                | m/s^2       | v / T, v^2 / L   | none                    | none                                                               |
| Electric charge      | Q                | C           | I \* T           | aC to EC                | `*_coulomb_t`                                                      |
| Electric potential   | U                | V           | P / I, E/Q       | aV to EV                | `*_volt_t`                                                         |
| Electric resistance  | O*               | Ohm (Ω)     | U / I, 1/G       | aOhm to EOhm            | `*_ohm_t`                                                          |
| Electric conductance | G                | S           | I / U, 1/R       | aS to ES                | `*_siemens_t`                                                      |
| Electric capacity    | C                | F           | Q / U            | aF to EF                | `*_farad_t`                                                        |
| Force                | F                | N           | M \* a           | aN to EN                | `*_newton_t`                                                       |
| Pressure             | p                | pa          | F / L^2          | apa to Epa              | `*_pascal_t`                                                       |
| Energy               | E                | J           | F \* L, p \* L^3 | aJ to EJ                | `*_joule_t`                                                        |
| Power                | P                | W           | E/T              | aW to EW                | `*_watt_t`                                                         |
| Magnetic Flux        | f*               | Wb          | U \* T           | aWb to EWb              | `*_weber_t`                                                        |
| Magnetic Field       | B                | T           | f/L^2            | aT to ET                | `*_tesla_t`                                                        |
| Momentum             | o*               | kg⋅m/s      | M \* v           | none                    | none                                                               |
| Inductance           | l                | H           | f / I            | aH to EH                | `*_henry_t`                                                        |
| Luminous flux        | m*               | lm          | J \* R           | alm to Elm              | `*_lumen_t`                                                        |
| Luminance            | i*               | lx          | m / a            | alx to Elx              | `*_lux_t`                                                          |
| Radioactivity        | A                | Bq          |                  | aBq to EBq              | `*_becquerel_t`                                                    |
| Absorbed Dose        | D                | Gy          |                  | aGy to EGy              | `*_gray_t`                                                         |
| Equivalent Dose      | H                | Sv          |                  | aSv to ESv              | `*_sievert_t`                                                      |
| Catalytic activity   | K                | kat         | N / T            | akat to Ekat            | `*_katal_t`                                                        |
| Surface flow         | s                | m^2/s       | L^2 / T          | none                    |                                                                    |
| Volumetric flow      | V                | m^3/s       | L^3 / T          | none                    |                                                                    |
| Angular frequency     | w*               | rad/s       | r / T            | none                    |                                                                    |


\* These dimensions do not yet have the correct symbols, because the current implementation does not allow for non-ASCII symbols or multi-char symbols. The dimension symbol for electric resistance should be `Ω (Ohm)` and for magnetic flux `Φ (Phi)`. Luminance should be E<sub>b</sub>. Angular velocity should be ω (omega). Luminous flux should be Φ<sub>v</sub> which is even less supported than `Φ (Phi)` itself.


## Non-Standard Units

Non standard units are not regulated by the [BIPM](https://www.bipm.org/) but are accepted for use with the SI standard. 

| Unit                       | Dimension Symbol | literals   | implemented ratios                                                     | unit typedefs                                                          |
| -------------------------- | ---------------- | ---------- | ---------------------------------------------------------------------- | ---------------------------------------------------------------------- |
| Astronomic Units of length | L                | AU, ly, pc | 149597870691:1 (AU), 9460730777119564:1 (ly), 30856775814913700:1 (pc) | `astronomic_unit_t` (`_AU`), `lightyear_t` (`_ly`), `parsec_t` (`_pc`) |

## Building & compatibility

SI is a header-only library that uses **C++17** features. Building is tested using cmake > 3.23 and verified for g++7, g++8, clang5, clang6, clang7, msvc 19, and AppleClang 10.0. I recommend using  **conan 2.0** to download any dependencies for testing, but can be used without it, if the tests are not built. 

SI uses CMakeDeps generator of conan to find dependencies. To install the dependencies use

```bash
conan install . --output-folder=build --build=missing --settings=build_type=Debug
```

substitute `--settings=build_type=Debug` with `--settings=build_type=Release` to switch between debug and release builds.

By using the CMAkeDeps generator, you can either build manually or use the CMake presets provided. 

```bash
cmake --preset=ci-ninja-debug
cmake --build build
```

### Installing

The default installation location for SI is  `/usr/local/lib/SI`. SI can be installed using raw cmake, cpack (cmakes package mechanism), or as a conan.io package provided from [conan center](https://conan.io/center/si/)

See [the installation guide](doc/installation-guide.md) for detailed instructions

#### Including with FetchContent

**Note:** Getting SI as a [conan package](https://conan.io/center/si) is preferred.

To install with CMake's FetchContent, add the following to your CMakeLists.txt

```cmake
include(FetchContent)

FetchContent_Declare(
  SI
  GIT_REPOSITORY https://gitlab.com/bernedom/SI.git
  # This will get the latest version
  # To pin to a specific version or hash, add the version/hash here instead
  # (e.g. 2.5.1 or 63b267211a6f256f7ba8d5a26e17138bbcf95ba8)
  GIT_TAG main
)

FetchContent_MakeAvailable(SI)

# ...

# Link the library to your target. Change this as needed!
target_link_libraries(${PROJECT_NAME} PUBLIC SI::SI)
```

## Packaging

SI is available as 'raw' download from this repository but also as [conan package](https://conan.io/center/si). Getting SI from conan-center is the preferred way.

## Implementation details

For further information and deeper technical details refer to the [implementation details document](doc/implementation-details.md)

## Breaking changes between versions 1.x.x and versions 2.x.x

Versions above 2.0.0 will not be fully compatible with older versions because of the breaking changes mentioned in the [changelog](CHANGELOG.md).
From version 2.0.0 on the conan package is named lower case `si` to conform to the conan naming convention.
