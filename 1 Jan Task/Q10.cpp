#include <iostream>
using namespace std;

// Function that modifies a parameter passed by value
void modifyValue(int x) {
    cout << "Before modification inside function: " << x << endl;
    x = 10;  // Modify the parameter value
    cout << "After modification inside function: " << x << endl;
}

int main() {
    int a = 5;
    cout << "Before function call: " << a << endl;
    modifyValue(a);  // Pass by value
    cout << "After function call: " << a << endl;  // 'a' remains unchanged
    return 0;
}
