// S. Trowbridge 2020
#include <iostream>
using namespace std;

void increment(int &n) {         // n is a reference for x (another name for x)
    ++n;                         // increment n
    cout << "n: " << n << "\n";
}

int main( ) {
    cout << endl;

    int x = 5;
    cout << "x: " << x << "\n\n";

    increment(x);                 // x is modified because x and n are the same variable
    cout << "x: " << x << "\n";

    cout << endl;
    return 0;
}
