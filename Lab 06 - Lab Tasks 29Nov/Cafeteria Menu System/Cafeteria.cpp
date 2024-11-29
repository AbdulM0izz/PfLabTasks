#include <iostream>
using namespace std;


int main() {
    int menu;
    int totalBill = 0;

    cout << "Cafeteria Menu  " << endl;
    cout << "\n1. Tea $2 " << endl;
    cout << "2. Coffee $3 " << endl;
    cout << "3. Sandwich $4 " << endl;
    cout << "4. Burger $5 " << endl;
    cout << "5. FOR EXIT AND TOTAL BILL " << endl;

    

    do {
    	cin >> menu;
        switch (menu) {
        	
            case 1:
                cout << "Tea Added In Bill " << endl;
                totalBill += 2;
                break;
            case 2:
                cout << "Coffee Added In Bill " << endl;
                totalBill += 3;
                break;
            case 3:
                cout << "Sandwich Added In Bill " << endl;
                totalBill += 4;
                break;
            case 4:
                cout << "Burger Added In Bill " << endl;
                totalBill += 5;
                break;
            case 5:
                cout << "Exiting....." << endl;
                break;
                default:
                	cout<<"Invalid Num"<<endl;
        }
    } while (menu != 5);

    cout << "Total Bill $ " << totalBill << endl;

    return 0;
}