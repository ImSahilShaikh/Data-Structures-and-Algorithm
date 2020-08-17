#include<iostream>
#include<vector>

using namespace std;

int main()
{
    //declare vector a
    vector<int> a;
    //add 5 elements with value 10 in vector
    a.assign(5,10);

    //printing vector
    for(int i=0;i<a.size();i++)
    {
        cout<<a.at(i)<<"\t";
    }

    //inserting 20 at end of vector
    a.push_back(20);
    cout<<endl<<"Last element is: "<<a.at(a.size()-1)<<endl;

    //removing last element
    a.pop_back();
    cout<<endl<<"Last element is: "<<a.at(a.size()-1)<<endl;

    //inserting at first location 
    a.insert(a.begin(),1);
    for(int i=0;i<a.size();i++)
    {
        cout<<a.at(i)<<"\t";
    }
    cout<<endl;

    //removing element from a location
    a.erase(a.begin());
    for(int i=0;i<a.size();i++)
    {
        cout<<a.at(i)<<"\t";
    }
    cout<<endl;

    vector<int> v2 {1,2,3,4,5};
    cout<<"BEFORE SWAPPING"<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a.at(i)<<"\t";
    }
    cout<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<v2.at(i)<<"\t";
    }
    cout<<endl;

    a.swap(v2);
    cout<<"AFTER SWAPPING"<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a.at(i)<<"\t";
    }
    cout<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<v2.at(i)<<"\t";
    }
    cout<<endl;

    return 0;
}