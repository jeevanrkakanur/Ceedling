#ifndef UNITY_HELPER_H
#define UNITY_HELPER_H

#include "unity.h"

// Redefine the Unity test-runner macro to skip downstream functions immediately after any failure
#undef RUN_TEST
#define RUN_TEST(TestFunc, TestLineNum)                   \
    if (Unity.TestFailures == 0) {                        \
        UnityDefaultTestRun(TestFunc, #TestFunc, TestLineNum); \
    }

#endif // UNITY_HELPER_H
