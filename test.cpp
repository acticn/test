#include "./complex.h"
#include <iostream>
using namespace std;
int main () {
    complex c1(3,4);
    complex c2(5,6);
    complex c3 = c1 + c2;
    cout << c3 << endl; //(8,10)
    cout << (c1 + c2) << endl;//错误
    return 0;
}
