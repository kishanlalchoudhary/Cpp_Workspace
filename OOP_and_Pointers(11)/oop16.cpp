#include<iostream>
using namespace std;

class Number{
    int a;
    public:

        Number(){
            a = 0;
        }

        Number(int num){
            cout<<"Original constructor is called"<<endl;
            a = num;
        }

        // When no copy constructor is found, compiler supplies its own copy constructor
        Number(Number &obj){
            cout<<"Copy Constructor is invoked"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main(){

    // Copy Constructors

    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // copy constructor is not called

    Number z3 = z; //copy constructor is invoked

    return 0;
}