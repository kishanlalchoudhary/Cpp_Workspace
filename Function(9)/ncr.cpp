//calculate ncr

#include<iostream>
using namespace std;

int factorial(int num){
    int product = 1;
    for (int i=2; i<=num; i++){
        product *= i;
    }
    return product;
}
int main(){
    int n,r;
    cin>>n>>r;

    int ans = factorial(n) / (factorial(n-r) * factorial(r));
    cout<<ans<<endl;
    return 0;
}