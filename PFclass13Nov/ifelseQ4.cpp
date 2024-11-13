#include <iostream>
using namespace std;
int main(){
    
    int marks;
    cout<<"Enter your marks: "<<endl;
    cin>>marks;
    
    if(marks > 50 && marks < 100){
        cout<<"Pass :"<<endl;
    }
 else if(marks < 50 && marks<100){
        cout<<"fail:"<<endl;
    }
	else{
		cout<<"Enter Valid Marks: "<<endl;
	}
    return 0;
}
