#include<iostream>
#include<set>
#include<functional>

using namespace std;

int main()
{
    //creating a set
    set<int> s = {2,1,4,6,3,1,2};
    
    //set stores only UNIQUE ELEMENTS and in SORTED order
    for(int x: s)
    {
        cout<<x<<"\t";
    }
    cout<<endl;

    //we can choose order of sorting as
    cout<<"\nSorting in descending order"<<endl;
    set<int, std::greater<int>> s1 = {2,1,4,6,3,1,2};
    for(int x: s1)
    {
        cout<<x<<"\t";
    }
    cout<<endl;

    //insert element
    cout<<"\nInsert element 10"<<endl;
    s.insert(10);
    for(int x: s)
    {
        cout<<x<<"\t";
    }
    cout<<endl;

    //assigning values of one set to another
    cout<<"\nAssigning values of set s to s3"<<endl;
    set<int> s3 (s.begin(),s.end());
    for(int x: s3)
    {
        cout<<x<<"\t";
    }
    cout<<endl;

    //removing element from the set
    cout<<"\nErasing element 6"<<endl;
    s3.erase(6);
    for(int x: s3)
    {
        cout<<x<<"\t";
    }

    return 0;
}