#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
    //similar to multiset but order is not maintained
    //uses bucket
    //hashing is used to insert into buckets
    //insertion, deletion and search has average constant time 

    unordered_multiset<int> u {4,1,5,1,4,6,3,5};

    auto search = u.find(3);
    if(search != u.end())
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }

    for(auto &e:u)
    {
        cout<<e<<"\t";
    }
    cout<<endl;

    //the equal elements are together because they are put into one bucket
    
    return 0;
}