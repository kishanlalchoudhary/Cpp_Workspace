#include<iostream>
using namespace std;


// struct is similar to array but unlike array struct can contain many different data types (int, char, bool, etc.)
struct employee
{
    
    int eId; //4
    char favchar; //1
    float salary; //4
    // Memory allocated is 9 bytes

} kishanlal, prakash;

// A union is a type of structure, that can be used where the amount of memory used is a key factor.
union money
{

    int rice; //4
    char car; //1
    float pounds; //4
    // Memory allocated is 4 bytes

};


int main(){

    employee harry;
    struct employee shubam;

    kishanlal.eId = 3;
    prakash.eId = 78;

    harry.eId = 1;
    harry.favchar = 'c';
    harry.salary = 12000000;

    shubam.eId = 100;
    cout<<shubam.eId<<endl;
    cout<<shubam.favchar<<endl; // if nothing is assigned then whitespace is return

    cout<<harry.eId<<endl;
    cout<<harry.favchar<<endl;
    cout<<harry.salary<<endl;

    money m1;
    m1.rice = 180;
    m1.car = 'd';
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;

    // Enums are user-defined types that consist of named integral constants
    enum Meal{breakfast, lunch, dinner};
    //           0,        1,     2,
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    Meal m2 = breakfast;
    m2 = lunch;
    cout<<m2<<endl;
    cout<<(m2 == 1)<<endl;

    return 0;
}