#include<iostream>
#include<math.h>
using namespace std;
// Check given no is armstrong no or not 
// Armstrong no is no if its digits are cubed and added then we get the same no then it is a Armstrong number
int main(){

    int n;
    cin>>n;
    int sum = 0;
    int original = n;

    while(n>0){
        int digit = n%10;
        sum += pow(digit,3);
        n/=10;
    }
    if (sum==original){
        cout<<"It is a Armstrong Number"<<endl;
    }
    else{
        cout<<"It is not a Armstrong Number"<<endl;
    }
    return 0;
}