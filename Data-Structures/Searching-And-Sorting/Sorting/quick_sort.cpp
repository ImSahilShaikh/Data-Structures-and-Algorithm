#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(vector<int> &a, int start, int end)
{
	int pivot = a[end];
	int part_index = start;

	for (int i = start; i < end; i++)
	{
		if (a[i] <= pivot)
		{
			swap(&a[i],&a[part_index]);
			part_index++;	
		}
	}
	swap(&a[end],&a[part_index]);
	return part_index;
}

void quick_sort(vector<int> &a, int start, int end)
{
	if (start < end)
	{
		int p = partition(a, start, end);
		quick_sort(a, start, p - 1);
		quick_sort(a, p + 1, end);
	}
}

int main()
{
	vector<int> array;
	int size;
	cout << "Enter the size of array: ";
	cin >> size;
	cout << "Enter array elements" << endl;
	for (int i = 0; i < size; i++)
	{
		int temp;
		cin >> temp;
		array.push_back(temp);
	}
	quick_sort(array, 0, size - 1);
	display(array);
	return 0;
}