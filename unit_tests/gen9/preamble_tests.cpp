/*
 * Copyright (c) 2018, Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#include "unit_tests/source_level_debugger/source_level_debugger_preamble_test.h"
#include "gtest/gtest.h"

using namespace OCLRT;
typedef SKLFamily GfxFamily;

#include "unit_tests/source_level_debugger/source_level_debugger_preamble_test.inl"

using PreambleTestGen9 = ::testing::Test;

GEN9TEST_F(PreambleTestGen9, givenMidThreadPreemptionAndDebuggingActiveWhenPreambleIsPrograamedThenCorrectSipKernelIsUsed) {
    SourceLevelDebuggerPreambleTest<FamilyType>::givenMidThreadPreemptionAndDebuggingActiveWhenPreambleIsPrograamedThenCorrectSipKernelIsUsedTest();
}

GEN9TEST_F(PreambleTestGen9, givenMidThreadPreemptionAndDebuggingActiveWhenPreambleSizeIsQueriedThenCorrecrSizeIsReturned) {
    SourceLevelDebuggerPreambleTest<FamilyType>::givenMidThreadPreemptionAndDebuggingActiveWhenPreambleSizeIsQueriedThenCorrecrSizeIsReturnedTest();
}

GEN9TEST_F(PreambleTestGen9, givenPreemptionDisabledAndDebuggingActiveWhenPreambleIsProgrammedThenCorrectSipKernelIsUsed) {
    SourceLevelDebuggerPreambleTest<FamilyType>::givenPreemptionDisabledAndDebuggingActiveWhenPreambleIsProgrammedThenCorrectSipKernelIsUsedTest();
}

GEN9TEST_F(PreambleTestGen9, givenPreemptionDisabledAndDebuggingActiveWhenPreambleSizeIsQueriedThenCorrecrSizeIsReturned) {
    SourceLevelDebuggerPreambleTest<FamilyType>::givenPreemptionDisabledAndDebuggingActiveWhenPreambleSizeIsQueriedThenCorrecrSizeIsReturnedTest();
}

GEN9TEST_F(PreambleTestGen9, givenMidThreadPreemptionAndDisabledDebuggingWhenPreambleIsPrograamedThenCorrectSipKernelIsUsed) {
    SourceLevelDebuggerPreambleTest<FamilyType>::givenMidThreadPreemptionAndDisabledDebuggingWhenPreambleIsPrograamedThenCorrectSipKernelIsUsedTest();
}

GEN9TEST_F(PreambleTestGen9, givenMidThreadPreemptionAndDisabledDebuggingWhenPreambleSizeIsQueriedThenCorrecrSizeIsReturned) {
    SourceLevelDebuggerPreambleTest<FamilyType>::givenMidThreadPreemptionAndDisabledDebuggingWhenPreambleSizeIsQueriedThenCorrecrSizeIsReturnedTest();
}

GEN9TEST_F(PreambleTestGen9, givenDisabledPreemptionAndDisabledDebuggingWhenPreambleSizeIsQueriedThenCorrecrSizeIsReturned) {
    SourceLevelDebuggerPreambleTest<FamilyType>::givenDisabledPreemptionAndDisabledDebuggingWhenPreambleSizeIsQueriedThenCorrecrSizeIsReturnedTest();
}