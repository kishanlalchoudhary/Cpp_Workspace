#include<iostream>
using namespace std;
// Taking input and output of array
int main(){

    int n;
    cin>>n;

    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}