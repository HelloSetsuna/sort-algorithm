#include "SortTest.h"

// 简单插入排序
// 时间复杂度为O(n^2)

void insertSort(int arr[], int length)
{
	if (arr == NULL || length <= 0)
		return;
	for (int i = 1; i < length; i++)
	{
		int j = i;
		int target = arr[i];
		// 当前值比前面小就继续和下一个比较
		while (j > 0 && target < arr[j-1])
		{
			arr[j] = arr[j - 1];
			j -= 1;
		}
		// 将当前值插入合适的位置，大于前面
		arr[j] = target;
	}
}