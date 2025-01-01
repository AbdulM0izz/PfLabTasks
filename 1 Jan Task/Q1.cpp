#include <iostream>
using namespace std;

// Function with two integer parameters
void display(int a, int b) {
    cout << "Integer values: " << a << ", " << b << endl;
}

// Function with two float parameters
void display(float a, float b) {
    cout << "Float values: " << a << ", " << b << endl;
}

// Function with one integer parameter
void display(int a) {
    cout << "Single integer: " << a << endl;
}

// Function with one float parameter
void display(float a) {
    cout << "Single float: " << a << endl;
}

int main() {
    // Calling the overloaded functions
    display(10, 20);        
    display(10.5f, 20.5f);  
    display(30);            
    display(40.5f);     

    return 0;
}
