#include "unity.h"
#include "rectangle.h"

void setUp(void) {}
void tearDown(void) {}

void test_area(void)
{
    TEST_ASSERT_EQUAL(20, calculate_area(5, 4));
}

void test_perimeter(void)
{
    TEST_ASSERT_EQUAL(18, calculate_perimeter(5, 4));
}
