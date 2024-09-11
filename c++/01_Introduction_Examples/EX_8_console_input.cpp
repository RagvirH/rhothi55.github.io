// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    string name;                      // declare a string variable name
    string age;                       // declare a string variable age

    cout << "What is your name? ";    // request a name from the console
    cin >> name;                      // store input into name


    cout << "What is your age? ";     // request an age from the console.
    cin >> age;                       // store input into age

                                      // print the variables as part of a string
    cout << "\nYour name is "
         << name
         << " and your age is "
         << age
         << "."
         << endl;

    cout << endl;
    return 0;
}
