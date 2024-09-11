// S. Trowbridge 2020
#include <iostream>
using namespace std;

int sum(int a, int b) { return a+b; }
double sum(double a, double b) { return a+b; }

int main() {
    cout << endl;

    cout << sum(5, 5) << "\n";       // ok function call
    cout << sum(2.5, 2.5) << "\n";   // ok function call

    //cout << sum(5, 2.5) << "\n";   // ambiguous function call
    //cout << sum(2.5, 5) << "\n";   // ambiguous function call

    cout << endl;
    return 0;
}
