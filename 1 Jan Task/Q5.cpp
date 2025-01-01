#include <iostream>
#include <cmath>  
using namespace std;

// Function with int return type
int add(int a, int b) {
    return a + b;  // Returns the sum of two integers
}

// Function with double return type
double calculateSquareRoot(double number) {
    return sqrt(number);  // Returns the square root of the number
}

// Function with void return type
void printMessage() {
    cout << "This is a function with void return type!" << endl;
}

int main() {
    int sum = add(10, 5);              // Call add() function with int return type
    double result = calculateSquareRoot(25.0);  // Call calculateSquareRoot() with double return type
    printMessage();                    // Call printMessage() with void return type

    // Output the results of the functions with return types
    cout << "The sum of 10 and 5 is: " << sum << endl;
    cout << "The square root of 25.0 is: " << result << endl;

    return 0;
}
