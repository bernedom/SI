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
```

This is a learning project to figure out modern C++ user defined literals and probably some template and type-traits magic as well. 

The goal is to provide as many conversions and arithmetic operations with values of any of the [International System of Units](https://en.wikipedia.org/wiki/International_System_of_Units) as possible with strong type safety already during compile time. 

## State of implentation

### SI Base units

For each Unit the available literals are the implemented ratios prefixed with an underscore. i.e. `_mm`. `_km`. Generally the ratios follow [metric prefixes of the internation system of units](https://en.wikipedia.org/wiki/Metric_prefix)

| Unit                       | Dimension Symbol | Unit Symbol | implemented ratios |
| -------------------------- | ---------------- | ----------- | ------------------ |
| Length                     | L                | m           | mm, cm, m, km      |
| Time                       | T                | s           | us, ms, s, min, h  |
| Mass                       | M                | kg          | mg, g, kg          |
| Electric current           | I                | A           | mA, A, kA, MA      |
| Thermodynamic temperature* | t                | K           | mK, K, kK          |
| Amount of substance        | N                | mol         | mmol, mol, kmol    |
| Luminous Intensity         | J                | cd          | mcd, cd, kcd       |


\* The dimension symbol for thermodynamic temperature should be `Θ (Theta)` but the current implementation does not allow for non-ASCII symbols or multi-char symbols

#### Special Units

| Unit   | Dimension Symbol | Exponent | Unit Symbol | implemented ratios |
| ------ | ---------------- | -------- | ----------- | ------------------ |
| Area   | L                | 2        | m2          | mm2, cm2, m2       |
| Volume | L                | 3        | m3          | mm3, cm3, m3       |


### Derived units

Only implemented ones are listed. All units that can be built from other units are also decayable to the respective units by inversing the mathematical operation. I.e if `Q = I * T` then `Q / I = T` and `Q / T = I`

| Unit            | Dimension Symbol | Unit Symbol    | builable from | implemented literals |
| --------------- | ---------------- | -------------- | ------------- | -------------------- |
| Electric charge | Q                | C              | I * T         | mC, C, kC, MC        |
| Velocity        | v                | m/s            | L / T         | none                 |
| Acceleration    | a                | m/s^2          | v / T         | none                 |
| Force           | F                | N (kg * m/s^2) | M * a         | N, mN, kN            |


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

I'm using a more or less strict TDD for implementing the functionality. First to check wheter the code actually does what I want it to do, but also as a way to set examples how this is used. The nice benefit of it being, that I'm dogfooding the library to myself while developing. I'm using [Catch2](https://github.com/catchorg/Catch2) as a unit-testing framework, however since the goal is to be able to do as much as possible during compile time most of the tests are performed as `static_asserts` rather than using the functionality delivered by catch2. 

Unfortunately this breaks any analysis on the code coverage using lcov, as the tests do not actually *run* any code when executed. The upside of this is that if it compiles, it passes the tests.    

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