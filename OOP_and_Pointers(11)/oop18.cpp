#include<iostream>
using namespace std;

// Base class
class Employee{
    public:
        int id;

        float salary;
        Employee(){
            salary = 34.0;
        }
        Employee(int _id){
            id = _id;
            salary = 34.0;
        }

        void displayEmployee(){
            cout<<"Employee id is "<<id<<" and salary is "<<salary<<endl;
        }
};

/*
    Derived Class syntax
    class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
    {
        class members/methods/etc...
    }
    visibility-mode : private, public, protected;
*/

/* Note :
    1. Default visibility mode is private
    2. Public visibility Mode: Public members of the base class becomes Public members of the derived class
    3. Private Visibility Mode: Public members of the base class become Private members of the derived class
    4. Private members are never inherited
*/

class Programmer : Employee{
    public:
        int languageCode = 9;

        Programmer(int __id){
            id = __id;
        }

        void displayProgrammer(){
            cout<<"Programmer id is "<<id<<" and salary is "<<salary<<endl;
            cout<<"Also language code is "<<languageCode<<endl;
        }
};

int main(){

    Employee harry(1), rohan(2);
    harry.displayEmployee();
    rohan.displayEmployee();

    Programmer skillf(1);
    skillf.displayProgrammer();

    return 0;
}