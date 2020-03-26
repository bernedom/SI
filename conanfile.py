from conans import ConanFile, CMake


class SiConan(ConanFile):
    name = "SI"
    version = "1.6.1"
    license = "MIT"
    author = "Dominik Berner <dominik.berner+SI-conan@gmail.com"
    url = "https://github.com/bernedom/SI"
    description = "A header only c++ library that provides type safety and user defined literals \
         for handling pyhsical values defined in the International System of Units."
    topics = ("physical units", "SI-unit-conversion",
              "cplusplus-library", "cplusplus-17")
    exports_sources = "include/*", "CMakeLists.txt", "test/*", "cmake/SIConfig.cmake.in", "LICENSE"
    no_copy_source = True
    generators = "cmake", "txt", "cmake_find_package"
    build_requires = "Catch2/2.11.1@catchorg/stable"

    def _configure_cmake(self):
        cmake = CMake(self)
        # Add additional settings with cmake.definitions["SOME_DEFINITION"] = True
        cmake.configure()
        return cmake

    def build(self):
        cmake = self._configure_cmake()
        cmake.build()

    def test(self):
        cmake = self._configure_cmake()
        cmake.test()

    def package(self):
        cmake = self._configure_cmake()
        cmake.install()

    def package_id(self):
        self.info.header_only()
