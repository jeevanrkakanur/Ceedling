#include "temperature.h"

float celsius_to_fahrenheit(float c)
{
    return (c * 9.0f / 5.0f) + 32.0f;
}

float fahrenheit_to_celsius(float f)
{
    return (f - 32.0f) * 5.0f / 9.0f;
}
