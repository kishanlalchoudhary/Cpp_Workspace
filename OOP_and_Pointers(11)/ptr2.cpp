#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main(){

    // Pointers to Objects and Arrow Operator in Cpp

    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr1 = new Complex; // Dynamic object creation using pointer

    // Arrow operator

    // (*ptr).setData(2, 67); is exactly same as
    ptr1->setData(4, 50);
    // (*ptr).getData(); is as good as
    ptr1->getData();

    // Array of Objects

    Complex *ptr2 = new Complex[4];

    ptr2->setData(1,2);
    ptr2->getData();

    (ptr2+1)->setData(10,20);
    (ptr2+1)->getData();
    
    return 0;
}