#include<iostream>
using namespace std;

int main(){

    // Exception Handling

    int num;
    int denum;
    int output;

    cout<<"Please Enter the Numerator and Denominator for the Division"<<endl;
    cin>>num>>denum;

    try{
        if (denum == 0){
            throw denum;
            cout<<"Statement after throw"; // After throwing no other line is executed
        }
        else{
            output = num/denum;
            cout<<"The output after the Division is : "<<output<<endl;
        }

    }

    catch(int d){
        cout<<"You cannot enter 0 in denominator while doing the division operation! "<<endl;
    }

    return 0;
}