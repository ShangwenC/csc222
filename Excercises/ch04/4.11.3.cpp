#include <iostream>
#include <math.h>
using namespace std;

void compare(int a, int b) {
    if (a > b) {
        cout << "a is greater than b!";
    } else if (a < b) {
        cout << "a is less than b!";
    } else {
        cout << "a and b are equal!";
    }
}

int main()
{
    compare(3, 4);
    return(0);
}
