#include "SortTest.h"

// 选择排序
// 时间复杂度为O(n^2)

void selectSort(int arr[], int length)
{
	if (arr == NULL || length <= 0)
		return;
	for (int i = 0; i < length; i++)
	{	
		int* temp = &arr[i];
		// 找 i 后面最小的存入 temp
		for (int j = i + 1; j < length; j++)
		{
			if (arr[j] < *temp)
				temp = &arr[j];
		}
		// 如果有更小的就和 i 交换
		if (temp != &arr[i])
			swap(temp, &arr[i]);
	}
}