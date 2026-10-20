#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size)
{
	for (int i = 1; i < size; i++)
	{
		for (int j = i; j >= 1 && arr[j] < arr[j - 1]; j--)
		{
			int temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
		}
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

	insertion_sort(arr, size);
	
	cout << "After sorting: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

}
