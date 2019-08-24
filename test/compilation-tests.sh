#!/bin/bash
# file: test/compilation-tests.sh

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
ROOT_DIR=$(realpath ${SCRIPT_DIR}/../)
INSTALL_PATH=$(realpath ~/SI-install)

buildSingleTarget()
{
    
    if [ "${2}" == "DEFAULTBUILD" ]; then
        cmake ${ROOT_DIR}/test/src/compilation_tests/ -B${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -G Ninja > /dev/null
        assertEquals "Configuration successful" $? 0
        
    else
        cmake ${ROOT_DIR}/test/src/compilation_tests/ -B${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DCMAKE_CXX_FLAGS="-DSI_DISABLE_IMPLICIT_RATIO_CONVERSION" -G Ninja >/dev/null
        assertEquals "Configuration successful" $? 0
    fi
    
    cmake --build ${BUILD_DIR} --config Release --target $1
    RESULT=$?
    
    if [ "${3}" == "PASS" ]; then
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
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorEqualsFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_equals_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}


testOperatorLessThanCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_lessthan_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorLessThanFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_lessthan_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorGreaterThanCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_greaterthan_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorGreaterThanFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_greaterthan_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorMultiplyCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_multiply_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorMultiplyFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_multiply_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorAddCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorAddFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorAddAssignmentCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_assignment_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorAddAssignmentFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_assignment_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorAddAssignmentSameRatioCompilesWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_assignment_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD PASS
}


testOperatorSubtractCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorSubtractFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorSbutractAssignmentCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_assignment_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorSubtractAssignmentFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_assignment_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorSubtractAssignmentWithSameRatioCompilesWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_assignment_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD PASS
}



testOperatorDivideCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorDivideFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testOperatorDivideFromFloatingPointCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_floating_point_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorDivideFromFloatingPointFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_floating_point_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}


testOperatorDivideFromIntegralCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_integral_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


testOperatorDivideFromIntegralFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_integral_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testCompilationFailsWhenNumberparserOverflows()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/parsing_overflow_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL
}

testCompilationSucceedsWhenNumberparserDoesNotOverflow()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/parsing_overflow_test_pass_compilation.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS
}


# Load shUnit2.
. shunit2