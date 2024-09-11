#include <iostream>
using namespace std;

int main() {
    cout << endl;
    
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (x<=0){
        cout << x << " is not valid" << endl;
    }
    else if (x%18==0){
        cout << x << " is a factor of 18." << endl;
    }
    else {
        cout << x << " is not a factor of 18." << endl;
    }

    cout << endl;
    return 0;
}