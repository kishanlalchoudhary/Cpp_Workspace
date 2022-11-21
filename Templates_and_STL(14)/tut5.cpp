#include<iostream>
using namespace std;

float funcAverage1(int a, int b){
    float avg = (a+b)/2.0;
    return avg;
}

float funcAverage2(int a, float b){
    float avg = (a+b)/2.0;
    return avg;
}

template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

int main(){

    // Function Templates and Function Templates with Parameters

    // without using Template :
    float a;
    a = funcAverage1(5, 2);
    printf("The average of these numbers is %.3f", a);
    cout<<endl;
    float b;
    b = funcAverage2(5, 2.5);
    printf("The average of these numbers is %.3f", b);
    cout<<endl;

    // with using Template :
    float c;
    c = funcAverage<int, float>(5, 2.5);
    printf("The average of these numbers is %.3f", c);
    cout<<endl;

    float d;
    d = funcAverage<float, float>(5.8, 2.5);
    printf("The average of these numbers is %.3f", d);
    cout<<endl;

    return 0;
}