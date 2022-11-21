
// Static Data Members and Methods 

#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count; // static datamember is declared in class but defined outside class

    public :
        void setData(void){
            cout<<"Enter the id"<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of this employee is " << id << " and this is employee number " << count <<endl;
        }

        // A static member function can be called even if no objects of the class exist.
        // A static member is shared by all the objects of a Class.
        // A static member function can only access static data memeber, other static memeber functions and other functions from outside the class.

        static void getCount(void){
            cout<<"The value of count is "<<count<<endl;
        }
};

// count is the static data member class Employee
int Employee :: count = 1000; // Default value is 0

int main(){

    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count = 1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();

    // The static functions are accessed using only the class name and the scope resolution operator ::
    // Employee::count; // Throws error as count is declared private
    Employee::getCount(); 

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}