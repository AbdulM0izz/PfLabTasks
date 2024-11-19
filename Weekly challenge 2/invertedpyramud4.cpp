#include <iostream>
using namespace std;
int main(){
    int n=5;
    for (int i= 0; i < n ; i++){
        //spaces
        for (int j = i ; j <= i ; j ++){
            if(i != 0){
                cout << " ";
            }
        }
        //stars
        for(int j = n ; j > 0 ; j--){
            cout << "* ";
        }
        cout << endl;
    }



    return 0;
}