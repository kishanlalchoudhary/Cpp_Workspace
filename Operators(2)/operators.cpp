#include<iostream>
using namespace std;

//post and pre incremneter program
int main(){
//program1
    int i = 1;
        //1   //3
    i = i++ + ++i;

    cout<<i<<endl;
//program 2
    i = 1;
    int j = 2;
    int k;
    //  1   2    1     2     3     4
    k = i + j + i++ + j++ + ++i + ++j;
    cout<<i<<" "<<j<<" "<<k<<" "<<endl;
    
    return 0;
}