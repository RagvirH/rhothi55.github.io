// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    // Assign character variables to store single symbols using single quotes ''
    char letter = 'a';          // syntax: type name = value
    char number = '1';          // the value must be a character literal ''
    char punctuation = '!';

    // Access the previously created variables by name
    cout << letter << "\n";
    cout << number << "\n";
    cout << punctuation << "\n\n";

    // Assign string variables to store many symbols using double quotes ""
    string today = "Monday";        // syntax: type name = value
    string tomorrow = "Tuesday";    // the value must be a string literal ""

    // Access the variables 'today' and 'tomorrow'.
    cout << today << "\n";
    cout << tomorrow << "\n\n";

    // Print combinations of literals and variables:
    // literals are printed using quotes
    // variables are printing without quotes
    cout << letter << " and " << number << " are characters." << "\n";
    cout << "Is today " << today << " or " << tomorrow << "?" << "\n\n";

    // Access the previously created variables by name
    cout << letter << "\n";
    cout << number << "\n";
    cout << punctuation << "\n\n";

    cout << endl;
    return 0;
}
