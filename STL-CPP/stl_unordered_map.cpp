#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;

int main()
{
    //ordered map uses redblack/avl tree..
    //unordered uses hashing!
    unordered_map <int,string> u {{1,"Sahil"},{2,"AAAA"},{4,"XXXX"},{3,"YYYY"}};
    map<int,string> m {{1,"Sahil"},{2,"AAAA"},{4,"XXXX"},{3,"YYYY"}};
    
    cout<<"UNORDERED MAP"<<endl;
    for(auto &e: u)
    {
        cout<<e.first<<"\t"<<e.second<<endl;
    }

    cout<<"ORDERED MAP"<<endl;
    for(auto &e: m)
    {
        cout<<e.first<<"\t"<<e.second<<endl;
    }

    auto result = u.find(2);
    if(result != u.end())
    {
        cout<<"FOUND";
    }
    else
    {
        cout<<"NOT FOUND";
    }

    cout<<result->first<<" "<<result->second;
    

    
    return 0;
}