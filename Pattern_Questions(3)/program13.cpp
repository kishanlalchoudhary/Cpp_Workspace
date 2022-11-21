#include<iostream>
using namespace std;
// Zig Zag Pattern(own)
int main(){
    int n;
    cin>>n;

    for (int i = 1; i<=3; i++)
    {
        if(i==1){
            for(int j=1; j<=(n-2); j++){
                if((i+j)%4==0){
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
            }
        }
        else if (i==2){
            for(int j=1; j<=(n-1); j++){
                if((i+j)%2==0){
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
            }
        }else{
            for(int j=1; j<=n; j++){
                if((i+j)%4==0){
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}