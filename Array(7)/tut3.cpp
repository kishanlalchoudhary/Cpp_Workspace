// output maximum and minimum of array of n size taken input from user
#include<iostream>
#include<climits>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maxNo=INT_MIN, minNo=INT_MAX;

    for (int i=0; i<n; i++){
        if(arr[i]>maxNo){
            maxNo = arr[i];
        }
        // we can also write maxNo = max(maxNo,arr[i])
        if(arr[i]<minNo){
            minNo = arr[i];
        }
        // we can also write minNo = max(minNo,arr[i])

    }
    cout<<maxNo<<" "<<minNo;

    return 0;
}
