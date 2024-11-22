#include <iostream>

using namespace std;

int main() {
    int rows, i, j, space = 0;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= space; j++) {
            cout << " ";
        }
        space++;

        for (j = 1; j <= 2 * i - 1; j++) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}