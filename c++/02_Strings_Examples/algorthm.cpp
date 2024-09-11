#include <iostream>
using namespace std;

int main(){
    string word;
    cout << "Enter a five letter word: ";
    cin >> word;

    cout << word << endl;

    char c = word[0];   //backup first letter
    word[0] = word[4];  //replace first letter with the last letter
    word[4] = c;        //replace last with backup of first

    cout << word << endl;
    cout << endl;

    return 0;





}