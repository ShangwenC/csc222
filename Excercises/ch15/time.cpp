#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Time {
    int hour, minute;
    double second;
};

void print_time(Time& t) {
    cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}

int main () {
    Time time = {11, 59, 3.14159};
}
