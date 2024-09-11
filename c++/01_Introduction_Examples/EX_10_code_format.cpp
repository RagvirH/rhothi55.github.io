// S. Trowbridge 2020
#include <iostream>
using namespace std;

/* Code format:
 * An INDENT is 2 or 4 spaces or use the TAB key.
 *
 * 1. Always INDENT all lines within a codeblock
 * 2. Always INDENT every line after the first in a multi-line statement
 *
 */
int main()
{
    //// indent all code in main
    cout << endl;

    // Multi-line statement - indent every line after the first
    cout << "This is a "
         << "multi-line statement." << endl;

    {   // Nested code block
        //// indent all code in the codeblock
        cout << "This is a "
             << "multi-line statement "
             << "inside a nested code block."
             << endl;
        cout << "This is a second line inside a nested code block." << endl;
        cout << "This is a third line inside a nested code block." << endl;
    }

    cout << endl;
    return 0;
}
