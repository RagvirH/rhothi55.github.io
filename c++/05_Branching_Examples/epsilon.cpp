#include <iostream>
using namespace std;

int main () {
    cout << endl;
    
    int a=1, b=2;
    cout << a << " " << b << endl << endl;
    if(a<=b) { 
     b++;
    }
    cout << a << " " << b << endl << endl;
    if(a%b==0) { 
     a = ++b;
    } else {
     b = a++;
    }
    cout << a << " " << b << endl << endl;
    b*=a;
    cout << a << " " << b << endl << endl;

    cout << endl;
    return 0;
}