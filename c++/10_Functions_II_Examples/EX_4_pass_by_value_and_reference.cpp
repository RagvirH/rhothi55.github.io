// S. Trowbridge 2020
#include <iostream>
using namespace std;

void increment_by(int &x, int y) {    // x is pass by reference, y is pass by value
    x+=y;
}

int main( ) {
    cout << endl;

    int a = 5, b = 10;
    cout << a << " " << b << "\n";

    increment_by(a, b);             // a is modified, b is not (b does not need to be)
    cout << a << " " << b << "\n";

    cout << endl;
    return 0;
}
