#include<iostream>
using namespace std;
//Calculator for doing simple operations like +,-,*,/
int main(){
    
    float n1,n2;
    cout<<"Enter two numbers : ";
    cin>>n1>>n2;
    char op;
    cout<<"Enter a operator : ";
    cin>>op;

    switch(op)
    {
        case '+':
            cout<<n1+n2;
            break;
        case '-':
            cout<<n1-n2;
            break;
        case '*':
            cout<<n1*n2;
            break;
        case '/':
            cout<<n1/n2;
            break;
        default:
            cout<<"Try another operator";
            break;
    }

    return 0;
}