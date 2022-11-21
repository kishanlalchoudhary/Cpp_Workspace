#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){

    // List in C++ STL
    list<int> list1; // List of 0 length

    // Adding element in the list
    list1.push_back(5);// Adds element at last
    list1.push_back(10); 
    list1.push_back(6);
    list1.push_back(6);
    list1.push_back(8);
    list1.push_back(9); 
    list1.push_back(12); 
    display(list1);

    // Removing elements in list
    list1.pop_back(); // Removes last element
    list1.pop_front(); // Removes first element
    list1.remove(6); // Removes all occurences of argument passed from list
    display(list1);

    // Sorting in list
    list1.sort(); // Sorts all the elements of list
    display(list1);
    
    list<int> list2(4); // Empty list of size 4
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 27;
    iter++;
    display(list2);

    cout<<"list1 before merging : ";
    display(list1);
    // list1.sort();
    cout<<"list2 before merging : ";
    display(list2);
    // To merge and sort list and list2
    list2.sort();
    list1.merge(list2);
    cout<<"list1 after merging : ";
    display(list1);
    cout<<"list2 after merging : ";
    display(list2);

    // Reversing the list
    list1.reverse();
    display(list1);

    return 0;
}