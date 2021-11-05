#include "./complex.h"
#include <iostream>
using namespace std;
int main () {
    complex c1(3,4);
    complex c2(5,6);

    cout << (c1 + c2) << endl;
    return 0;
}