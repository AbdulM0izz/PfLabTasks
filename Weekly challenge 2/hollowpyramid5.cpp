#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++)
            cout << " ";
        
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i || i == rows - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        
        cout << endl;
    }
    
    return 0;
}