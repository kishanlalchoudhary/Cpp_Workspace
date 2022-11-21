#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// call by value --> This will not swap actual parameters
void swap(int a, int b){ // temp a  b
    int temp = a;        // 4    4  5
    a = b;               // 4    5  5
    b = temp;            // 4    5  4
}

// call by reference using pointers --> This will swap the actual parameters
void swapPointer(int* a, int* b){ // temp a  b
    int temp = *a;                // 4    4  5
    *a = *b;                      // 4    5  5
    *b = temp;                    // 4    5  4
}

// call by reference using C++ reference Variables --> This will swap the actual parameters
void swapReferenceVar(int &a, int &b){ // temp a  b
    int temp = a;                      // 4    4  5
    a = b;                             // 4    5  5
    b = temp;                          // 4    5  4
}

int main(){

    // Call by Value and Call by Reference
    int a = 4, b = 5;
    cout<<"The sum of 4 and 5 is "<<sum(a, b)<<endl;

    cout<<"Before swapping numbers are "<<a<<" and "<<b<<endl;
    swap(a, b);
    cout<<"After swapping numbers are "<<a<<" and "<<b<<endl;

    swapPointer(&a, &b);
    cout<<"After pointer swapping numbers are "<<a<<" and "<<b<<endl;

    swapReferenceVar(a, b);
    cout<<"After Reswapping using Refernce variables numbers are "<<a<<" and "<<b<<endl; 

    return 0;
}