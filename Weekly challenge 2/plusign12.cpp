#include <iostream>

using namespace std;

int main() {
    int n = 5; // Size of the plus sign
    
    for (int i = 0; i < n; i++) {
        cout << "+";
    }
    cout << endl;
    for (int i = 0; i < n - 2; i++) {
        cout << "  +" << endl;
    }
    for (int i = 0; i < n; i++) {
        cout << "+";
    }
    cout << endl;

    return 0;
}