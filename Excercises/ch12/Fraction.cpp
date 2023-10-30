#include <iostream>
#include "fraction.hpp"
using namespace std;

// constructor
fraction::fraction() {
    numerator = 0;
    denominator = 1;
    cout << numerator << "/" << denominator;
}

int main() {
    fraction(2,3);
    return 0;
}
