#include<iostream>
#include<cstdlib>
using namespace std;

random_between(int l, int h) {
    int num = 0;
    if (int l = int h){
        num = h;
    }
    if (int l > int h){
        int low = h;
        int high = l;
        num = low + (rand() % high);
    }
    if (int l < int h){
        int low = l;
        int high = h;
        num = low + (rand() % high);
    }
    return num;
}
