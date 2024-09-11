#include <iostream>
using namespace std;

int main() {
    int n ,m ,f;

    cout << "Enter a value for n: ";
    cin >> n;
    cout << "Enter a multiple for n: ";
    cin >> m;
    cout << "Enter a factor for n: ";
    cin >> f;

    cout << "Is " << f << "a factor of " << n << " ? " << (n%f== 0) << endl;
    cout << "Is " << f << "a multiple of " << n << " ? " << (m%n== 0) << endl;

    cout << endl;
    return 0;
}