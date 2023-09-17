#include <iostream>
#include <math.h>
using namespace std;

void sequence(int n)
{
   while (n != 1) {
       cout << n << endl;
       if (n%2 == 0) {      // n is even
           n = n / 2;
       } else {             // n is odd
           n = n * 3 + 1;
       }
   }
}

int main()
{
//    sequence(1);
//    sequence(40);
//    sequence(-27);
//    sequence(0);
    return 0;
}

// returns nothing with 1 as argument
// returns "40, 20, 10, 5, 16, 8, 4, 2" with 40 as argument
// the return for -27 seemed to go on forever, so I terminated the window before it crashed my computer. Seemed to include 10, -14, 5, and 70, seemed to repeat in a pattern.
// return for 0 was just a seemingly indefinite amount of 0s
