<img align="right" src="SI-logo.jpg">

[![Build Status](https://travis-ci.com/bernedom/SI.svg?branch=master)](https://travis-ci.com/bernedom/SI)
[![GitHub Releases](https://img.shields.io/github/release/bernedom/SI.svg)](https://github.com/bernedom/SI/releases)
[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/bernedom/SI/master/LICENSE)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/ec7f65662b91480a9968bd77bd32c66c)](https://www.codacy.com/app/bernedom/SI?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=bernedom/SI&amp;utm_campaign=Badge_Grade)
[![Language grade: C/C++](https://img.shields.io/lgtm/grade/cpp/g/bernedom/SI.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/bernedom/SI/context:cpp)

# SI - Type safety for physical units
A header only c++ library that provides type safety and user defined literals for handling pyhsical values defined in the [International System of Units](https://en.wikipedia.org/wiki/International_System_of_Units).

An illustrative example: 
```cpp
#include <SI/electric_charge.h>
#include <SI/mass.h>

using namespace SI::literals;

constexpr auto one_kilogramm = 1.0_kg;
constexpr auto ten_coulomb = 5.0_A * 2.0_s;
constexpr auto half_an_ampere = ten_coulomb / 20.0_s;

void calculate_mass(const SI::kilo_gram_t<long double> &kg) {
  // do something meaningful here
}

int main(int, char **) {
  calculate_mass(one_kilogramm);
  return 0;
}
```

SI provides conversions and arithmetic operations with values of any of the [International System of Units](https://en.wikipedia.org/wiki/International_System_of_Units) with strong **type safety at compile time**. All units are special typedefs of the templated struct `SI::unit_t`. Only the value of the unit is stored internally, the ratio (i.e. milli, micro, kilo...) is determined as a type trait to allow all units to have the same resolution across the whole implemented ratios. SI handles operations of units of the same ratios as well as when the ratios are different. Operations of between units of the same ratio are overhead-free, else there is additional computation cost to adjust the values to the units.

It is possible to supply custom ratios to the  built-in types and they are fully compatible for calculation with other units. However the necessary literals or typedefs have to be supplied by the user. For instance  `SI::velocity_t<double, std::ratio<1000, 36>>` would be "kilo meter per one-hundreth-of-an-hour".

## SI Base units

For each Unit the available literals are the implemented ratios prefixed with an underscore. i.e. `_mm`. `_km`. Generally the ratios follow [metric prefixes of the internation system of units](https://en.wikipedia.org/wiki/Metric_prefix)
The typedefs are prefixed (or in rare cases interfixed) with the standard metric prefixes. i.e. `meter_t, milli_meter_t, kilo_meter_t`. The prefix or interfix is marked with an `*` in the tables below. 

| Unit                        | Dimension Symbol | Unit Symbol | implemented ratios                                  | unit typedefs                     |
| --------------------------- | ---------------- | ----------- | --------------------------------------------------- | --------------------------------- |
| Length                      | L                | m           | 10<sup>-18</sup> to 10<sup>18</sup>                 | `*_meter_t`                       |
| Time                        | T                | s           | 10<sup>-18</sup> to 10<sup>0</sup> and 60/1, 3600/1 | `*_seconds_t, minutes_t, hours_t` |
| Mass*                       | M                | kg          | 10<sup>-15</sup> to 10<sup>3</sup>                  | `*_gram_t `, `ton_t`              |
| Electric current            | I                | A           | 10<sup>-18</sup> to 10<sup>18</sup>                 | `*_ampere_t`                      |
| Thermodynamic temperature** | t                | K           | 10<sup>-18</sup> to 10<sup>18</sup>                 | `*_kelvin_t`                      |
| Amount of substance         | N                | mol         | 10<sup>-18</sup> to 10<sup>18</sup>                 | `*_mol_t`                         |
| Luminousity                 | J                | cd          | 10<sup>-18</sup> to 10<sup>18</sup>                 | `*_candela_t`                     |

\* for mass the base ratio is `kg` (not `g`) as it is defined in the SI unit table. So there is a mismatch between the literal prefix and the internal representation.

\** The dimension symbol for thermodynamic temperature should be `Θ (Theta)` but the current implementation does not allow for non-ASCII symbols or multi-char symbols

### Special Units

| Unit         | Dimension Symbol | Exponent | Unit Symbol | implemented ratios                  | unit typedefs      |
| ------------ | ---------------- | -------- | ----------- | ----------------------------------- | ------------------ |
| Area         | L                | 2        | m2          | 10<sup>-18</sup> to 10<sup>18</sup> | `square_*_meter_t` |
| Volume       | L                | 3        | m3          | 10<sup>-18</sup> to 10<sup>18</sup> | `cubic_*_meter_t`  |
| Frequency    | T                | -1       | Hz          | 10<sup>-18</sup> to 10<sup>18</sup> | `*_hertz_t`        |
| Angle*       | r                | 1        | rad         | 10<sup>-18</sup> to 1               | `*_radiant_t`      |
| Solid Angle* | R                | 1        | sr          | 10<sup>-18</sup> to 1               | `*_sterradiant_t`  |

\* Angle and solid angle are simple containers, not containing any functionality to do angle/room-angle computation such as an overflow after 2*pi.

## Derived units with special names

All units that can be built from other units are also decayable to the respective units by inversing the mathematical operation. I.e if `Q = I * T` then `Q / I = T` and `Q / T = I`

| Unit                 | Dimension Symbol | Unit Symbol | builable from    | implemented literals | unit typedefs   |
| -------------------- | ---------------- | ----------- | ---------------- | -------------------- | --------------- |
| Velocity             | v                | m/s         | L / T            | none                 | none            |
| Acceleration         | a                | m/s^2       | v / T            | none                 | none            |
| Electric charge      | Q                | C           | I \* T           | aC to EC             | `*_coulomb_t`   |
| Electric potential   | U                | V           | P / I, E/Q       | aV to EV             | `*_volt_t`      |
| Electric resistance  | O*               | Ohm (Ω)     | U / I            | aOhm to EOhm         | `*_ohm_t`       |
| Electric conductance | G                | S           | I / U            | aS to ES             | `*_siemens_t`   |
| Electric capacity    | C                | F           | Q / U            | aF to EF             | `*_farad_t`     |
| Force                | F                | N           | M \* a           | aN to EN             | `*_newton_t`    |
| Pressure             | p                | pa          | F / L^2          | apa to Epa           | `*_pascal_t`    |
| Energy               | E                | J           | F \* L, p \* L^3 | aJ to EJ             | `*_joule_t`     |
| Power                | P                | W           | E/T              | aW to EW             | `*_watt_t`      |
| Magnetic Flux        | f*               | Wb          | U \* T           | aWb to EWb           | `*_weber_t`     |
| Magnetic Field       | B                | T           | f/L^2            | aT to ET             | `*_tesla_t`     |
| Inductance           | l                | H           | f / I            | aH to EH             | `*_henry_t`     |
| Luminous flux        | m**              | lm          | J \* R           | alm to Elm           | `*_lumen_t`     |
| Illuminance          | i*               | lx          | m / a            | alx to Elx           | `*_lux_t`       |
| Radioactivity        | A                | Bq          |                  | aBq to EBq           | `*_becquerel_t` |
| Absorbed Dose        | D                | Gy          |                  | aGy to EGy           | `*_gray_t`      |
| Equivalent Dose      | H                | Sv          |                  | aSv to ESv           | `*_sievert_t`   |
| Catalytic activity   | K                | kat         | N / T            | akat to Ekat         | `*_katal_t`     |

\* These dimensions do not yet have the correct symbols, because the current implementation does not allow for non-ASCII symbols or multi-char symbols. The dimension symbol for electric resistance should be `Ω (Ohm)` and for magnetic flux `Φ (Phi)`but. Illuminace should be E<sub>b</sub>. 

\** luminous flux should be Φ<sub>v</sub> which is even more less supported than `Φ (Phi)` itself. 

## Building & compatibility

SI is a header only libary that uses **C++17** features. Building is tested using cmake > 3.5 and verified for g++7, g++8, clang5, clang6, clang7, msvc 19, and AppleClang 10.0.

to build use 
```bash
mkdir build
cd build
cmake ..
cmake --build . --config Debug -- -j $(nproc)
```

substitute `--config Debug` with `--config Release` for optimized builds

### Installing

To install SI use the commands below: this will install SI into `/usr/local/lib/cmake/SI`

```bash
mkdir build 
cd build 
cmake ..
cmake --build . --config Release --target install -- -j $(nproc)
```

Consider running the build/install command with setting the install prefix, if you do not want to install SI system wide
```
-DCMAKE_INSTALL_PREFIX:PATH=${HOME}/SI-install
```

The folder `example` contains a standalone sample program to check for succesful installation

## Building the tests

The tests use [Catch2](https://github.com/catchorg/Catch2) version 2.7 which relies on libstdc++8
 
For ubuntu releases < 18.04 use:
```bash
sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt update
sudo apt install libstdc++-8-dev
```

## A word on testing 

I'm using more or less strict TDD for implementing the functionality. First to check if the code actually does what I want it to do, but also as a way to set examples how SI is used. The nice benefit of it being, that I'm dogfooding the library to myself while developing. I'm using [Catch2](https://github.com/catchorg/Catch2) as a unit-testing framework, however since the goal is to be able to do as much as possible during compile time most of the tests are performed with Catch2 `STATIC_REQUIRES` which contatain `static_asserts` and run-time `REQUIRE`s as testing assert. 

This means if the tests compile then the tests are correct. To compile only with runtime check pass `-DCATCH_CONFIG_RUNTIME_STATIC_REQUIRE` to the compilers. 