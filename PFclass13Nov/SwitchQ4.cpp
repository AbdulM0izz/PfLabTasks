#include <iostream>
using namespace std;

int main() {
    int hour;

    cout << "Enter hour (0-24): ";
    cin >> hour;

    if (hour >= 0 && hour <= 24) {
        switch (hour / 6) {
            case 0:
            case 1:
            case 2:
                cout << "Night" << endl;
                break;
            case 3:
            case 4:
                cout << "Morning" << endl;
                break;
            case 5:
            case 6:
                cout << "Afternoon" << endl;
                break;
            case 7:
            case 8:
                cout << "Evening" << endl;
                break;
        }
    } else {
        cout << "Invalid hour. Please enter a number between 0 and 24." << endl;
    }

    return 0;
}