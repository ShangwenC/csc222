#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "First Line." << endl;
    new_line();
    cout << "Second Line." << endl;
    return 0;
}

void new_line()
{
    cout << endl;
}

//Recieved error message "error: use of undeclared identifier 'new_line'". This is because the function must be declared before it can be used.
