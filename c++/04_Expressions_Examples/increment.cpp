#include <iostream>
using namespace std;

int main(){
    int x;

    cout << "Enter a number: ";
    cin >> x;

    cout << (x+=2) << endl;

    cout << (x-=1) << endl;

    return 0;

}
