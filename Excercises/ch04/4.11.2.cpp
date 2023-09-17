#include <iostream>
#include <math.h>
using namespace std;

void n_lines(int n) {
    if (n > 0) {
        cout << endl;
        n_lines(n-1);
    }
}

int main()
{
    n_lines(3);
    return 0;
}
