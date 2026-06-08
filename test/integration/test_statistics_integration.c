#include "unity.h"
#include "statistics.h"
#include "calculator.h"

void setUp(void) {}
void tearDown(void) {}

// Test case 1: Distinct inputs
void test_average_of_different_numbers(void)
{
    TEST_ASSERT_EQUAL(15, average(10, 20));
}

// Test case 2: Matching inputs
void test_average_of_identical_numbers(void)
{
    TEST_ASSERT_EQUAL(10, average(10, 10));
}

// Test case 3: High value inputs
void test_average_of_higher_matching_numbers(void)
{
    TEST_ASSERT_EQUAL(20, average(20, 20));
}
