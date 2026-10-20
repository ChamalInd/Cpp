#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size)
{
	bool changed = true;
	while (changed) 
	{
		changed = false;
		for (int i = 0; i < size - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				changed = true;
			}
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

	bubble_sort(arr, size);
	
	cout << "After sorting: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

}
