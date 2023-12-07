#include <iostream>
#include <string>
#include <cmath>
#include "point.hpp"
using namespace std;

Point Point::operator - (Point& p) {
    Point p1(x - p.x, y - p.y);
    return p1;
}

Point Point::operator + (Point & p) {
    Point p1(x + p.x, y + p.y);
    return p1;
}

ostream& operator<<(ostream& os, Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

/*void print_point(Point p)
{
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

double distance(Point p1, Point p2)
{
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}

void reflect(Point& p)
{
    double temp = p.x;
    p.x = p.y;
    p.y = temp;
}
*/
