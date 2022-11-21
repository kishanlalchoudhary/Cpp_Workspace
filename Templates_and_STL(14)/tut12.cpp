#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){

    // Function Objects (Functors) in C++
    // Function Objects : Function wrapped in a class so that it available like an object
    
    int arr[] = {1, 4, 3, 54, 12, 34};
    sort(arr, arr+5);
    sort(arr, arr+5, greater<int>());
    for (int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}