#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    //linked list
    forward_list<int> l1 {4,1,5,3};
    forward_list<int> l2 {1,2,5,2,2};

    l1.insert_after(l1.begin(),3);
    
    //just works with adjacent elements
    l2.unique();
    for(auto &i: l2)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
    
    //removes the matching elements
    l2.remove(2);
    for(auto &i: l2)
    {
        cout<<i<<"\t";
    }
    cout<<endl;

    //remove for a particular condition
    l1.remove_if([] (int n){
        return n < 3;
    });

    for(auto &i: l1)
    {
        cout<<i<<"\t";
    }
    cout<<endl;

    return 0;
}