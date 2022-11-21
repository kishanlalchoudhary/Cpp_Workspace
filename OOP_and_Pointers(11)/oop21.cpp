#include<iostream>
using namespace std;

// Single inheritance using protected keyword and also inheritance table

class Base{
    protected:
        int a;
    private:
        int b;
};

/*

For a protected member:

                            Public derivation    Private Derivation     Protected Derivation
    1. Private members        Not Inherited         Not Inherited           Not Inherited
    2. Protected members        Protected              Private                 Protected
    3. Public members            Public                Private                 Protected

*/

class Derived : protected Base{
    
};

int main(){

    Base b;
    Derived d;
    // cout<< d.a; // will not work since a is protected in both base and derived class

    return 0;
}