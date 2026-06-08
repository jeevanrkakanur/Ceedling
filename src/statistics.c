#include "statistics.h"
#include "calculator.h"

static int average(int a, int b)
{
    int sum = add(a, b);
    return divide(sum, 2);
}
