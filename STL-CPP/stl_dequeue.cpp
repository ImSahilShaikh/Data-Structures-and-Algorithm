#include<iostream>
#include<deque>

using namespace std;

void print(deque<int> q)
{
    for(int i : q)
        cout<<i<<"\t";
    cout<<endl;
}

int main()
{
    deque<int> d {1,3,5};
    d.push_back(2);
    d.push_front(9);
    print(d);

    d.pop_back();
    print(d);

    d.pop_front();
    print(d);
    return 0;
}