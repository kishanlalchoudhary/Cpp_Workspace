#include<iostream>
using namespace std;

inline int product(int a, int b){
    /* Not recommended to use below lines with inline functions
        static int c = 0; // This executes only once
        c = c + 1; // Next time this function is run, the value of c will be retained */
    return a*b;
}

// Default arguments
int moneyReceived(int currentMoney, float factor = 1.04){
    return (currentMoney*factor);
}

// Constant Arguments
// int strlen(const char *str){

// }

int main(){

    // Inline Functiions, Default Arguments and Constant Arguments

    int a, b;
    cout<<"\nEnter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;

    int money = 10000;
    cout<<"\nIf you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"\nFor VIP : If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money, 1.1)<<" Rs after 1 year\n"<<endl;

    return 0;
}