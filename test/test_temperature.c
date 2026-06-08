#include "unity.h"
#include "temperature.h"

void setUp(void) {}
void tearDown(void) {}

void test_celsius_to_fahrenheit(void)
{
    TEST_ASSERT_EQUAL_FLOAT(32.0f, celsius_to_fahrenheit(0.0f));
    TEST_ASSERT_EQUAL_FLOAT(212.0f, celsius_to_fahrenheit(100.0f));
}

void test_fahrenheit_to_celsius(void)
{
    TEST_ASSERT_EQUAL_FLOAT(0.0f, fahrenheit_to_celsius(32.0f));
    TEST_ASSERT_EQUAL_FLOAT(100.0f, fahrenheit_to_celsius(212.0f));
}
