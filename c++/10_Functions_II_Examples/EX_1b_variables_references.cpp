// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int i = 5;                    // an integer variable i
    cout << i << "\n";            // the value of i
    cout << &i << "\n";           // the memory address of i
    cout << sizeof(i) << "\n\n";  // the size of the variable i (based upon its type)

    int &r = i;                   // a reference or alias to the variable i
    cout << "\n\n";

    cout << r << "\n";            // the value of r
    cout << &r << "\n";           // the memory address of r
    cout << sizeof(r) << "\n";    // the size of the variable i (based upon its type)

    cout << endl;
    return 0;
}
