#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout << "Enter an integer x:";
    cin >> x >> y;

    string s = "Hello";

    cout << (x % 20) << endl;

    cout << (x % 6 + 23) << endl;

    cout << static_cast<float>(x)/y << endl;

    //'e' character //

    cout << (x % 5 - 3) << endl;

    cout << "\n";
    return 0;

}