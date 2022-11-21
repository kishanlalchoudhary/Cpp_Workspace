#include<iostream>
using namespace std;
// Factorial of number
int main(){
    int n;
    cin>>n;

    int product=1;

    for (int i = 1; i<=n; i++){
        product *= i;
    }
    cout<<product<<endl;

    return 0;
}