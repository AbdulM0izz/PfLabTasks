#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 10) {
        if (number % 2 == 0) {
            cout << number << " is even and greater than 10." << endl;
        } else {
            cout << number << " is odd and greater than 10." << endl;
        }
    } else {
        if (number % 2 == 0) {
            cout << number << " is even but not greater than 10." << endl;
        } else {
            cout << number << " is odd and not greater than 10." << endl;
        }
    }

    return 0;
}
