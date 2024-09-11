// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int i = 5;
    cout << i << "\n";        // output the value of i
    cout << &i << "\n\n";     // output the memory address of i

    int *p = &i;              // store the memory address of i into a pointer variable p

    cout << i << "\n";        // output the value of i
    cout << *p << "\n\n";     // dereference p (returns the variable i)

    cout << &i << "\n";       // output the memory address of i (the value of p)
    cout << p << "\n\n";      // output the value of p (the memory address of i)

    cout << &p << "\n";       // output the memory address of p (different from i)

    cout << endl;
    return 0;
}
