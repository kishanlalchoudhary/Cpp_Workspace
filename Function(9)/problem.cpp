
//Check Pythagorian triplet or not

#include<iostream>
#include<math.h>
using namespace std;

bool isPyTri(int num1, int num2, int num3){
    if(pow(num1,2) == pow(num2,2) + pow(num3,2)){
        return true;
    }else if (pow(num2,2) == pow(num1,2) + pow(num3,2)){
        return true;
    }else if(pow(num3,2) == pow(num2,2) + pow(num1,2)){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;

    if (isPyTri(num1,num2,num3)) {
        cout<<"They are Pythagorian triplet";
    }else {
        cout<<"They are not a Pythagorian triplet";
    }

    return 0;
}