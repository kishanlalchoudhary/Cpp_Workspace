#include<iostream>
using namespace std;

class Base{
    public:
        int base_var = 1;
        virtual void display(){
            cout<<"Displaying Base class variable base_var "<<base_var<<endl;
        }
};

class Derived: public Base{
    public:
        int derived_var = 2;
        void display(){
            cout<<"Displaying Derived class variable base_var "<<base_var<<endl;
            cout<<"Displaying Derived class variable derived_var "<<derived_var<<endl;
        }
};

int main(){

    // Virtual Functions in C++

    Base *base_pointer;
    Base base_obj;
    Derived derived_obj;

    base_pointer = &derived_obj;
    base_pointer->display();

    return 0;
}