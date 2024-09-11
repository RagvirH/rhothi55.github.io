#include <iostream>
using namespace std;

int main () {
    int x;

    cout << "Enter a number: ";
    cin >> x;

    cout << ((x%2!=0) && (x <=20 ) || (x>50)) << endl;

    cout << endl;
    return 0;
}
