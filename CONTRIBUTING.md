# Contributing to SI

Contributions and suggestions to this repo are highly welcome. 

## Pull request guidelines

1.  All code has to have a corresponding test, even if it is just a minor change
2.  run `clang-format` with the llvm style for formatting 
3.  If any new units are added update the tables README.md
4.  If you're branching off from a release commit, all version numbers have to be increased. 
5.  Before merging all checks have to pass

## Building the tests

The tests use [Catch2](https://github.com/catchorg/Catch2) version 2.11. Catch is retrieved as a conan package. If conan is not found, the tests will not be built. 

For ubuntu releases < 18.04 use:

```bash
sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt update
sudo apt install libstdc++-8-dev
```

## A word on testing

I'm using more or less strict TDD for implementing the functionality. First to check if the code actually does what I want it to do, but also as a way to set examples how SI is used. The nice benefit of it being, that I'm dogfooding the library to myself while developing. I'm using [Catch2](https://github.com/catchorg/Catch2) as a unit-testing framework, however since the goal is to be able to do as much as possible during compile time most of the tests are performed with Catch2 `STATIC_REQUIRES` which contatain `static_asserts` and run-time `REQUIRE`s as testing assert.

This means if the tests compile then the tests are correct. To compile only with runtime check pass `-DCATCH_CONFIG_RUNTIME_STATIC_REQUIRE` to the compilers.
