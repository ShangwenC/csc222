#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    for(int i=0;i<10;i++)
        cout << (rand() % 10) + 1 << ", ";
    return 0;
}
