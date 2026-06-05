#include "rectangle.h"
#include "calculator.h"

int calculate_area(int length, int width)
{
    return multiply(length, width);
}

int calculate_perimeter(int length, int width)
{
    return multiply(add(length, width), 2);
}
