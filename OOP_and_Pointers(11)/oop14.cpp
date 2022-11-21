#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    public:
        Simple(int a, int b = 9){
            data1 = a;
            data2 = b;
        }

        void printData(){
            cout<<"The value of data is "<<data1<<" and "<<data2<<endl;
        }
};

int main(){

    // Constructors with default arguments

    Simple s1(2, 10), s2(3);
    s1.printData();
    s2.printData();

    return 0;
}