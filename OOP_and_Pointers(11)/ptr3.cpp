#include<iostream>
using namespace std;

class Shop{
    int id;
    int price;
    public:
        void setData(int _id, int _price){
            id = _id;
            price = _price;
        }

        void getData(){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};

int main(){

    // Array of Objects Using Pointers

    // general store item
    // veggies item
    // hardware item


    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    
    int p, q;
    for(int i = 0; i < size; i++){
        cout<<"Enter the Id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }

    for(int i = 0; i < size; i++){
        cout<<"Item number : "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}