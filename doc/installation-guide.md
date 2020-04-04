# Installing `SI`

The default installation location for SI is  `/usr/local/lib/SI`. SI can be installed using raw cmake, cpack (cmakes package mechanism), or as a conan.io package provided from [Bintray](https://bintray.com/bernedom/conan/SI%3ASI)

## Installing using cmake

To install using cmake, clone the repository and execute the following commands from within the cloned folder. 

```bash
mkdir build && cd build
cmake ..
cmake --build . --config Release --target install -- -j $(nproc)
```

Consider running the build/install command with setting the install prefix, if you do not want to install SI system wide

```bash
-DCMAKE_INSTALL_PREFIX:PATH=${HOME}/SI-install
```

The folder `test/installation-tests` contains standalone sample programs to check for succesful installation.

## Installing using `cpack`

To install using cpack, clone the repository and execute the following commands from within the cloned folder.

```bash
mkdir build && cd build
cmake ..
cmake --build . --config Release --target package -- -j $(nproc)
```

This creates gzipped archives containing all files as well as an installation script `SI-<version>-<plattform>.sh`.

```bash
cd build
mkdir ${HOME}/SI-install
./SI-1.0.1-Linux.sh --prefix=$HOME/SI-install --skip-license --exclude-subdir
```

## Installation using conan.io

As SI is not yet available on [conan-center](https://bintray.com/conan/conan-center) the current bintray repository has to be added to conan first to download SI.

```bash
conan remote add bernedom https://api.bintray.com/conan/bernedom/conan
```

In the `conanfile.txt` SI is added like this, to ensure to get the latest version. 

```
[requires]
SI/[>1.0 <2.0]@SI/stable
```

use `SI/unstable` to get the latest development builds. See the [official conan documentation](https://docs.conan.io/en/latest/integrations/build_system/cmake/cmake_generator.html) on how to integrate the package into your cmake project.

## Using as a subdirectory (not installing at all)

Although not the preferred way, SI can be included in any cmake project by putting it into a directory and including it with `add_subdirectory()`. Depending on the project setup this means that SI should not be installed on its own. Setting the option `SI_INSTALL_LIBRARY=OFF` will prevent SI from installing any files although the preferred method is using `add_subdirectory(path/to/SI ${PROJECT_BINARY_DIR}/SI-build EXCLUDE_FROM_ALL)`. 

If using as a subdirectory with `EXCLUDE_FROM_ALL` the SI testing has to be disabled by setting `SI_BUILD_TESTING=OFF` in cmake. 
