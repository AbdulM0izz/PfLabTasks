#include <iostream>
using namespace std;

// Function Definition: Calculates the sum of two integers
int calculateSum(int a, int b) {
    return a + b;  // Function logic: adding the two integers
}

int main() {
    int num1, num2;
    
    // Ask user for input
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    // Call the function and store the result
    int sum = calculateSum(num1, num2);
    
    // Output the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
