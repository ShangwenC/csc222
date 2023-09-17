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

void overloaded_function(string emotion) {
    if (emotion == "happy") {
        cout << "Good morning!";
    }
}

void overloaded_function(int n, string n2) {
    if ((n == 5) && (n2 == "5")) {
        cout << "your numbers are both 5";
    }
}


int main()
{
    overloaded_function(12, 4);
    overloaded_function(1999);
    overloaded_function("happy");
    overloaded_function(5,"5");
    return 0;
}
