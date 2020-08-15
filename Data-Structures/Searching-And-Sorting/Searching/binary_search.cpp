#include<iostream>
#include<vector>

using namespace std;

int binary_search(vector<int> &a)
{
    int start = 0, end = a.size()-1;
    int key=-1;
    cout<<"\nEnter the element to be searched :";
    cin>>key;

    while(start <= end)
    {
        int mid = (start+end) / 2;
        if(a[mid] == key)
        {
            return mid+1;
        }
        else if(a[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> array;
    int size;
    
    cout<<"\nEnter the size of array: ";
    cin>>size;

    cout<<"\nEnter elements\n";
    for(int i=0;i<size;i++)
    {
        int temp;
        cin>>temp;
        array.push_back(temp);
    }

    int res = binary_search(array);
    if(res!=-1)
        cout<<"Element found at: "<<res;
    else
    {
        cout<<"Not found";
    }
    return 0;
}