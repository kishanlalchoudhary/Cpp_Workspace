// Program to check whether a number is divisible by 2 and 3 or divisible by one of them

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if (n%2==0 && n%3==0)
    {
        cout<<"It is divisible by both 2 and 3";
    }
    else if (n%2==0 || n%3==0)
    {
        cout<<"It is divisible by 2 or 3";
    }
    else
    {
        cout<<"It is not divisible by 2 or 3  both";
    }
    
    return 0;
}