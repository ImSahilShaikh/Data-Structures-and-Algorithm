#include<iostream>
#include<array>

using namespace std;

int main()
{
    //In this array, which is similar to object, we have to give the size at compile time only;

    array<int,5> a;
    a={1,2,3,4,5};

    //like vectors we can use size() to use with this array
    //to access the elements we can use at(), [], front, end like:

    for(int i=0;i<a.size();i++)
    {
        cout<<a.at(i)<<"\t";
    }
    cout<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;

    return 0;
}