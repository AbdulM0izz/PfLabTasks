#include <iostream>

using namespace std;

int main() {
    int rows, i, j, space;

    cout << "Enter the number of rows: ";
    cin >> rows;

    space = rows - 1;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= space; j++) {
            cout << " ";
        }
        space--;

        for (j = 1; j <= 2 * i - 1; j++) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}