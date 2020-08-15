#include<iostream>
#include<vector>

using namespace std;
void display(vector<int> array);
// int min_element_index(vector<int> a)
// {
//     int min_index;
//     for(int i=0;i<a.size() - 1;i++)
//     {
//         min_index = i;
//         for(int j=i+1;j<a.size();j++)
//         {
//             if( a[min_index] > a[j] && i != min_index)
//             {
//                 min_index = i;
//             }
//         }
//     }
//     return min_index;
// }

void swap(int *a, int *b)
{
    int temp = *a;
    *a= *b;
    *b = temp;
}

void selection_sort(vector<int> a)
{
    int temp = 0,min_index = 0;
    for(int i=0;i<a.size()-1;i++)
    {
        min_index = i;
        for(int j=i+1;j<a.size();j++)
        {
            if(a[min_index] > a[j])
            {
                min_index = j;
            }
        }
        if(i != min_index)
        {
            swap(&a[min_index],&a[i]);
        }
    }
    cout<<"\nTemporary sorted array\n";
    display(a);
}

void display(vector<int> array)
{
    for(int i=0;i<array.size();i++)
    {
        cout<<array[i]<<"\t";
    }
}

int main()
{
    vector<int> array;
    int n=0;
    cout<<"\nEnter how many elements you want to store: ";
    cin>>n;
    cout<<"\nEnter Elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        int temp=0;
        cin>>temp;
        array.push_back(temp);
    }
    selection_sort(array);
    cout<<"\nArray inside array\n";
    display(array);
    return 0;
}