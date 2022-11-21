#include<iostream>
#include<cmath>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(int x, int y); // Constructor declaration
    void print(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex :: Complex(int x, int y) // This is a Parametrized constructor as it takes 2 parameters
{
    a = x;
    b = y;
}

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        }

        friend float distance(Point, Point);
};

float distance(Point p1, Point p2){
    float distance;
    distance = sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
    return distance;
}

int main(){

    // Parametrized and Default Constructor

    // Implict call
    Complex obj(4, 6);
    obj.print();

    // Explicit call
    Complex obj2 = Complex(2, 10);
    obj2.print();

    Point p(1,1), q(8,2);
    p.displayPoint();
    q.displayPoint();

    cout<<"The distance between point p and q is "<<distance(p, q)<<endl;

    return 0;
}