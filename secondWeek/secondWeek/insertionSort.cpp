#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr)
{
	for (int i = 1; i < arr.size();i++)
	{
		int key = arr[i];
		int j = i - 1;

		while (arr[j] > key && j>=0)
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j+1] = key;
	}
}