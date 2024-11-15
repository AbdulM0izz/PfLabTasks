#include <iostream>
using namespace std;

int main() {
    cout << "Enter Any integer\n";
    int integer;
    cin>>integer;
    
    if(integer<0){
    cout<<"Negative"<<endl;
    }
    else if( integer==0){
    cout<<"Zero"<<endl;
    }
    else if( integer>0){
    cout<<"Positive "<<endl;
    }
    

    return 0;
}