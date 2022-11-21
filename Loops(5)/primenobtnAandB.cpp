//Print prime no between two numbers

#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    cin>>a>>b;

    int i,j;

    for (i=a+1; i<b; i++){
        for(j=2; j<i; j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            cout<<j<<endl;
        }
    }
    return 0;
}