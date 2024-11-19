#include <iostream>
using namespace std;
int main(){
    int n= 9;
   for (int i = 0 ; i < n ; i++){
    //spaces
    for (int j = 0; j < i; j++){
        if(i != 0){
            cout << " ";
        }
    }
    //star
    for(int j = 1; j <= n - i; j++){
        cout << "* ";
    }

    cout << endl;
   }
     
    return 0;
}
