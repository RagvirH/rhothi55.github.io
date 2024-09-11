#include <iostream>
using namespace std;

int main(){
    int money;

    
    cout << "Enter a dollar amount as an integer: ";
    cin >> money;

    int quarters = money/25;
    int change = money - (quarters*25);
    int dimes = change/10;

    cout << "Optimal number of dimes: " << dimes << endl;

    cout << endl;
    return 0;

}