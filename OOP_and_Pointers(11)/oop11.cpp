#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    // Creating a constructor
    // Constructor is a special member function with same name as of the class.
    // It is automatically invoked whenever an object is constructed.
    // It is used to initialize the objects of its class
    // for constructor there is no retuntype
    Complex(void); // constructor declaration
    void print(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex :: Complex(void) // This is a default constructor as it accepts no arguments
{
    a = 10;
    b = 0;
}

int main(){

    // Constructor

    Complex c1, c2, c3;
    c1.print();
    c2.print();
    c3.print();

    return 0;
}

/*

Characteristics of Constructors

1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address 

*/