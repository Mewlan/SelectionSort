#include <stdio.h>

int main(int argc, char const *argv[])
{
	int selectionSort(int array[], int n);
	void printfArray(int array[], int n);
	int selectionSortArray[10] = {9, 8, 7, 6, 5, 4, 3, 2, 10, 1};
	printfArray(selectionSort(selectionSortArray, 10), 10);

	return 0;
}

int selectionSort(int array[], int n)
{
	int min;
	int temp;
	for (int i = 0; i < n - 1; ++i)
	{
		min = i;
		for (int j = min; j < n; ++j)
		{
			if (array[min] > array[j])
			{
				min = j;
			}
		}
		if (min != i)
		{
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;
		}
	}

	return (array);
}

void printfArray(int array[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%3d", array[i]);
	}
}