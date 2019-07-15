#!/bin/bash
# file: test/compilation-tests.sh

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
ROOT_DIR=$(realpath ${SCRIPT_DIR}/../)


setUp(){
    SI_BUILD_DIR=$(mktemp -d)
    INSTALL_PATH=$(mktemp -d)
    BUILD_DIR=$(mktemp -d)
}

tearDown(){
    if [ -d ${SI_BUILD_DIR} ]; then
        rm -rf ${SI_BUILD_DIR}
    fi
    
    if [ -d ${INSTALL_PATH} ]; then
        rm -rf ${INSTALL_PATH}
    fi
    
    if [ -d ${BUILD_DIR} ]; then
        rm -rf ${BUILD_DIR}
    fi
}

testPureCmakeInstallation(){
    # install SI
    cmake ${ROOT_DIR} -B${SI_BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DBUILD_TESTING=off -G Ninja
    cmake --build ${SI_BUILD_DIR} --config Release --target install
    assertEquals "Installation build successful" 0 $?
    cmake ${ROOT_DIR}/example -B${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -G Ninja
    cmake --build ${BUILD_DIR}
    assertEquals "build against installation successful" 0 $?
    
}


testCpackInstallation(){
    # install SI
    cmake ${ROOT_DIR} -B${SI_BUILD_DIR} -DCPACK_PACKAGE_FILE_NAME=install-SI -DBUILD_TESTING=off -G Ninja
    cmake --build ${SI_BUILD_DIR} --config Release --target package
    assertEquals "Installation build successful" 0 $?
    ${SI_BUILD_DIR}/install-SI.sh --prefix=${INSTALL_PATH} --skip-license --exclude-subdir
    assertEquals "Installation script successful" 0 $?
    
    cmake ${ROOT_DIR}/example -B${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -G Ninja
    cmake --build ${BUILD_DIR}
    assertEquals "build against installation successful" 0 $?
    
}

# Load shUnit2.
. shunit2