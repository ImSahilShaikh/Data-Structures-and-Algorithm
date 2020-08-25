#include<iostream>
#include<functional>
#include<vector>
#include<queue>

using namespace std;

template<typename T> void print(T &q)
{
    while(!q.empty())
    {
        cout<<q.top()<<"\t";
        q.pop();
    }
    cout<<endl;
}

int main()
{
    //example of max heap
    priority_queue<int> q;
    for(int e: {1,3,5,7,8,9,2,4})
    {
        q.push(e);
    }
    print(q);

    //example of min heap
    priority_queue<int,vector<int>,greater<int>> q1;
    for(int e: {1,3,5,7,8,9,2,4})
    {
        q1.push(e);
    }
    print(q1);

    return 0;
}