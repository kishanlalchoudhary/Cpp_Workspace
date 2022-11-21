#include<iostream>
using namespace std;
//Whether an alphabet is vowel or not using switch case
int main(){
    
    char n;
    cout<<"Enter a Alphaber : ";
    cin>>n;

    switch(n)
    {
        case 'a':
            cout<<"It is a vowel";
            break;
        case 'e':
            cout<<"It is a vowel";
            break;
        case 'i':
            cout<<"It is a vowel";
            break;
        case 'o':
            cout<<"It is a vowel";
            break;
        case 'u':
            cout<<"It is a vowel";
            break;
        default:
            cout<<"It is a consonant";
            break;
    }

    return 0;
}