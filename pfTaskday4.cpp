#include <iostream>
using namespace std;
int main(){
	
	cout<<"Enter any number to check"<<endl;
	
	int n;
	cin>>n;
	
	if( n>0){
		cout<<"Positive"<<endl;
	}
	else if(n<0){
		cout<<" Negative "<<endl;
	}
	else{
		cout<<"Zero"<<endl;
	}
}