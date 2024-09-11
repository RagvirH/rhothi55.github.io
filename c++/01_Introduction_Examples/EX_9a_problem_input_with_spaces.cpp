// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    string name;                              // declare a string variable name

    cout << "What is your full name? ";
    cin >> name;                              // cin reads up to the first whitespace character
    cout << "Hello, " << name << "!" << endl;

    cout << endl;
    return 0;
}
