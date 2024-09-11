#include <iostream>
using namespace std;

int main(){
    int x;

    cout << "Enter  a three-digit number: ";
    cin >> x;

    int y = x;

    cout << (x%10) << endl;
    x = x/10;
    cout << (x%10) << endl;
    x = x/10;
    cout << (x%10) << endl;
    x = x/10;

    cout << "Original: " << y << endl;

    return 0;
}