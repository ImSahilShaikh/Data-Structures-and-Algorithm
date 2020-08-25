#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    multimap<char,int> mm;
    mm.insert(make_pair('a',1));
    mm.insert(make_pair('a',2));
    mm.insert(make_pair('a',3));
    mm.insert(make_pair('a',4));
    mm.insert(make_pair('b',0));
    mm.insert(make_pair('b',7));

    //displaying all elements
    for(auto &i:mm)
    {
        cout<<i.first<<"\t"<<i.second<<endl;
    }
    cout<<endl;

    //displaying just sepecif key elements
    auto range = mm.equal_range('a');
    for(auto i=range.first;i!=range.second;i++)
    {
        cout<<i->first<<"\t"<<i->second<<endl;
    }

    return 0;
}