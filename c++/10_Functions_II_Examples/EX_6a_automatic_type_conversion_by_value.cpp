// S. Trowbridge 2020
#include <iostream>
using namespace std;

void print(int i) {                 // integer parameter
    cout << i << "\n";
}

double divide(double a, double b) {
    return a/b;                     // double / double gives a double answer
}

int main() {
    cout << endl;

    char c = 'A';
    print(c);                       // 'A' is implicitly casted into 65 by automatic type conversion

    int x=10, y=3;
    cout << divide(x,y) << "\n";    // x and y implicitly casted to doubles by automatic type conversion

    cout << endl;
    return 0;
}
