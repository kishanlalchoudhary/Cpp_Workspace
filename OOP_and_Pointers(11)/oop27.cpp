#include<iostream>
using namespace std;

/*

Syntax for initialization list in constructor:
constructor(argument-list) : initialization-section{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j) {constructor-body}
};

*/

class Test{
    int a;
    int b;
    public:

        //In initialization list values are assigned in the order of declartion of variable 
        // Test(int i, int j) : a(i), b(j) {
        // Test(int i, int j) : a(i), b(i+j) {
        // Test(int i, int j) : a(i), b(i*j) {
        // Test(int i, int j) : a(i), b(a + j) {
        // Test(int i, int j) : a(i+b), b(j) {
        // Test(int i, int j) : b(j), a(i+b) --> RED Flag this will create problems because "a" will be initialized first

        Test(int i, int j){

            // inside constructor values are assigned in the order of statement execution
            b = j;
            a = i+b;
            cout<<"Constructor executed"<<endl;
            cout<<a<<" "<<b<<endl;
            
        }
};

int main(){

    // Initialization list in Constructors

    Test test(5, 6);

    return 0;
}