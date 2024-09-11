#include <iostream>
using namespace std;

int main(){
    int n, d;

    cout << ("Enter two numbers:");
    cin >> n >> d;

    cout << "FP division: " << (static_cast<float>(n/d)) << endl;
     cout << "int division: " << (n/d) << endl;

     return 0;






}