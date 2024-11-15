#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0 && num % 3 == 0) {
        cout << num << " is divisible by both 2 and 3." << endl;
    } else if (num % 2 == 0) {
        cout << num << " is divisible by 2 but not by 3." << endl;
    } else if (num % 3 == 0) {
        cout << num << " is divisible by 3 but not by 2." << endl;
    } else {
        cout << num << " is not divisible by either 2 or 3." << endl;
    }

    return 0;
}