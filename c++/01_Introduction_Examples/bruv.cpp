#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Course Description:" << endl;
    cout << "ET-575 is a course in procedural programming and algorithmic" << endl;
    cout << "concepts using the C++ language." << endl;
    cout << "" << endl;
    cout << "ET-575 Class Schedule:" << endl;
    cout << "" << endl;
    cout << "Time\t\t\t\t\t\tLocation" << endl;
    cout << "------\t\t\t\t\t\t--------" << endl;
    cout << "9.00\tAM\t\t\t\t\tRoom\tT18" << endl;
    cout << left << setw(15) << "Time" << setw(20) << "Location" << endl;
    cout << left << setw(15) << "--------" << setw(10) << "--------" << endl;

    return 0;
}

