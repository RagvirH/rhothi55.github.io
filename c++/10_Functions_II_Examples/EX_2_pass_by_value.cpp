// S. Trowbridge 2020
#include <iostream>
using namespace std;

void increment_1(int n) {
    ++n;                            // increment n
    cout << "n: " << n << "\n";
}

int increment_2(int n) {
    return ++n;                     // increment n and return the updated value
}

int main( ) {
    cout << endl;

    int x = 5;
    cout << "x: " << x << "\n\n";

    increment_1(x);               // does not modify x
    cout << "x: " << x << "\n\n";

    x = increment_2(x);           // modifies x by returning a value to assign to x
    cout << "x: " << x << "\n";

    cout << endl;
    return 0;
}
