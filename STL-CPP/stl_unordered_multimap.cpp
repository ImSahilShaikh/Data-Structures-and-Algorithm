#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;
int main()
{
    unordered_multimap<int,char> um = {{1,'a'},{2,'b'},{1,'c'},{2,'d'},{3,'e'}};
    multimap<int,char> m = {{1,'a'},{2,'b'},{1,'c'},{2,'d'},{3,'e'}};
    
    cout<<"UNORDERED MULTIMAP"<<endl;
    for(auto &e: um)
    {
        cout<<e.first<<"\t"<<e.second<<endl;
    }
    
    cout<<"ORDERED MULTIMAP"<<endl;
    for(auto &e: m)
    {
        cout<<e.first<<"\t"<<e.second<<endl;
    }

    return 0;
}