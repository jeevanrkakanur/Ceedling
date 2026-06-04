#include "unity.h"
#include "statistics.h"
#include "calculator.h"

void setUp(void) {}
void tearDown(void) {}

void test_average(void)
{
    TEST_ASSERT_EQUAL(15, average(10, 20));
}
