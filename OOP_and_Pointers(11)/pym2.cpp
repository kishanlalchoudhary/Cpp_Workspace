#include<iostream>
using namespace std;

class Base{
    public:
        int base_var;
        void display(){
            cout<<"Displaying Base class variable base_var "<<base_var<<endl;
        }
};

class Derived: public Base{
    public:
        int derived_var;
        void display(){
            cout<<"Displaying Base class variable base_var "<<base_var<<endl;
            cout<<"Displaying Base class variable derived_var "<<derived_var<<endl;
        }
};

int main(){

    // Pointers to Derived class

    Base *base_pointer;
    Base base_obj;
    Derived derived_obj;
    base_pointer = &derived_obj; // Base class pointer is pointing to derived class

    base_pointer->base_var = 34;
    // base_pointer->derived_var = 134; // will throw an error
    base_pointer->display(); // As ponter is of Base class the function of base class is invoked.

    Derived *derived_pointer;
    derived_pointer = &derived_obj;
    derived_pointer->derived_var = 100;
    derived_pointer->display();

    return 0;
}