#include <iostream>
#include <math.h>
using namespace std;

void print_twice(char phil) {
    cout << phil << phil << endl;
}
  
  int main() {
    print_twice('a');
    return 0;

    char argument = 'b';
    print_twice(argument);
    return 0;

    print_twice('6');
    return 0;

    char argument2[6] = {'t', 'r', 'y', 'm', 'e', '\0'};
    print_twice(argument2);
    return 0;
}

