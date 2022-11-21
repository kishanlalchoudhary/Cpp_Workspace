#include<iostream>
using namespace std;

int main(){

    // Exception Handling

    int age;
    cin >> age;

    try
    {
        if(age >= 24){
            cout<<"You have the access to drink the alcohol! "<<endl;;
        }

        else{
            throw(age);
        }
    }

    catch(int age)
    {
        cout<<"You dont have the access to drink alcohol because your age is less than 24"<<endl;
        cout<<age<<endl;
    }

    return 0;
}