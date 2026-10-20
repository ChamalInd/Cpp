#include <iostream>
using namespace std;

void selection_sort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int min = arr[i];
		int pos = i;
		
		for (int j = i; j < size; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				pos = j;
			}
		}

		int temp = arr[i];
		arr[i] = arr[pos];
		arr[pos] = temp;
	}
}

int main()
{
	int arr[] = {5, 1, 3, 7, -2, 4};
	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "Before sorting: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	selection_sort(arr, size);
	
	cout << "After sorting: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

}
