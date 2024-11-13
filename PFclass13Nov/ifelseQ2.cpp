#include <iostream>
using namespace std;
int main(){

cout<<"Enter a year: "<<endl;
int year;
cin>>year;

if((year%4==0 && year% 100!=0)||(year % 400==0 )){
    cout<<year<<" Is leap year : "<<endl;
}
else{
    cout<<year<<" Is not leap year: "<<endl;
}
    return 0;
}