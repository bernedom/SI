[![Build Status](https://travis-ci.com/bernedom/SI.svg?branch=master)](https://travis-ci.com/bernedom/SI)


# SI
A header only c++ library that uses user defined literals to help with SI-unit conversion at compile time. 

This is a learning project to figure out modern C++ user defined literals and probably some template and type-traits magic as well. 

The goal is to provide as many conversions and arithmetic operations with values of any of the [International System of Units](https://en.wikipedia.org/wiki/International_System_of_Units) as possible with strong type safety already during compile time. 

## State of implentation

### SI Base units

| Unit                      | Dimension Symbol | Unit Symbol | implemented ratios |
| ------------------------- | ---------------- | ----------- | ------------------ |
| Length                    | L                | m           | mm, cm, m, km      |
| Time                      | T                | s           | us, ms, s, min, h  |
| Mass                      | M                | kg          | g, kg              |
| Electric current          | I                | V           | mV, V, kV          |
| Thermodynamic temperature | Θ (Rho)          | K           | Not implemented    |
| Amount of substance       | N                | mol         | Not implemented    |
| Luminous Intensity        | J                | cd          | Not implemented    |


### Derived units

Only implemented ones are listed

| Unit            | Dimension Symbol | Unit Symbol | built from | implemented ratios |
| --------------- | ---------------- | ----------- | ---------- | ------------------ |
| Electric charge | Q                | C           | I * T      | mC, C, kC          |

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