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
    
}
