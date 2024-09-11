// S. Trowbridge 2020
#include <iostream>
using namespace std;

int sum(int a, int b) { return a+b; }

int sum(int x) {  // overloaded sum function (different parameter list)
    int total = 0;
    for(int i=0; i<=x; ++i) { total += i; }
    return total;
}

int main() {
    cout << endl;

    cout << sum(5, 10) << "\n";   // call original sum function
    cout << sum(10) << "\n";      // call overloaded sum function

    cout << endl;
    return 0;
}
