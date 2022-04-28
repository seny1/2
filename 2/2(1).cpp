#include "2.h"

void add_1(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i]++;
		cout << arr[i] << '|';
	}
}

void deduct_1(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i]--;
		cout << arr[i] << '|';
	}
}

int sum(int* arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}

void invert(int* arr, int size)
{
	for (int i = 0, j = size - 1; i < j; i++, j--)
	{
		int t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
	}
	for (int k = 0; k < size; k++)
	{
		cout << arr[k] << "|";
	}
}

void sort_increasing(int* arr, int size)
{
	int t = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	for (int k = 0; k < size; k++)
	{
		cout << arr[k] << "|";
	}
}

void sort_decreasing(int* arr, int size)
{
	int t = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	for (int k = 0; k < size; k++)
	{
		cout << arr[k] << "|";
	}
}

void(*Option_of_arr(int* arr, int size))(int* arr, int size)
{
	if (sum(arr, size) == arr[0])
	{
		return invert;
	}
	if (sum(arr, size) > arr[0])
	{
		return sort_increasing;
	}
	if (sum(arr, size) < arr[0])
	{
		return sort_decreasing;
	}
}