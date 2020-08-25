#include<iostream>
#include<list>

using namespace std;

int main()
{
    //doubly linked list
    list<int> l1 {2,8,4,6};
    list<int> l2 {3,1,5,7};

    for(int i: l1)
    {
        cout<<i<<"\t";
    }
    cout<<endl;

    ///return the first element of the doubly linked list
    cout<<l1.front()<<endl;
    cout<<l2.front()<<endl;
    
    //returns the last element of the doubly linked list
    cout<<l1.back()<<endl;
    cout<<l2.back()<<endl;

    //sorting the dll
    l1.sort();
    l2.sort();
    
    //now merging both of them
    l1.merge(l2);

    for(int i: l1)
    {
        cout<<i<<"\t";
    }
    cout<<endl;

    return 0;
}