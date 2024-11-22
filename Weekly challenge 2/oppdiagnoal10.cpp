#include <iostream>
using namespace std;
int main(){
    int rows =5;
    int columns=5;

    for( int i=1; i<=5; i++){
        for (int j=5; j<=0; j--){
            cout<<" ";
        }
        for ( int k=1; k<=5; k++){
            cout<<"*";
        }
        cout<<endl;
    }

}
