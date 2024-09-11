#include <iostream>
using namespace std;
int main(){
    cout << endl;

    string a = "A";
    string b = "B";

    cout << a << " " << b << endl;

    string c = a; //1. backup a
    a = b;        //2. replace a
    b = c;        //3. replace b

    cout << a << " " << b << endl;
    return 0;




}