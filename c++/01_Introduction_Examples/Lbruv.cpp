#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Course Description:" << endl;
    cout << "ET-575 is a course in procedural programming and algorithmic\n";
    cout << "concepts using the C++ language." << endl << endl;
    cout << "ET-575 Class Schedule:" << endl;
    cout << left << setw(15) << "Time"       << setw(15) << "Location" << "\n";
    cout << left << setw(15) << "--------"   << setw(15) << "--------" << "\n";
    cout << left << setw(15) << "9:00 AM"    << setw(15) << "ROOM T18" << "\n";
    return 0;

}