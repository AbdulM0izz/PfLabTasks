#include <iostream>
using namespace std;

// Function Declaration (Prototype)
void printMessage(string message);  // Declaring the function prototype

int main() {
    // Calling the function
    printMessage("Hello, World!");
    printMessage("C++ is awesome!");
    return 0;
}

// Function Definition (Separate from Declaration)
void printMessage(string message) {
    cout << message << endl;  // Function body
}
