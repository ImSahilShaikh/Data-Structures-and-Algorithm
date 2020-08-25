#include<iostream>
#include<queue>

using namespace std;

void print(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<"\t";
        q.pop();
    }
    cout<<endl;
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    print(q);

    cout<<"FRONT : "<<q.front()<<endl;
    cout<<"BACK : "<<q.back()<<endl;
    return 0;
}