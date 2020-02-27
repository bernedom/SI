# Changelog 

## 1.5.1

*   Added `SI::to_string()` function to avoid using streams
*   Update to Catch2 v2.11.1 for testing

## 1.5.0

*   Bugfix: Operators < and > where comparing the wrong way round (this is embarassing)
*   Added Operators <= and =>
*   Installation tests for OSX and Windows
*   Renamed SI/detail/string.h to unit_symbol.h because of resolution-problems in osx/xcode

## 1.4.1

*   Added micro-benchmarks for operations on `unit_t`
*   Pulling catch2 for testing with conan is only done if testing is enabled
*   Removed defaults for template parameters for `==` and `!=`

## 1.4.0

*   Rule of five: assignment and construction for units with different ratios
*   Retrieving Catch2 with conan to avoid having it in the repo (This no effect on using SI) 

## 1.3.1

*   Put version number in file comments (and testing for it)
*   Overall linting

## 1.3.0

*   Streaming operators for all dimension symbols
*   Bugfix: Fixed dimension symbol clash between absorbed dose and equivalent dose 
*   Bugfix: Fixed dimension symbol clash between length and inductance

## 1.2.1

*   Added operators +=, *=, /=, -= (Thanks to [Kicer96](https://github.com/Kicer86) for the initial work)
*   Added momentum (Thanks to [Kicer96](https://github.com/Kicer86))
*   Added packaging information for conan.io and deployment to bintray

## 1.2.0

*   Changed spelling of length unit from 'meter' to 'metre' as this is the official SI spelling according to the [bureau international des Poids and Mesures](https://www.bipm.org/en/measurement-units/)
*   added `SI_` prefix to preprocessor flag to disable ratio conversion to `SI_DISABLE_IMPLICIT_RATIO_CONVERSION` to scope it closer
*   Renamed template parameters to fit with c++ naming convention ([See this stackoverflow thread](https://stackoverflow.com/questions/228783/what-are-the-rules-about-using-an-underscore-in-a-c-identifier))

## 1.1.1

*   Unified usage of template arugments in unit_t
*   electric conductance can be built from 1/Ohm (including all ratios)
*   electric resistance can be built from 1/S (including all ratios)

## 1.1.0

*   Implicit / automatic conversions between units of different ratio can be disabled with the preprocessor flag `DISABLE_IMPLICIT_RATIO_CONVERSION`
*   Fixed division of units with same exponent so it considers ratio
*   Bugfix in division of units with different exponent and different ratios
*   Multiplying units with different ratios results in mutiplied ratios instead of gcd of ratios squared
*   Added division of units by a scalar

## 1.0.1

*   cmake requires version 3.12 to support add_executable without sources and verbose project description
*   all headers are prefixed with a license tag
*   Added support for cpack (see README for usage)

## 1.0.0

*   Literal operators return explicit return types instead of auto
*   Removed indirection for overflow check when parsing ints
*   Fixed typo of luminosity unit from candea -> candela

## 0.0.5

*   Updated catch2 to version 2.7.2
*   Added angle (radiant) and solid angle (sterradiant) typedefs
*   luminous flux can be built from luminosity *   solid_angle

## 0.0.4 

*   Added CHANGELOG.md
*   Fixed bug in number parser, magnitude of a numbrer is correctly counted even if a digit separator is present

## 0.0.3

*   template specialization to differentiate scalar/unit for floating point and integral values
*   Ran linter, minor cosmetical changes

## 0.0.2

*   all cmake files use the same versions
*   SI can be used with `add_subdirectory` thanks to cmake alias
*   compiler flags are set using generator expressions

## 0.0.1

Initial relase, containig the base operators and template classes as well as typedefs the base units and named derived units of the  [International System of Units](https://en.wikipedia.org/wiki/International_System_of_Units)
