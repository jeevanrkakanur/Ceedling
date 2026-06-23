#include "unity.h"
#include "calculator.h"

// FIXED: Force-injecting the loop interceptor directly inside the test file compilation block
#undef RUN_TEST
#define RUN_TEST(TestFunc, TestLineNum)                   \
    if (Unity.TestFailures == 0) {                        \
        UnityDefaultTestRun(TestFunc, #TestFunc, TestLineNum); \
    }

void setUp(void)
{
    // Clean and empty
}

void tearDown(void)
{
    // Clean and empty
}

void test_add(void)
{
    TEST_ASSERT_EQUAL(5, add(2,3));
}

void test_subtract(void)
{
    // This intentional failure case ensures the reporting engine aborts
    TEST_ASSERT_EQUAL(-2, subtract(2,4));
}

void test_multiply(void)
{
    TEST_ASSERT_EQUAL(6, multiply(2,3));
}

void test_divide(void)
{
    TEST_ASSERT_EQUAL(2, divide(6,3));
}
