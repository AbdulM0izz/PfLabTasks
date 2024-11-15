#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your score (0-100): ";
    cin >> score;

    if (score >= 90) {
        cout << "Achievement Level: Excellent" << endl;
    } 
    else if (score >= 80) {
        cout << "Achievement Level: Very Good" << endl;
    } 
    else if (score >= 70) {
        cout << "Achievement Level: Good" << endl;
    } 
    else if (score >= 60) {
        cout << "Achievement Level: Fair" << endl;
    } 
    else if (score >= 50) {
        cout << "Achievement Level: Pass" << endl;
    } 
    else {
        cout << "Achievement Level: Fail" << endl;
    }

    return 0;
}