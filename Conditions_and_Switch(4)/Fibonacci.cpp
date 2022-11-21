#include<iostream>
using namespace std;
// Fibonacci series
int main(){
    int n;
    cin>>n;

    int n1=0;
    int n2=1;

    cout<<n1<<endl<<n2<<endl;
    
    for (int i = 0; i<n; i++){
        int n3 = n1+n2;
        cout<<n3<<endl;

        n1 = n2;
        n2 = n3;
    }
    return 0;
}