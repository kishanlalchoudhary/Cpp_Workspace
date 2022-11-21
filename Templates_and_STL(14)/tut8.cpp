#include<iostream>
using namespace std;

/*
STL = Containers  +  Algorithms  +  Iterators 
          |              |               |
     Object which   Procedure to   Object which points to
     stores data    process data   an element of container
*/

/*
There are three types of containers :
    1)Sequence Containers :
        To store data in Linear fashion.
        Example : Vector, List, Dequeue etc.
    2)Associative Containers :
        To Access data directly.
        Example : Set / Multiset, Map / Multimap etc. 
    3)Derived Containers :
        Real World Modelling.
        Example : Stack, Queue, Priority-Queue etc.
*/ 

/*
When to use which?

Sequence Containers ->
    1)Vector -> Random Access = Fast
                Insertion / Deletion at Middle = Slow
                Insertion / Deletion at the End = Fast
    2)List -> Random Access = Slow
            Insertion / Deletion at Middle = Fast
            Insertion / Deletion at End = Fast

Associative Containers -> All operations fast except Random Access.

Derived Containers -> Depends -> Data Structure.
*/

int main(){

    // Containers in C++ STL    

    return 0;
}