#!/bin/bash
# file: test/compilation-tests.sh

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
ROOT_DIR=$(realpath ${SCRIPT_DIR}/../)
INSTALL_PATH=$(realpath ~/SI-install)

oneTimeSetUp(){
    
    TMP_DIR=$(mktemp -d)
    
    # install SI
    cmake ${ROOT_DIR} -B${TMP_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DBUILD_TESTING=off -G Ninja
    cmake --build ${TMP_DIR} --config Release --target install
    
    if [ -d ${TMP_DIR} ]; then
        rm -rf ${TMP_DIR}
    fi
}

setUp(){
    TMP_DIR=$(mktemp -d)
}

tearDown(){
    if [ -d ${TMP_DIR} ]; then
        rm -rf ${TMP_DIR}
    fi
}

testSISelfSuccessfulCompilationWhenDefaultInvocation() {
    
    cmake ${ROOT_DIR} -B${TMP_DIR} -G Ninja
    assertEquals "Configuration successful" $? 0
    cmake --build ${TMP_DIR} --config Release
    assertEquals "Building successful" $? 0
    
    
}

testSISelfFailedCompilationWhenImplicitConversionDisabled() {
    
    cmake ${ROOT_DIR} -B${TMP_DIR} -DCMAKE_CXX_FLAGS="-DENABLE_IMPLICIT_RATIO_CONVERSION=false" -G Ninja
    assertEquals "Configuration successful" $? 0
    cmake --build ${TMP_DIR} --config Release
    assertNotEquals "Building fails" $? 0
    
    
}

testOperatorEqualsCompilesWhenDefaultInvocation()
{
    cmake ${ROOT_DIR}/test/src/compilation_tests/ -B${TMP_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -G Ninja
    assertEquals "Configuration successful" $? 0
    cmake --build ${TMP_DIR} --config Release
}


testOperatorEqualsFailsWhenImplicitConversionDisabled()
{
    cmake ${ROOT_DIR}/test/src/compilation_tests/ -B${TMP_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DCMAKE_CXX_FLAGS="-DENABLE_IMPLICIT_RATIO_CONVERSION=false" -G Ninja
    assertEquals "Configuration successful" $? 0
    cmake --build ${TMP_DIR} --config Release
    assertNotEquals "Building fails" $? 0
}

# Load shUnit2.
. shunit2