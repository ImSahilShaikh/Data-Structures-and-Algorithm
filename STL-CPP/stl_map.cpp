#include<iostream>
#include<vector>
#include<map>
#include<functional>
using namespace std;

int main()
{
    map<string,int,greater<string>> m;
    m["sahil"] = 5;
    m["aaaaa"] = 6;
    m["bbbbb"] = 1;
    m.insert(make_pair("qwerty",100));

    for(auto &i: m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    //now lets create a key with multiple values
    
    map<string,vector<int>,greater<string>> m1;
    m1["a"].push_back(100);
    m1["a"].push_back(101);
    m1["b"].push_back(200);
    for(auto &e : m1)
    {
        cout<<e.first<<"\t";
        for(auto &e1: e.second)
        {
            cout<<e1<<"\t";
        }
        cout<<endl;
    }
    return 0;
}