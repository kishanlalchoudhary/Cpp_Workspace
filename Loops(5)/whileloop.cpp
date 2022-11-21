#include<iostream>
using namespace std;

int main(){
    //take input till user not give negative number
    int num1;
    cin>>num1;

    while(num1>0) {
        cout<<num1<<endl;
        cin>>num1;
    }
    //do while loop
    int num2;
    cin>>num2;

    do{
        cout<<num2<<endl;
        cin>>num2;
    }while(num2>0);
    
    return 0;
}