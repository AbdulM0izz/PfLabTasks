#include <iostream>
using namespace std;

int main() {
    int age;
    double income;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your annual income: ";
    cin >> income;

    const int minAge = 21;
    const int maxAge = 60;
     double minIncome = 50000.0;

    if (age >= minAge && age <= maxAge && income >= minIncome) {
        cout << "You are eligible for the loan." << endl;
    } else {
        cout << "You are not eligible for the loan." << endl;
    }

    return 0;
}