#include <iostream>
#include <math.h>
using namespace std;



void countdown(int n) {
    if (n == 0) {
        cout << "Blastoff!" << endl;
    } else {
        cout << n << endl;
        countdown(n-1);
    }
}

int main()
{
    countdown(-5);
    return 0;
}

//When using a negative argument for countdown, a list from the argument (in this case, -5) until -261,525 is returned
