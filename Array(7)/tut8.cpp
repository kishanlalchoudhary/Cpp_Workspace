// Sorting in Array - Insertion Sort

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    // My own Method
    // for (int i=1; i<n; i++){
    //     for(int j=i; j>0; j--){
    //         if (arr[j]<arr[j-1]){
    //             int temp = arr[j];
    //             arr[j] = arr[j-1];
    //             arr[j-1] = temp;
    //         }
    //     }
    // }
    
    // Apna College method
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}