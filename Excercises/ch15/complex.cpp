#include <iostream>
#include <string>
#include <cmath>
#include <assert.h>
#include "complex.h"
using namespace std;

//accessor functions
double Complex::get_real()
{
    return real;
}

double Complex::get_imag()
{
    return imag;
}

void Complex::calculate_polar()
{
    mag = sqrt(real * real + imag * imag);
    theta = atan(imag / real);
    polar = true;
}

double Complex::get_mag()
{
    if (polar == false) calculate_polar();
    return mag;
}

double Complex::get_theta()
{
    if (polar == false) calculate_polar();
    return theta;
}

//output
string Complex::str_cartesian()
{
    return to_string(get_real()) + " + " + to_string(get_imag()) + "i";
}

string Complex::str_polar()
{
    string theta = to_string(get_theta());
    string mag = to_string(get_mag());
    return mag  + "e^" + theta + "i";
}

Complex c(2, 3);

cout << c.str_cartesian() << endl;
cout << c.str_polar() << endl;

//+ operator
Complex Complex::operator + (const Complex& c)
{
    return Complex(real + c.real, imag + c.imag);
}

Complex c1(2, 3);
Complex c2(4, 7);

Complex sum = c1 + c2;
cout << sum.str_cartesian() << endl;
