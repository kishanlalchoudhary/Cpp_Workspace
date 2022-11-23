#include<iostream>
#include<fstream>
using namespace std;

int main(){

    // File I/O in C++: Read/Write in the Same Program & Closing Files

    // connecting our file with hout stream
    ofstream hout("tut2.txt");

    // Creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name : ";
    cin>>name;

    // writing a string to the file
    hout<<name<<" is my name.";
    hout.close();

    ifstream hin("tut2.txt");
    string content;
    getline(hin, content);
    cout<<"The content of this file is : "<<content<<endl;
    hin.close();

    return 0;
}