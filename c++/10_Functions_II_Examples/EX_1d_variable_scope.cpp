// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main( ) {
    cout << endl;

    int x = 1;                                 // scope of x is until the end of main
    cout << "main x: " << x << endl;
    {
        int x = 2;                            // scope of x is until the end of the outer block
        cout << "outer x: " << x << endl;
        {
            int x = 3;                        // scope of x is until the end of the inner block
            cout << "inner x: " << x << endl;
        }
    }
    cout << "main x: " << x << endl << endl;

    int i=0;                                 // outer i, scope is the main function
    for(int i=1; i<=10; i++) {
        cout << i << " ";                    // inner i, scope is the for loop
    }
    cout << endl << i << endl;               // outer i


    cout << endl;
    return 0;
}
