#include "unity.h"

TEST_FILE("calculator.c")
TEST_FILE("rectangle.c")

#include "rectangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_calculate_area(void)
{
    TEST_ASSERT_EQUAL(20, calculate_area(5, 4));
}

void test_calculate_area_zero(void)
{
    TEST_ASSERT_EQUAL(0, calculate_area(0, 4));
}

void test_calculate_perimeter(void)
{
    TEST_ASSERT_EQUAL(18, calculate_perimeter(5, 4));
}

void test_calculate_perimeter_square(void)
{
    TEST_ASSERT_EQUAL(20, calculate_perimeter(5, 5));
}
