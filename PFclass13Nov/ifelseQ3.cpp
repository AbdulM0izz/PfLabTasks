#include <iostream>
using namespace std;
int main(){
    cout<<"Enter upper case letters: "<<endl;
    char ch;
    cin>>ch;

    if(ch > 64 && ch < 91 ){
        cout<<ch<<" is upper case: "<<endl; 
    }


    return 0;
}