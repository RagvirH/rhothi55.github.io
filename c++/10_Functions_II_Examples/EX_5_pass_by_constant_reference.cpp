// S. Trowbridge 2020
#include <iostream>
using namespace std;

void print(const int &n) {    // n is a constant reference (cannot be modified)
    cout << n << "\n";
    //++n;                   // compiler error: we cannot modify the value of n
}

int main( ) {
    cout << endl;

    int x = 5;
    print(x);

    cout << endl;
    return 0;
}
