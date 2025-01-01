#include <iostream>
using namespace std;
int fact (int num ){
    int fact = 1;
    for ( int i =0; i <=num; i++){
        fact *=1;
    }
    return fact;
}
void data (){
    cout << "Abdul Moiz"<<endl;
}

string data2(){
    cout << "Abdul Moiz";
}
int main (){
    cout << "Factorial = " << fact (10) << endl;
    data ();
    data2();
    




    return 0;
}