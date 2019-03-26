<img align="right" src="SI-logo.jpg">

[![Build Status](https://travis-ci.com/bernedom/SI.svg?branch=master)](https://travis-ci.com/bernedom/SI)


# SI
A header only c++ library that uses user defined literals to help with SI-unit conversion at compile time.

A quick example: 
```cpp
  #include <SI/mass.h>
  #include <SI/electric_charge.h>

  using SI::literals;

  constexpr auto one_kilogramm = 1_kg;
  constexpr auto ten_coulomb = 5.0_A * 2.0_s;
  constexpr auto half_an_ampere = ten_coulomb / 20.0_s;

  void calculate_mass(const SI::kilo_gram_t<long double>& kg) { 
    ...
  }
```

The goal is to provide as many conversions and arithmetic operations with values of any of the [International System of Units](https://en.wikipedia.org/wiki/International_System_of_Units) as possible with strong type safety at compile time. 

This is a learning project to figure out modern C++ user defined literals and probably some template and type-traits magic as well. 

## State of implentation

### SI Base units

For each Unit the available literals are the implemented ratios prefixed with an underscore. i.e. `_mm`. `_km`. Generally the ratios follow [metric prefixes of the internation system of units](https://en.wikipedia.org/wiki/Metric_prefix)
The typedefs are prefixed (or in rare cases interfixed) with the standard metrix prefixes. i.e. `meter_t, milli_meter_t, kilo_meter_t`. The prefix or interfix is marked with an `*` in the tables below. 

| Unit                        | Dimension Symbol | Unit Symbol | implemented ratios                                  | unit typedefs                                |
| --------------------------- | ---------------- | ----------- | --------------------------------------------------- | -------------------------------------------- |
| Length                      | L                | m           | 10<sup>-18</sup> to 10<sup>18</sup>                 | `*_meter_t`                                  |
| Time                        | T                | s           | 10<sup>-18</sup> to 10<sup>0</sup> and 60/1, 3600/1 | `*_seconds_t, minutes_t, hours_t, minutes_t` |
| Mass*                       | M                | kg          | 10<sup>-15</sup> to 10<sup>3</sup>                  | `*_gram_t `, `ton_t`                         |
| Electric current            | I                | A           | 10<sup>-18</sup> to 10<sup>18</sup>                 | `*_ampere_t`                                 |
| Thermodynamic temperature** | t                | K           | 10<sup>-18</sup> to 10<sup>18</sup>                 | `*_kelvin_t`                                 |
| Amount of substance         | N                | mol         | 10<sup>-18</sup> to 10<sup>18</sup>                 | `*_mol_t`                                    |
| Luminous Intensity          | J                | cd          | 10<sup>-18</sup> to 10<sup>18</sup>                 | `*_candela_t`                                |

\* for mass the base ratio is `kg` (not `g`) as it is defined in the SI unit table. So there is a mismatch between the literal prefix and the internal representation.

\** The dimension symbol for thermodynamic temperature should be `Θ (Theta)` but the current implementation does not allow for non-ASCII symbols or multi-char symbols

#### Special Units

| Unit   | Dimension Symbol | Exponent | Unit Symbol | implemented ratios | unit typedefs      |
| ------ | ---------------- | -------- | ----------- | ------------------ | ------------------ |
| Area   | L                | 2        | m2          | mm2, cm2, m2       | `square_*_meter_t` |
| Volume | L                | 3        | m3          | mm3, cm3, m3       | `cubic_*_meter_t`  |


### Derived units

Only implemented ones are listed. All units that can be built from other units are also decayable to the respective units by inversing the mathematical operation. I.e if `Q = I * T` then `Q / I = T` and `Q / T = I`

| Unit            | Dimension Symbol | Unit Symbol    | builable from | implemented literals | unit typedefs |
| --------------- | ---------------- | -------------- | ------------- | -------------------- | ------------- |
| Electric charge | Q                | C              | I * T         | mC, C, kC, MC        | `*_coulomb_t` |
| Velocity        | v                | m/s            | L / T         | none                 | none          |
| Acceleration    | a                | m/s^2          | v / T         | none                 | none          |
| Force           | F                | N (kg * m/s^2) | M * a         | N, mN, kN            | `*_newton_t`  |


# Building & compatibility

SI is a header only libary that uses C++17 features. Building is tested using cmake > 3.5 and verified for g++7, g++8, clang5, clang6, clang7, msvc 19, and AppleClang 10.0


to build use 
```
mkdir build
cd build
cmake ..
cmake --build . --config Debug
```

substitute `--config Debug` with `--config Release` for optimized builds

## Building the tests

The tests use [Catch2](https://github.com/catchorg/Catch2) version 2.5 which relies on libstdc++8
 
For ubuntu releases < 18.04 use:
```
sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt update
sudo apt install libstdc++-8-dev
```

## A word on testing 

I'm using a more or less strict TDD for implementing the functionality. First to check wheter the code actually does what I want it to do, but also as a way to set examples how this is used. The nice benefit of it being, that I'm dogfooding the library to myself while developing. I'm using [Catch2](https://github.com/catchorg/Catch2) as a unit-testing framework, however since the goal is to be able to do as much as possible during compile time most of the tests are performed with Catch2 `STATIC_REQUIRES` which contatain `static_asserts` and run-time `REQUIRE`s as . 

This means if the tests compile then the tests are correct. To compile only with runtime check pass `-DCATCH_CONFIG_RUNTIME_STATIC_REQUIRE` to the compilers. 

## note to self: how to run lcov

run in `build` folder

```
cmake -D CMAKE_CXX_FLAGS="--coverage -fprofile-arcs -ftest-coverage -fno-inline -fno-inline-small-functions -fno-default-inline -g -O0" ..
make -j$(nproc)
./test/SI_Tests
lcov --directory . --capture --output-file coverage.info
lcov --remove coverage.info '/usr/*' --output-file coverage_cleaned.info
genhtml -o out.html coverage_cleaned.info
```