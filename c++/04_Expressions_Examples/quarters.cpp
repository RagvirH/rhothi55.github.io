#include <iostream>
using namespace std;

int main(){
    float money;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Enter money: $";
    cin >> money;

    int quarters = static_cast<int>(money/0.25);

    cout << "Number of quarters is " << (quarters) << endl;

    cout << "Change is $" << (money - (quarters * .25)) << endl;

    cout << endl;

    return 0;
}