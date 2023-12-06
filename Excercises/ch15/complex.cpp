#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
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

//+ operator
Complex Complex::operator + (const Complex& c) {
    return Complex(real + c.real, imag + c.imag);
}

//- operator
Complex Complex::operator - (const Complex& c) {
    return Complex(real - c.real, imag - c.imag);
}

ostream &operator<<(ostream &os, const Complex &c) {
  os << c.real << " + " << c.imag << "i";
  return os;
}

//* operator
Complex::Complex(double m, double t, Flag) {
    mag = m; theta = t;
    polar = true;
}

/* / operator
Complex::Complex(double m, double t, Flag) {
    mag = m; theta = t;
    polar = true;
} */
