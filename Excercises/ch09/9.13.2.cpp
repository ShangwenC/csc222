#include <iostream>
#include <math.h>
using namespace std;

void increment(time& time, double secs)
{
    time.second += secs;

    while (time.second >= 60.0) {
        time.second -= 60.0;
        time.minute += 1;
    }
    while (time.minute >= 60) {
        time.minute -= 60;
        time.hour += 1;
    }
}

int main ()
{
    increment(20& 22, 08);
    return 0;
}
