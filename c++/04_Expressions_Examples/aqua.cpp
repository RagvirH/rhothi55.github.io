#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x;

    cout << ((x%3 == 0) && (x%7 !=7)) << endl;
    cout << (( x%2 != 0 && x >= 20) || x>50) << endl;

    cout << endl;
    return 0;
}