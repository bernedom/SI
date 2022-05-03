from conans import ConanFile, CMake
from conans.tools import load
import re
import os


class SiConan(ConanFile):

    name = "si"
    license = "MIT"
    url = "https://conan.io/center/si/"
    homepage = "https://github.com/bernedom/SI"
    description = "A header only c++ library that provides type safety and user defined literals \
         for handling physical values defined in the International System of Units."
    topics = ("physical units", "SI-unit-conversion",
              "cplusplus-library", "cplusplus-17")
    exports_sources = "include/*", "CMakeLists.txt", "test/*", "doc/CMakeLists.txt", "doc/*.md", "cmake/SIConfig.cmake.in", "LICENSE"
    no_copy_source = True
    generators = "cmake", "txt", "cmake_find_package"
    build_requires = "catch2/2.13.6"
    _cmake = None

    def _configure_cmake(self):
        if self._cmake is None:
            self._cmake = CMake(self)
            # Add additional settings with cmake.definitions["SOME_DEFINITION"] = True
            self._cmake.configure()
        return self._cmake

    def set_version(self):
        cmake = load(os.path.join(self.recipe_folder, "CMakeLists.txt"))

        version = re.search(
            r"(?:[ \t]*)(?:VERSION\s+?)(\d+\.\d+\.\d+)", cmake).group(1)
        self.version = version

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
