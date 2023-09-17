#include <iostream>
#include <math.h>
using namespace std;


void working(int age) {
    if (age > 16) {
        if (age < 65) {
            cout << "age is within the normal working age." << endl;
        }
    }
}

int main ()
{
    working(30);
    return 0;
}
