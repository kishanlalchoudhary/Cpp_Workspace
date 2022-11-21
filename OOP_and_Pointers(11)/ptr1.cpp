#include<iostream>
using namespace std;

int main(){

    // Basic Example
    // int a = 4;
    // int *ptr = &a;
    // cout<<*ptr<<endl;

    // new operator
    // int *ptr = new int(40);
    float *ptr = new float(40.88);
    *ptr = 100.88;
    cout<<"The value at address ptr is "<<*(ptr)<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    *(arr+3) = 40;

    // delete operator
    delete arr;
    delete[] arr;

    cout<<"The value of arr[0] is "<<(arr[0])<<endl;
    cout<<"The value of arr[1] is "<<(arr[1])<<endl;
    cout<<"The value of arr[2] is "<<(arr[2])<<endl;
    cout<<"The value of arr[3] is "<<(arr[3])<<endl;

    return 0;
}