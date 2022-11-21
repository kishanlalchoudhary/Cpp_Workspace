#include<iostream>
using namespace std;
// Rhombus pattern
int main(){
    int n;
    cin>>n;

    for (int i = 0; i<n; i++)
    {
        for (int k =1; k<=(n-i); k++){
            cout<<" ";
        }
        for (int j = 0; j<n; j++)
        {

            cout<<"* ";
        }
        cout<<""<<endl;
    }
    return 0;
}