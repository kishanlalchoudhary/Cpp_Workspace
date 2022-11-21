#include<iostream>
#include<string>
#include<map>
using namespace std;

// Map is an associative array

int main(){

    // Map in C++ STL
    map<string, int> marksMap;

    // Inserting elements in map
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;
    marksMap["Kishanlal"] = 80;
    marksMap.insert({{"Abhishek", 90}, {"Sunay", 100}});

    // Iterating over map
    map<string, int> :: iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }

    cout<<"The size of map is "<<marksMap.size()<<endl;
    cout<<"The size of map is "<<marksMap.max_size()<<endl;

    return 0;
}