// Program to check whether given no is equal to, less than or more than 10.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if (n>10)
    {
        cout<<"It is greater than 10";
    }
    else if (n<10)
    {
        cout<<"It is less than 10";
    }
    else
    {
        cout<<"It is egual to 10";
    }
    
    return 0;
}