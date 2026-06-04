#include "statistics.h"
#include "calculator.h"

int average(int a, int b)
{
    int sum = add(a, b);
    return divide(sum, 2);
}
