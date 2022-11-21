#include<iostream>
using namespace std;

int sum(float a, int b){
    cout<<"Using Function with 2 arguments"<<endl;
    return a + b;
}

int sum(int a, int b, int c){
    cout<<"Using Function with 3 arguments"<<endl;
    return a + b + c;
}

// Calculate the volume of a cylinder
int volume(double r, int h){
    return (3.14 * r * r * h);
}

// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// Calculate the volume of Cuboid
int volume(int l, int b, int h){
    return (l * b * h);
}

int main(){

    // Function Overloading

    cout<<"The sum of 3 and 6 is "<<sum(3, 6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<sum(3, 7, 6)<<endl;

    cout<<"The volume of cuboid of 2, 10 and 25 is "<<volume(2, 10, 25)<<endl;
    cout<<"The volume of cube of side 25 is "<<volume(25)<<endl;
    cout<<"The volume of cylinder of radius 10 and height 25 is "<<volume(10, 25)<<endl;

    return 0;
}