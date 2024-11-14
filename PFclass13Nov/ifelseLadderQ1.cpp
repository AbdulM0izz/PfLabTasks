#include <iostream>
using namespace std;
int main (){
   
   cout<<" Enter your marks\n";
   int marks;
   cin>>marks;
   
   if(marks >= 90){
   cout<<"Garde: A+"<<endl;
   }
   else if(marks>=80){
   cout<<"Garde: B"<<endl;
   }
   else if(marks>=70){
   cout<<"Garde: C "<<endl;
   }
   
return 0;
}