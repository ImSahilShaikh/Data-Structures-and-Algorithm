#include<iostream>
#include<vector>
using namespace std;

int linear_search(vector<int> a,int key)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> array;
    int size;
    cout<<"\nEnter the size: ";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        int temp;
        cin>>temp;
        array.push_back(temp);
    }
    int key=0;
    cout<<"\nEnter the element you want to search: ";
    cin>>key;
    int loc = linear_search(array,key);
    if(loc != -1)
    {
        cout<<"\nElement "<<key<<" found at "<<loc+1;
    }
    else
    {
        cout<<"\nElement "<<key<<" not found";
    }
    return 0;
}