#include <iostream>
using namespace std;
int main(){
    int n=5;
    //upper loop
    for ( int i=1; i<=n; i++){
     //spaces
     for (int j = 1; j<=n - i; j++){
        cout << " ";
     }
     //str
     for (int j = 1; j <= i; j++){
        cout << "*";
     }
     //str2
     for (int j = 1; j < i ; j++){
        cout << "*";
     }
     cout << endl;
    }
    //bottom loop
    for (int i = 1; i <= n - 1;i++){
    	//spaces
    	for (int j = 1; j <= i; j++){
    		cout << " ";
		}
		//str
		for (int j = 1; j <= n -i;j++){
			cout << "*";
		}
		//str
		for (int j = 1; j <= n -i-1;j++){
			cout << "*";
		}
		cout << endl;
	}
 
    return 0;
}
