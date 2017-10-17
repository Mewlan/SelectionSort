#include <stdio.h>

int main(int argc, char const *argv[])
{
	int numberArray[6] = {5, 4, 3, 2, 9, 1};
	int min = 0;										//假设数组中的最小元素的位置
	int temp;
	for (int i = 0; i < 6 - 1; ++i)						//排序数组需要 数组总元素数 - 1 趟
	{
		min = i;										//每趟排序都重设数组中最小元素的位置为第趟数，因为每过一趟不需要从上一趟已经找出来的最小元素的位置开始假设最小元素的位置
		for (int j = i; j < 6; ++j)						//从数组最小元素的位置开始遍历数组 数组总元素数 - 趟数
		{
			if (numberArray[min] > numberArray[j])		//让在数组中最小元素的位置的元素与在数组中第趟数位置的元素开始比大小直到最后一个元素
			{
				min = j;								//如果数组中最小元素的位置的元素的值比后一位元素的值大，那么令数组中最小元素的位置为后者
			}
		}
		if (min != i)									//如果在遍历数组后，数组中最小元素的位置与原来位置不同
		{
			temp = numberArray[min];
			numberArray[min] = numberArray[i];
			numberArray[i] = temp;						//那么令数组中最小元素的位置的元素与原来数组中最小元素的位置交换
		}
	}
	for (int i = 0; i < 6; ++i)
	{
		printf("%3d", numberArray[i]);
	}

	return 0;
}