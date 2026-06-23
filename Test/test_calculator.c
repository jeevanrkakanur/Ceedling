#include "unity.h"
#include "calculator.h"

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
    // Keeping this as a failure case (Expected 2, Was -2) to trigger your fail-fast rules
    TEST_ASSERT_EQUAL(2, subtract(2,4)); 
}

void test_multiply(void)
{
    TEST_ASSERT_EQUAL(6, multiply(2,3));
}

void test_divide(void)
{
    TEST_ASSERT_EQUAL(2, divide(6,3));
}
