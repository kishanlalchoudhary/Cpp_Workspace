#include<iostream>
using namespace std;

template<class T>
class Harry{
    public:
        T data;
        Harry (T a){
            data = a;
        }
        void display();
};

template<class T>
void Harry<T>::display(){
    cout<<data<<endl;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main(){

    // Member Function Templates and Overloading Template Functions in C++

    Harry<char> h1('k');
    h1.display();
    Harry<float> h2(9.9);
    h2.display();
    Harry<int> h3(7);
    h3.display();

    func(5); // Exact match takes the highest priority
    func('k');

    return 0;
}