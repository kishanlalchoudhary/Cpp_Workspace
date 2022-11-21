#include<iostream>
using namespace std;
// Rectangle Pattern
int main(){
    int rows;
    int columns;
    cout<<"Enter no of rows and columns : ";
    cin>>rows>>columns;

    for (int i = 0; i<rows; i++)
    {
        for (int j = 0; j<columns; j++)
        {
            cout<<"* ";
        }
        cout<<""<<endl;
    }
}