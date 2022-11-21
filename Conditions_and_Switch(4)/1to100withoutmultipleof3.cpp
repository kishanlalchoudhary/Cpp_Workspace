#include<iostream>
using namespace std;

int main(){
    
    for(int i=0; i<101; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}