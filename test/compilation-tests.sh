#!/bin/bash
# file: test/compilation-tests.sh

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
ROOT_DIR=$(realpath ${SCRIPT_DIR}/../)
INSTALL_PATH=$(realpath ~/SI-install)

buildSingleTarget()
{
    
    if [ "${2}" == "PASS" ]; then
        cmake ${ROOT_DIR}/test/src/compilation_tests/ -B${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -G Ninja > /dev/null
        assertEquals "Configuration successful" $? 0
        
    else
        cmake ${ROOT_DIR}/test/src/compilation_tests/ -B${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DCMAKE_CXX_FLAGS="-DSI_DISABLE_IMPLICIT_RATIO_CONVERSION" -G Ninja >/dev/null
        assertEquals "Configuration successful" $? 0
    fi
    
    cmake --build ${BUILD_DIR} --config Release --target $1
    RESULT=$?
    
    if [ "${2}" == "PASS" ]; then
        assertEquals "Building successful" $RESULT 0
    else
        assertNotEquals "Building fails" $RESULT 0
    fi
}

oneTimeSetUp(){
    
    BUILD_DIR=$(mktemp -d)
    
    # install SI
    cmake ${ROOT_DIR} -B${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DBUILD_TESTING=off -G Ninja
    cmake --build ${BUILD_DIR} --config Release --target install
    
    if [ -d ${BUILD_DIR} ]; then
        rm -rf ${BUILD_DIR}
    fi
}

setUp(){
    BUILD_DIR=$(mktemp -d)
}

tearDown(){
    if [ -d ${BUILD_DIR} ]; then
        rm -rf ${BUILD_DIR}
    fi
}

testSISelfSuccessfulCompilationWhenDefaultInvocation() {
    
    cmake ${ROOT_DIR} -B${BUILD_DIR} -G Ninja
    assertEquals "Configuration successful" $? 0
    cmake --build ${BUILD_DIR} --config Release
    assertEquals "Building successful" $? 0
    
    
}

testSISelfFailedCompilationWhenImplicitConversionDisabled() {
    
    cmake ${ROOT_DIR} -B${BUILD_DIR} -DCMAKE_CXX_FLAGS="-DSI_DISABLE_IMPLICIT_RATIO_CONVERSION" -G Ninja
    assertEquals "Configuration successful" $? 0
    cmake --build ${BUILD_DIR} --config Release
    assertNotEquals "Building fails" $? 0
}

testOperatorEqualsCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_equals_test.cc.o
    buildSingleTarget ${TARGET} PASS
}


testOperatorEqualsFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_equals_test.cc.o
    buildSingleTarget ${TARGET} FAIL
}


testOperatorLessThanCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_lessthan_test.cc.o
    buildSingleTarget ${TARGET} PASS
}


testOperatorLessThanFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_lessthan_test.cc.o
    buildSingleTarget ${TARGET} FAIL
}

testOperatorGreaterThanCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_greaterthan_test.cc.o
    buildSingleTarget ${TARGET} PASS
}


testOperatorGreaterThanFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_greaterthan_test.cc.o
    buildSingleTarget ${TARGET} FAIL
}

testOperatorMultiplyCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_multiply_test.cc.o
    buildSingleTarget ${TARGET} PASS
}


testOperatorMultiplyFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_multiply_test.cc.o
    buildSingleTarget ${TARGET} FAIL
}

testOperatorAddCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_test.cc.o
    buildSingleTarget ${TARGET} PASS
}


testOperatorAddFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_test.cc.o
    buildSingleTarget ${TARGET} FAIL
}

testOperatorAddAssignmentCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_assignment_test.cc.o
    buildSingleTarget ${TARGET} PASS
}


testOperatorAddAssignmentFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_assignment_test.cc.o
    buildSingleTarget ${TARGET} FAIL
}


testOperatorSubtractCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_test.cc.o
    buildSingleTarget ${TARGET} PASS
}


testOperatorSubtractFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_test.cc.o
    buildSingleTarget ${TARGET} FAIL
}

testOperatorSbutractAssignmentCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_assignment_test.cc.o
    buildSingleTarget ${TARGET} PASS
}


testOperatorSubtractAssignmentFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_assignment_test.cc.o
    buildSingleTarget ${TARGET} FAIL
}


testOperatorDivideCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_test.cc.o
    buildSingleTarget ${TARGET} PASS
}


testOperatorDivideFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_test.cc.o
    buildSingleTarget ${TARGET} FAIL
}

testOperatorDivideFromFloatingPointCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_floating_point_test.cc.o
    buildSingleTarget ${TARGET} PASS
}


testOperatorDivideFromFloatingPointFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_floating_point_test.cc.o
    buildSingleTarget ${TARGET} FAIL
}


testOperatorDivideFromIntegralCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_integral_test.cc.o
    buildSingleTarget ${TARGET} PASS
}


testOperatorDivideFromIntegralFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_integral_test.cc.o
    buildSingleTarget ${TARGET} FAIL
}

testCompilationFailsWhenNumberparserOverflows()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/parsing_overflow_test.cc.o
    buildSingleTarget ${TARGET} FAIL
}

testCompilationSucceedsWhenNumberparserDoesNotOverflow()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/parsing_overflow_test_pass_compilation.cc.o
    buildSingleTarget ${TARGET} PASS
}


# Load shUnit2.
. shunit2