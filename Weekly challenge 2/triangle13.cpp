#include <iostream>

using namespace std;

int main() {
    int n = 5; 

    
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;


    for (int i = 1; i < n - 1; i++) {
        cout << "*";
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        cout << "*";
        for (int j = i; j < n - 1; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    return 0;
}
