#include<iostream>
using namespace std;

/*

Case1:
class B: public A{
    // Order of execution of constructor --> first A() then B()
};

Case2:
class A: public B, public c{
    // Order of execution of constructor --> first B() then C() and then A()
}

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor --> first C() then B() and then A()
}

*/

class Base1{
    int data1;
    public:
        Base1(int _data1){
            data1 = _data1;
            cout<<"Base1 class constructor called"<<endl;
            cout<<data1<<endl; 
        }
        void printData1(){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int _data2){
            data2 = _data2;
            cout<<"Base2 class constructor called"<<endl;
            cout<<data2<<endl; 
        }
        void printData2(){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

class Derived: public Base1, public Base2{
    int derived1, derived2;
    public:
    // order of constructors only depend on the order in which classes are inherited
        Derived(int a, int b, int c, int d): Base2(a), Base1(b){
            derived1 = c;
            derived2 = d;
            cout << "Derived class constructor called"<<endl;
        }
        void printDerived(){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived1 is "<<derived2<<endl;
        }
};

int main(){

    // Constructors in Derived Class

    Derived harry(1, 2, 3, 4);
    harry.printData1();
    harry.printData2();
    harry.printDerived();

    return 0;
}