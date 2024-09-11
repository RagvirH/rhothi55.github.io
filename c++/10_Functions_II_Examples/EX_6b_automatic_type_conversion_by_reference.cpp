// S. Trowbridge 2020
#include <iostream>
using namespace std;

void print(int &i) {     // compiler error: cannot automatic type convert a reference
    cout << i << "\n";
}

int main() {
    cout << endl;

    char c = 'A';
    print(c);           // send a char argument to an integer reference parameter

    cout << endl;
    return 0;
}
