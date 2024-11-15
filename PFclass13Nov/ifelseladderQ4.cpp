
#include <iostream>
using namespace std;

int main() {
      int month;
    cout<< "Enter month in number\n";
    cin >> month;
    
    if (month >=1 && month <= 2){
    cout<<" Winter "<<endl;
    }
    else if ( month >= 3 && month <= 5){
    cout<<"Spring"<<endl;
    }
    else if ( month >= 6 && month <= 8){
    cout<<"Summer "<<endl;
    }
    else if ( month >= 9 && month <= 11){
    cout<<" Autumn "<<endl;
    }
    else if ( month== 12){
    cout<< " Winter "<<endl;
    }
    else {
    cout<<" Enter month number between 1 to 12"<< endl;
    }
      
      
      return 0;
     
     }