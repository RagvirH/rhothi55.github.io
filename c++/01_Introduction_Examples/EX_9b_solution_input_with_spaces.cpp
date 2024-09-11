// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    string name;

    cout << "What is your full name? ";       // getline reads up until a newline character
    getline(cin, name);

    cout << "Hello, " << name << "!" << endl;

    cout << endl;
    return 0;
}
