#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:

        Complex(){
            a = 0;
            b = 0;
        }

        Complex(int x){
            a = x;
            b = 0;
        }

        Complex(int x, int y){
            a = x;
            b = y;
        }

        void printNumber(){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){

    // Constructor Overloading

    Complex c3;
    c3.printNumber();
    
    Complex c2(7);
    c2.printNumber();

    Complex c1(4, 6);
    c1.printNumber();

    return 0;
}