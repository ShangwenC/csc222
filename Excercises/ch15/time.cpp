#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Time {
    int hour, minute;
    double second;

    Time operator + (const Time& t);
    Time operator - (const Time& t);
};

void print_time(Time& t) {
    cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}

bool after(Time& time1, Time& time2)
{
    if (time1.hour > time2.hour) return true;
    if (time1.hour < time2.hour) return false;

    if (time1.minute > time2.minute) return true;
    if (time1.minute > time2.minute) return false;

    if (time1.second > time2.second) return true;
    return false;
}

Time add_time(Time& t1, Time& t2)
{
    Time sum;
    sum.hour = t1.hour + t2.hour;
    sum.minute = t1.minute + t2.minute;
    sum.second = t1.second + t2.second;

    if (sum.second >= 60) {
        sum.second -= 60;
        sum.minute += 1;
    }
    if (sum.minute >= 60) {
        sum.minute -= 60;
        sum.hour += 1;
    }
    return sum;
}

void increment(Time& time, double secs)
{
    time.second += secs;

    while (time.second >= 60.0) {
        time.second -= 60.0;
        time.minute += 1;
    }
    while (time.minute >= 60) {
        time.minute -= 60;
        time.hour += 1;
    }
}

double convert_to_seconds(const Time& t)
{
    int minutes = t.hour * 60 + t.minute;
    double seconds = minutes * 60 + t.second;

    return seconds;
}

Time make_time(double secs)
{
    Time time;
    time.hour = int(secs / 3600.0);
    secs -= time.hour * 3600.0;
    time.minute = int(secs / 60.0);
    secs -= time.minute * 60;
    time.second = secs;

    return time;
}

Time Time::operator + (const Time& t) {
    return Time();
}


int main () {
    Time time = {11, 59, 3.14159};
    
}
