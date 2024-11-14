
#include <iostream>
using namespace std;

int main() {
    cout << "Enter your monthly income\n";
    int income;
    cin >> income;

    if (income > 70000) {
        cout << "You have to pay 8 percent tax for your income\n";
    } 
    else if (income > 50000) {
        cout << "You have to pay 5 percent tax for your income\n";
    } 
    else if (income > 30000) {
        cout << "You have to pay 3 percent for your income\n";
    } 
    else {
        cout << "No Tax on your Income " << endl;
    }

    return 0;
}