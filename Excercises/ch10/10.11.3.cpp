#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

int main ()
{
    vector<int> histogram(upper_bound, 0);
    for (int i = 0; i < num_values; i++) {
        int index = vector[i];
        histogram[index]++;
    }
}
