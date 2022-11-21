#include<iostream>
using namespace std;

template <class T>
class vector{
    public:
        int size;
        T *arr;
        vector(int m){
            size = m;
            arr = new T[size];
        }

        T dotProduct(vector &v){
            T d = 0;
            for(int i=0; i<size; i++){
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main(){

    // Writing our first C++ Template in VS code

    // For int vector;
    vector<int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector<int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;
    int a = v1.dotProduct(v2);
    cout<<a<<endl;

    // For float vector;
    vector<float> v3(3);
    v3.arr[0] = 1.4;
    v3.arr[1] = 3.3;
    v3.arr[2] = 0.1;
    vector<float> v4(3);
    v4.arr[0] = 0.1;
    v4.arr[1] = 1.9;
    v4.arr[2] = 4.1;
    float b = v3.dotProduct(v4);
    cout<<b<<endl;

    return 0;
}