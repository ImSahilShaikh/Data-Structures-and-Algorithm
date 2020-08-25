#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    //similar to set but order is not maintained
    //uses bucket
    //hashing is used to insert into buckets
    //insertion, deletion and search has average constant time 
    unordered_set<int> s{1,5,1,6,2,5,2,3,4};
    auto search = s.find(2);
    if(search!=s.end()) 
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }

    for(auto &e : s)
    {
        cout<<e<<"\t";
    }
    cout<<endl;
    
    return 0;
}