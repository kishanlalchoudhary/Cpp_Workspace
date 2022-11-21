#include<iostream>
using namespace std;

int main(){

    // Pointers and Arrays, Pointer Arithmetic

    int marks[5] = {5, 6, 2, 3}; // other elements are bydefault initialized to 0

    // int *ptr = &marks; is wrong as marks itself 
    int *ptr = marks; 

    cout<<"The value of marks[0] is "<<*ptr<<endl; 
    // Pointer Arithmetic : address_new = adress_current + i * sizeof(data_type)
    cout<<"The value of marks[1] is "<<*(ptr+1)<<endl; 
    cout<<"The value of marks[1] is "<<*(ptr+2)<<endl; 
    cout<<"The value of marks[1] is "<<*(ptr+3)<<endl; 
    cout<<"The value of marks[1] is "<<*(ptr+4)<<endl;

    cout<<*(ptr++)<<endl; 
    cout<<*(ptr)<<endl;
    cout<<*(++ptr)<<endl;
    cout<<*ptr++<<endl; 
    cout<<*ptr<<endl; 

    return 0;
}