#include<iostream> 
using namespace std;

int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

void print(int num){
    cout<<num<<endl;
}

int main(){
    int a=2;
    int b=3;
    print(a);
    print(b);
    print(8);
    cout<<add(a,b);
    return 0;
}
