#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int input;

    cout << "Enter a number: ";
    cin >> input;

    float root = sqrt(input);

    cout << "Square root of " << input << " is: " << (root) << endl;

    cout << "Is " << input << " a perfect square? " << ( root == static_cast<int>(root)) << endl;

    return 0;

}