#include "grade.h"
#include "statistics.h"

char get_grade(int mark1, int mark2)
{
    int avg = average(mark1, mark2);

    if (avg >= 90)
        return 'A';
    else if (avg >= 75)
        return 'B';
    else if (avg >= 60)
        return 'C';

    return 'F';
}
