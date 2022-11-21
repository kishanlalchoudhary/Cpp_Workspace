#include<iostream>
using namespace std;

/*
template<class T1, class T2, .... (comma separated)>
class nameOfClass{
    // body
}
*/

template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;

        myClass(T1 data1, T2 data2){
            this->data1 = data1;
            this->data2 = data2;
        }

        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};

int main(){

    // Templates with Multiple Parameters(one, two or more than two)

    myClass<int, char> obj(1, 'c');
    obj.display();

    return 0;
}