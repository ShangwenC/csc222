#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

void print_point(Point p)
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

int main () {
    Point blank;
    blank.x = 3.0;
    blank.y = 3.0;
    int x = blank.x;
    cout << "(" << blank.x << ", " << blank.y << ")" << endl;
    double distance = blank.x * blank.x + blank.y * blank.y;
    Point p1 = {3.0, 4.0};
    Point p2 = p1;
    cout << "(" << p2.x << ", " << p2.y << ")" << endl;
    print_point(blank);
    reflect(blank);
    print_point(blank);
}
