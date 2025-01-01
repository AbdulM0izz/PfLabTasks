#include <iostream>
using namespace std;

// Function Definition: Calculates the square of a number
int square(int number) {
    return number * number;  // Return the square of the number
}

int main() {
    // Call the function multiple times with different arguments
    int result1 = square(4);    // Calling with argument 4
    int result2 = square(7);    // Calling with argument 7
    int result3 = square(10);   // Calling with argument 10
    
    //
    cout << "The square of 4 is: " << result1 << endl;
    cout << "The square of 7 is: " << result2 << endl;
    cout << "The square of 10 is: " << result3 << endl;
    
    return 0;
}
