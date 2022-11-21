//Print n terms of fibonacci series

#include<iostream>
using namespace std;

void fib(int num){
    int n1=0,n2=1;
    cout<<n1<<" "<<n2<<" ";

    for(int i = 1; i<=(num-2); i++){
        int n3 = n1+n2;
        cout<<n3<<" ";
        n1 = n2;
        n2 = n3;
    }
}

int main(){
    int a;
    cin>>a;
    fib(a);
    return 0;
}