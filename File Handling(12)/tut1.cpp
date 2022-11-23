#include<iostream>
#include<fstream>
using namespace std;

// The useful classes for working with files in C++ are:
// 1. fstreambase
// 2. ifstream --> derived from fstreambase
// 3. ofstream --> derived from fstreambase

// In order to work with files in C++, you will have to open it. Primarly, there are 2 ways to open a file
// 1. Using the constructor
// 2. Using the member function open() of the class 

int main(){

    // Reading and Writing Files

    string st = "Harry Bhai";
    // Opening a file using constructor and writing it
    ofstream out("tut1.txt"); // write operation
    out<<st;
    out.close(); // closing a file

    string st2;
    // Opening a file using constructor and reading it
    ifstream in("tut1.txt"); // Read operation
    // in>>st2; // it only reads a single word
    getline(in, st2); // to read line by line
    cout<<st2;
    in.close(); // closing a file

    return 0;
}