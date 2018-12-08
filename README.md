[![Build Status](https://travis-ci.com/bernedom/SI.svg?branch=master)](https://travis-ci.com/bernedom/SI)


# SI
A header only c++ library that uses user defined literals to help with SI-unit conversion at compile time. 

This is a learning project to figure out modern C++ user defined literals and probably some template and type-traits magic as well. 

The goal is to provide as many conversions and arithmetic operations with values of any of the [International System of Units](https://en.wikipedia.org/wiki/International_System_of_Units) as possible with strong type safety already during compile time. 

## how to run lcov


run in `build` folder

`cmake -D CMAKE_CXX_FLAGS="--coverage -fprofile-arcs -ftest-coverage -fno-inline -fno-inline-small-functions -fno-default-inline -g -O0" ..`
`make -j$(nproc)`
`./test/SI_Tests`
`lcov --directory . --capture --output-file coverage.info`
`lcov --remove coverage.info '/usr/*' --output-file coverage_cleaned.info`
`genhtml -o out.html coverage_cleaned.info`