#include<iostream>
#include<vector>
using namespace std;

// Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.

template<class T>
void display(vector<T> &v){
    cout<<"Displaying this vector"<<endl;
    for (int i=0; i<v.size(); i++){
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){

    // Vector in C++ STL

    // Ways to create a vector

    vector<int> vec1; // Zero length integer vector   

    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i=0; i<size; i++){
        cout<<"Enter an element to add to this vector : ";
        cin>>element;
        vec1.push_back(element);
    }
    vec1.pop_back();
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1, 50, 566);
    display(vec1);

    vector<char> vec2(4); // 4-element character vector
    vec2.push_back('5');
    vec2.push_back('6');
    vec2.push_back('7');
    display(vec2);

    vector<char> vec3(vec2); // 4-element character vector from vec2
    display(vec3);

    vector<int> vec4(6, 3); // 6-element vector of 3s
    display(vec4);
    cout<<vec4.size()<<endl;

    return 0;
}