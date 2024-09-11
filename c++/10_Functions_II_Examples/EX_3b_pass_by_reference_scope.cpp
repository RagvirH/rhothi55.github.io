// S. Trowbridge 2020
#include <iostream>
using namespace std;

void increment(int &n) {
    ++n;
    //cout << x << "\n";       // compiler error: x is not in scope
}

int main( ) {
    cout << endl;

    int x = 5;
    cout << "x: " << x << "\n\n";

    increment(x);
    cout << "x: " << x << "\n";
    // cout << n << "\n";         // compiler error: n is not in scope

    cout << endl;
    return 0;
}
