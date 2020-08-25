#include<iostream>
#include<stack>

using namespace std;

void print(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<"\t";
        s.pop();
    }
    cout<<endl;
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(3);
    s.push(5);

    print(s);

    cout<<s.top()<<endl;

    return 0;
}