# Contributing to SI

Contributions and suggestions to this repo are highly welcome. For deeper technical information read the [implementatation details document](doc/implementation-details.md) first.

## Pull request guidelines

1.  All code has to have a corresponding test, even if it is just a minor change
2.  run `clang-format` with the llvm style for formatting 
3.  If any new units are added update the tables [README.md](README.md)
4.  Describe your changes in [CHANGELOG.md](CHANGELOG.md)
5.  If you're branching off from a release commit, all version numbers have to be increased. Run `./test/version-consistency.sh` to check. 
6.  Before merging all checks have to pass

## Building the tests

The tests use [Catch2](https://github.com/catchorg/Catch2) version 2.16. Catch is retrieved as a conan package if possible, else any system install will be used. **If catch2 is not found, the tests will not be built**. 

For ubuntu releases < 18.04 use:

```bash
sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt update
sudo apt install libstdc++-8-dev
```

## A word on testing

I'm using more or less strict TDD for implementing the functionality. First to check if the code really does what I want it to do, but also as a way to set examples how SI is used. The nice benefit of it is, that I'm dogfooding the library to myself while developing. I'm using [Catch2](https://github.com/catchorg/Catch2) as a unit-testing framework, since the goal is to be able to do as much as possible during compile time most of the tests are performed with Catch2 `STATIC_REQUIRES` which contain `static_asserts` and run-time `REQUIRE`s as testing assert.

This means if the tests compile then the tests are correct. To compile only with runtime check pass `-DCATCH_CONFIG_RUNTIME_STATIC_REQUIRE` to the compilers.
