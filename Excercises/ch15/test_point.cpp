#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <string>
#include "point.cpp"
#include "point.hpp"
using namespace std;

TEST_CASE("Test can create and print a point") {
    Point p1(1,2);
    CHECK(p1.print_point() == "(1.000000, 2.000000)");
}
