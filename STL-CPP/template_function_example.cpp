#include<iostream>
using namespace std;

template <typename T>

T getMax(T x, T y)
{
    return x>y ? x : y;
}


int main()
{
    int x = 10, y = 20;
    char c1 = 'a', c2 = 's';
    cout<<getMax(x,y)<<endl;
    cout<<getMax(c1,c2)<<endl;
    
    return 0;
}