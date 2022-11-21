//Print factorial of a number

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
    int num;
    cin>>num;

    int ans = factorial(num);
    cout<<ans<<endl;
    return 0;
}