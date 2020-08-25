#include<iostream>
#include<vector>

using namespace std;

void print(vector<pair<string,int>> v)
{
    for(auto &i:v)
        cout<<'['<<i.first<<","<<i.second<<']'<<endl;
}

int main()
{
    pair<int,int> s;
    cout<<'['<<s.first<<","<<s.second<<']'<<endl;
    
    vector<pair<string,int>> v;

    v.push_back(make_pair("Sahil",43365));
    v.push_back(make_pair("Kalpit",43315));
    v.push_back(make_pair("Manas",43356));
    
    //alternate way of doing this
    v.push_back(pair<string,int>("Rupesh",60));

    //printing the vector of pairs
    print(v);
    return 0;
}