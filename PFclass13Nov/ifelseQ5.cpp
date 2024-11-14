#include <iostream>
using namespace std;
int main (){
   cout<<" Enter your Age to check weather you are \n";
   cout<< " Eligible for senior citizenship \n";
   int age;
   cin>>age;
   
   if(age>=65){
   cout<<"You are eligible for senior citizenship: "<<endl;
   }else{
   cout<<"You are not eligible: "<<endl;
   }
   
return 0;
}