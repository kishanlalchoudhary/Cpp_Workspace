// OOPs - Classes and Objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in c)
// structures had limitations
//     - members are public
//     - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private and few as public
// structures in c++ are typedefed
// you can declare objects along with the class declaration like this:
//     class Employee{
//         // Class definition
//     } harry, rohan, lovish;
// harry.salary = 8 makes no sense if salary is private

// Nesting of memeber functions

#include<iostream>
#include<string>
using namespace std;

class Binary{
    private:
        string s;
        void chk_bin(void);
    public:
        void read(void);
        void onesComplement(void);
        void display(void);
};

void Binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void Binary :: chk_bin(void){
    for(int i = 0; i < s.length(); i++){
        if( s.at(i) != '0' && s.at(i) != '1' ){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void Binary :: onesComplement(void){

    chk_bin(); // Nesting of member function
    for(int i = 0; i < s.length(); i++){
        if (s.at(i)=='0'){
            s.at(i) = '1';
        }else if(s.at(i)=='1'){
            s.at(i) = '0';
        }else{
            cout<<"onesComplement not possible"<<endl;
        }
    }
}

void Binary :: display(void){
    cout<<"Displaying your binary number"<<endl;
    for(int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){

    Binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.onesComplement();
    b.display();

    return 0;
}