#include <iostream>
#include <string>
using namespace std;

int main() {
    string lol = "This is a text string";
    cout << lol.substr(0,4) << endl;
    cout << lol.substr(5,2) << endl;
    cout << lol.substr(8,1) << endl;
    cout << lol.substr(10,4) << endl;
    cout << lol.substr(15,6) << endl;
    return 0;
}