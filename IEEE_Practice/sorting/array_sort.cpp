#include <iostream>
using namespace std;

int main()
{
	int arr[] = {5, 1, 3, 7, -2, 4};
	int arr_size = sizeof(arr) / sizeof(int);

	cout << "Before sorting: ";
	for (int i = 0; i < arr_size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	sort(arr, arr + arr_size);
	cout << "After sorting: ";
	for (int i = 0; i < arr_size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

}
