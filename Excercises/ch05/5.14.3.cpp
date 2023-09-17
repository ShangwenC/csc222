#include <iostream>
#include <math.h>
using namespace std;

void overloaded_function(int a, int b) {
    if (a > b) {
        cout << "a is greater than b!";
    }
}

void overloaded_function(int birth) {
    if (birth < 2002) {
        cout << "you're old enough to drink";
    }
}

int main()
{
    overloaded_function(12, 4);
    overloaded_function(1999);
    return 0;
}
