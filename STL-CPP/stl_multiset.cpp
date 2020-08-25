#include<iostream>
#include<set>
#include<functional>
using namespace std;

class Student
{
    public:
        int marks;
        string name;
    bool operator < (const Student &rhs)
    const
    {
        return marks<rhs.marks;
    }
    bool operator > (const Student &rhs)
    const
    {
        return marks>rhs.marks;
    }
};

int main()
{
    multiset <int,greater<>> ms {5,2,1,3,4,1,5};
    ms.insert(0);
    for(int i : ms)
    {
        cout<<i<<"\t";
    }
    cout<<endl<<endl;
    
    //user defined type
    multiset <Student,greater<>> ms1 {{98,"sahil"},{90,"ramesh"}};
    for(auto &i : ms1)
    {
        cout<<i.name<<endl;
    }

    return 0;
}