#!/bin/bash
# file: test/compilation-tests.sh

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
ROOT_DIR=$(realpath ${SCRIPT_DIR}/../)

# Set the install path
INSTALL_PATH=$(mktemp -d)/SI-install
#INSTALL_PATH=$(realpath ~/SI-install)

buildSingleTarget()
{
    if [ "${2}" == "DEFAULTBUILD" ]; then
        cmake ${ROOT_DIR}/test/src/compilation_tests/ -B${BUILD_DIR} -DCMAKE_PREFIX_PATH=${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DCMAKE_BUILD_TYPE=Release -G Ninja > /dev/null
        assertEquals "'${4}': Configuration for defaultbuild successful" 0 $?

    else
        cmake ${ROOT_DIR}/test/src/compilation_tests/ -B${BUILD_DIR} -DCMAKE_PREFIX_PATH=${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_FLAGS="-DSI_DISABLE_IMPLICIT_RATIO_CONVERSION" -G Ninja > /dev/null
        assertEquals "'${4}': Configuration for build with disabled ration cinversion successful" 0 $?
    fi

    cmake --build ${BUILD_DIR} --config Release --target $1 > /dev/null
    RESULT=$?

    if [ "${3}" == "PASS" ]; then
        assertEquals "Building successful" 0 $RESULT
    else
        assertNotEquals "Building fails" 0 $RESULT
    fi

}

oneTimeSetUp(){

    echo "Setting up and installing SI"
    BUILD_DIR=$(mktemp -d)
    conan install . --output-folder=${BUILD_DIR} --build=missing --settings=build_type=Release 2>&1> /dev/null

    # install SI
    cmake ${ROOT_DIR} -B${BUILD_DIR} -DCMAKE_PREFIX_PATH=${BUILD_DIR} -DCMAKE_INSTALL_PREFIX:PATH=${INSTALL_PATH} -DSI_BUILD_TESTING=OFF -DCMAKE_BUILD_TYPE=Release -G Ninja > /dev/null
    cmake --build ${BUILD_DIR} --config Release --target install > /dev/null

    if [ -d ${BUILD_DIR} ]; then
        rm -rf ${BUILD_DIR}
    fi
}

setUp(){
    BUILD_DIR=$(mktemp -d)
    conan install . --output-folder=${BUILD_DIR} --build=missing --settings=build_type=Release 2>&1> /dev/null
}

tearDown(){
    if [ -d ${BUILD_DIR} ]; then
        rm -rf ${BUILD_DIR}
    fi
}

testSISelfSuccessfulCompilationWhenDefaultInvocation() {

    cmake ${ROOT_DIR} -B${BUILD_DIR} -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=${BUILD_DIR} -G Ninja > /dev/null
    assertEquals "Configuration successful" 0 $?
    cmake --build ${BUILD_DIR} --config Release > /dev/null
    assertEquals "Building successful" 0 $?
}

testSISelfFailedCompilationWhenImplicitConversionDisabled() {

    cmake ${ROOT_DIR} -B${BUILD_DIR} -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=${BUILD_DIR} -DCMAKE_CXX_FLAGS="-DSI_DISABLE_IMPLICIT_RATIO_CONVERSION" -G Ninja > /dev/null
    assertEquals "Configuration successful" 0 $?
    cmake --build ${BUILD_DIR} --config Release
    assertNotEquals "Building fails" 0 $?
}

testOperatorCopyCtorWithSameRatioCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/copy_ctor_with_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorCopyCtorWithSameRatioCompilesWhenDefaultInvocation"
}


testOperatorCopyCtorWithSameRatioCompilesWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/copy_ctor_with_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD PASS "testOperatorCopyCtorWithSameRatioCompilesWhenImplicitConversionDisabled"
}

testOperatorCopyCtorCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/copy_ctor_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorCopyCtorCompilesWhenDefaultInvocation"
}


testOperatorCopyCtorFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/copy_ctor_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testOperatorCopyCtorFailsWhenImplicitConversionDisabled"
}

testOperatorMoveCtorWithSameRatioCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/move_ctor_with_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorMoveCtorWithSameRatioCompilesWhenDefaultInvocation"
}


testOperatorMoveCtorWithSameRatioCompilesWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/move_ctor_with_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD PASS "testOperatorMoveCtorWithSameRatioCompilesWhenImplicitConversionDisabled"
}

testOperatorMoveCtorCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/move_ctor_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorMoveCtorCompilesWhenDefaultInvocation"
}


testOperatorMoveCtorFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/move_ctor_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testOperatorMoveCtorFailsWhenImplicitConversionDisabled"
}



testOperatorCopyAssignmentCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_copy_assignment_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorCopyAssignmentCompilesWhenDefaultInvocation"
}


testOperatorCopyAssignmentFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_copy_assignment_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testOperatorCopyAssignmentFailsWhenImplicitConversionDisabled"
}

testOperatorCopyAssignmentWithSameRatioCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_copy_assignment_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorCopyAssignmentWithSameRatioCompilesWhenDefaultInvocation"
}


testOperatorCopyAssignmentWithSameRatioCompilesWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_copy_assignment_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD PASS "testOperatorCopyAssignmentWithSameRatioCompilesWhenImplicitConversionDisabled"
}

testOperatorMoveAssignmentCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_move_assignment_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorMoveAssignmentCompilesWhenDefaultInvocation"
}


testOperatorMoveAssignmentFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_move_assignment_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testOperatorMoveAssignmentFailsWhenImplicitConversionDisabled"
}

testOperatorMoveAssignmentWithSameRatioCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_move_assignment_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorMoveAssignmentWithSameRatioCompilesWhenDefaultInvocation"
}

testOperatorMoveAssignmentWithSameRatioCompilesWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_move_assignment_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD PASS "testOperatorMoveAssignmentWithSameRatioCompilesWhenImplicitConversionDisabled"
}

testOperatorEqualsCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_equals_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorEqualsCompilesWhenDefaultInvocation"
}


testOperatorEqualsFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_equals_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testOperatorEqualsFailsWhenImplicitConversionDisabled"
}


testOperatorLessThanCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_less_than_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorLessThanCompilesWhenDefaultInvocation"
}


testOperatorLessThanFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_less_than_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testOperatorLessThanFailsWhenImplicitConversionDisabled"
}

testOperatorGreaterThanCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_greater_than_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorGreaterThanCompilesWhenDefaultInvocation"
}


testOperatorGreaterThanFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_greater_than_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testOperatorGreaterThanFailsWhenImplicitConversionDisabled"
}

testOperatorMultiplyCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_multiply_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorMultiplyCompilesWhenDefaultInvocation"
}


testOperatorMultiplyFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_multiply_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testOperatorMultiplyFailsWhenImplicitConversionDisabled"
}

testOperatorAddCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorAddCompilesWhenDefaultInvocation"
}


testOperatorAddFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testOperatorAddFailsWhenImplicitConversionDisabled"
}


testOperatorAddAssignmentCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_assignment_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorAddAssignmentCompilesWhenDefaultInvocation"
}


testOperatorAddAssignmentFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_assignment_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testOperatorAddAssignmentFailsWhenImplicitConversionDisabled"
}

testOperatorAddAssignmentSameRatioCompilesWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_add_assignment_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD PASS "testOperatorAddAssignmentSameRatioCompilesWhenImplicitConversionDisabled"
}


testOperatorSubtractCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorSubtractCompilesWhenDefaultInvocation"
}


testOperatorSubtractFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testOperatorSubtractFailsWhenImplicitConversionDisabled"
}

testOperatorSubtractAssignmentCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_assignment_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorSubtractAssignmentCompilesWhenDefaultInvocation"
}


testOperatorSubtractAssignmentFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_assignment_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testOperatorSubtractAssignmentFailsWhenImplicitConversionDisabled"
}

testOperatorSubtractAssignmentWithSameRatioCompilesWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_subtract_assignment_same_ratio_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD PASS "testOperatorSubtractAssignmentWithSameRatioCompilesWhenImplicitConversionDisabled"
}



testOperatorDivideCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorDivideCompilesWhenDefaultInvocation"
}


testOperatorDivideFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testOperatorDivideFailsWhenImplicitConversionDisabled"
}

testOperatorDivideFromFloatingPointCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_floating_point_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorDivideFromFloatingPointCompilesWhenDefaultInvocation"
}


testOperatorDivideFromFloatingPointFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_floating_point_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testOperatorDivideFromFloatingPointFailsWhenImplicitConversionDisabled"
}


testOperatorDivideFromIntegralCompilesWhenDefaultInvocation()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_integral_test.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testOperatorDivideFromIntegralCompilesWhenDefaultInvocation"
}


testOperatorDivideFromIntegralFailsWhenImplicitConversionDisabled()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/operator_divide_from_integral_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testOperatorDivideFromIntegralFailsWhenImplicitConversionDisabled"
}

testCompilationFailsWhenNumberParserOverflows()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/parsing_overflow_test.cc.o
    buildSingleTarget ${TARGET} RESTRICTEDBUILD FAIL "testCompilationFailsWhenNumberParserOverflows"
}

testCompilationSucceedsWhenNumberParserDoesNotOverflow()
{
    TARGET=CMakeFiles/SI-Compilation-Tests.dir/parsing_overflow_test_pass_compilation.cc.o
    buildSingleTarget ${TARGET} DEFAULTBUILD PASS "testCompilationSucceedsWhenNumberParserDoesNotOverflow"
}


# Load shUnit2.
. shunit2
