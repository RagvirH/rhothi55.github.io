#include <iostream>
using namespace std;

int main() {
    cout << endl;

    bool goMovies, goDinner;
    cout << "Do you want to goto the movies? (0/1) ";
    cin >> goMovies;
    cout << "Do you want to go to dinner? (0/1)";
    cin >> goDinner;

    if (goDinner==1 && goMovies ==1){                       // T T
        cout << "You cannot do both" << endl;
    }
    else if (goDinner==0 && goMovies ==0){                  // F F
        cout << "You must do something" << endl;
    }
    else if (goMovies ==1){                                 // F T
        cout << "You are going to the movies. " << endl;
    }
    else {                                                  // T F
        cout << "You are going to dinner. " << endl;
    }

    cout << endl;
    return 0;
}