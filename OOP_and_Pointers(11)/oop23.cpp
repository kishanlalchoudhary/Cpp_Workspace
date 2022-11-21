#include<iostream>
using namespace std;

// Syntax for inheriting in multipile inheritance
// class Derived: visibility-mode base1, visibility-mode base 2
// {
//     Class body of class "Derived"
// };

class Base1{
    protected:
        int base1Int;
    public:
        void set_base1Int(int a){
            base1Int = a;
        }
};

class Base2{
    protected:
        int base2Int;
    public:
        void set_base2Int(int b){
            base2Int = b;
        }
};

class Base3{
    protected:
        int base3Int;
    public:
        void set_base3Int(int b){
            base3Int = b;
        }
};

class Derived: public Base1, public Base2, public Base3{
    public:
        void show(){
            cout<<"The value of Base1 is "<<base1Int<<endl;
            cout<<"The value of Base2 is "<<base2Int<<endl;
            cout<<"The value of Base2 is "<<base3Int<<endl;
            cout<<"The sum of these values is "<<base1Int+base2Int+base3Int<<endl;
        }
};

/*
The inherited derived class will look something like this:
Data Members:
    base1Int  --> protected
    base2Int  --> protected

Member Functions:
    set_base1Int --> public
    set_base2Int --> public
    show() --> public
*/

int main(){

    // Multiple Inheritance Deep dive

    Derived der;
    der.set_base1Int(25);
    der.set_base2Int(18);
    der.set_base3Int(5);
    der.show();

    return 0;
}