#include "SortTest.h"

// 希尔排序

// 希尔的一次插入排序
void shellInsert(int arr[], int d, int length) 
{
	// 从增量开始 保证下标不会越界
	for (int i = d; i < length; i++)
	{
		int temp = arr[i];
		// 当前值的前一个数
		int j = i - d;
		// 按增量从后向前的找比当前值大的数
		while (j >= 0 && arr[j] > temp)
		{
			// 如果找到则将较大的数后移
			arr[j + d] = arr[j];
			// 继续往前找
			j -= d;
		}
		// 如果存在比当前值大的数，赋值回去
		if (j != i - d)
			arr[j + d] = temp;
	}
}

void shellSort(int arr[], int length)
{
	if (arr == NULL || length <= 0)
		return;
	// 时间复杂度取决于增量计算函数
	// 所取增量的函数 这里直接 /= 2
	int d = length / 2;
	// 待整个序列中的记录基本有序时再对全体记录进行一次直接插入排序
	while (d >= 1)
	{
		shellInsert(arr, d, length);
		
		d /= 2;
	}
}