// S. Trowbridge 2020
#include <iostream>
using namespace std;

void print(int n) {       // n is local to the print function
    cout << n << " ";
    //cout << x << " ";  // compiler error: x is not in scope
}

int main( ) {
    cout << endl;

    int x = 5;           // x is local to the main function
    print(x);
    // cout << n << " "; // compiler error: n is not in scope

    cout << endl;
    return 0;
}
