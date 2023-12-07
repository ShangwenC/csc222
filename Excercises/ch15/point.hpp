#include <string>
using namespace std;

class Point {
    double x, y;

    public:
    Point();
    Point(int x, int y);

    //member functions
    void print_point(Point p);
    double distance(Point p1, Point p2);
    void reflect(Point& p);
    Point operator - (Point& p);
    Point operator + (Point& p);
    friend ostream& operator << (ostream& os, Point& p);
};
