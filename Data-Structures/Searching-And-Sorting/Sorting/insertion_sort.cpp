#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

void selection_sort(vector<int> a)
{
    int value = 0,index=0;
    for(int i=1;i<a.size();i++)
    {
        value = a[i];
        index = i;
        while(index > 0 && a[index-1] > value)
        {
            a[index] = a[index - 1];
            index = index - 1;
        }
        a[index] = value;
    }
    display(a);
}

int main()
{
    vector<int> array;
    int size;
    cout<<"\nEnter the size: ";
    cin>>size;
    cout<<"\nEnter "<<size<<" elements\n";
    for(int i=0;i<size;i++)
    {
        int temp;
        cin>>temp;
        array.push_back(temp);
    }
    selection_sort(array);
    return 0;
}