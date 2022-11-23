#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream out;
    out.open("tut3.txt");
    out<<"This is me. ";
    out<<"This is me also. ";
    out<<"This is also me. ";
    out.close();

    ifstream in;
    in.open("tut3.txt");
    string str;
    while(in.eof() == 0){
        getline(in, str);
        cout<<str<<endl;
    }
    in.close();

    return 0;
}