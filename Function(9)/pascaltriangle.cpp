//print pascals triangle whose terms are binomial coefficient till n rows
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/

#include<iostream>
using namespace std;

int factorial(int num){
    int product = 1;
    for (int i=2; i<=num; i++){
        product *= i;
    }
    return product;
}
void coefficient(int n){
    for(int r=0; r<=n; r++){
        int ans = factorial(n) / (factorial(n-r) * factorial(r));
        cout<<ans<<" ";
    }
}
int main(){
    int n;
    cin>>n;

    for (int i=0; i<=n; i++){
        coefficient(i);
        cout<<endl;
    }
}