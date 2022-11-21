#include<iostream>
using namespace std;

int main(){

    // Reference --> A reference variable is a 'reference' to an  existing variable, and it is created with the & operator

    int n1 = 3;
    // int &b; // Throws error
    int &n2 = n1; // reference to num
    cout<<n1<<endl;
    cout<<n2<<endl;
    // n2 is like the another name to n1 variable no separate memory is allocated

    // Pointers in Cpp
    // What is a pointer? -----> data type to store address of other data types

    /* Three ways to declare a pointer
        string* mystring; // prefered
        string *mystring;
        string * mystring;
    */
    int a = 3;
    int *b;
    b = &a; 

    // & --> (Adress of) operator
    cout<<"The adress of a is "<<&a<<endl;
    cout<<"The adress of a is "<<b<<endl;

    // * --> (value at) Derefernce operator
    cout<<"The value at adress b is "<<*b<<endl;

    // Modify the pointer value
    // We can change the pointers value but that will also change the value of the original variable 
    *b = 6;
    cout<<a<<endl;

    // Pointer to pointer
    int **c = &b;
    cout<<"The value of b is "<<&b<<endl;
    cout<<"The value of b is "<<c<<endl;
    cout<<"The value at adress b is "<<*c<<endl;
    cout<<"The value at adress value_at(value_at(c)) "<<**c<<endl;

    /* Note : the * sign can be confusing
       1 when used in declaration it creates a pointer variable
       2 when not used in declaration, it acts as a dereference operator
    */

    return 0;
}