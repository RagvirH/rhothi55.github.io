#include <iostream>
using namespace std;

int main() {
    cout << endl;

    string major, first, last;
    
    cout << "Enter your major: ";
    cin >> major;
    cout << "Enter your first name: ";
    cin >> first;
    cout << "Enter your last name: ";
    cin >> last;

    cout << "My name is "  << first << " " << last << ". " << "My major is " << major << endl;

    cout << endl;
    return 0;
}