#include<iostream>
using namespace std;

#define MAX 5
int a[MAX];
int top = -1;

void push(int x)
{
    a[++top] = x;
}
int pop()
{
    return top--;
}
int stack_top()
{
    return a[top];
}
void print()
{
    for(int i=0;i<=top;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}
int main()
{
//testing the code
    push(2);
    print();
    push(4);
    print();
    push(8);
    print();
    pop();
    print();
    pop();
    print();
    push(3);
    print();
}
