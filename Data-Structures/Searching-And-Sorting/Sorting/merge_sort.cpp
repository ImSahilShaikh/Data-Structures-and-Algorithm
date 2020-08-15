#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &a,int start,int mid,int end)
{
    int temp[end-start+1];
    int i= start, j= mid+1, k=0;

    while(i<=mid && j<=end)
    {
        if(a[i] <= a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++] = a[i++];
    }
    while(j<=end)
    {
        temp[k++] = a[j++];
    }
    for(int i=start;i<=end;i++)
    {
        a[i] = temp[i-start];
    }
}

void mergesort(vector<int> &a,int start,int end)
{
    if(start < end)
    {
        int mid = (start + end) / 2;
        mergesort(a,start,mid);
        mergesort(a,mid+1,end);
        merge(a,start,mid,end);
    }
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

    mergesort(array,0,size);

    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<"\t";
    }

    return 0;
}