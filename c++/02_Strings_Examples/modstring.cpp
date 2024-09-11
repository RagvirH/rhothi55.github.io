#include <iostream>
using namespace std;

int main(){
    string QCC = "this isQCC!";
    cout << QCC << endl;
    QCC.insert(7, " ");
    cout << QCC << endl;
    QCC.replace(0, 1, "T");
    cout << QCC << endl;
    QCC.erase(11,1);
    cout << QCC << endl;
    QCC.replace(7, 4, " the City University of New York");
    cout << QCC << endl;
    QCC.append(".");
    cout << QCC << endl;
    return 0;
}