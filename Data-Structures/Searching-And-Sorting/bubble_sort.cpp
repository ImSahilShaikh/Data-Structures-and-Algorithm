#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a= *b;
    *b = temp;
}

void display(int array[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<"\t";
    }
}

void bubble_sort(int array[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                swap(&array[j+1],&array[j]);
            }
        }
    }
    display(array,n);
}

int main()
{
    int n;
    cout<<"\nEnter n: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);
    
    return 0;
}
