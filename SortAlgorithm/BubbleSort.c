#include "SortTest.h"

// 冒泡排序
// 时间复杂度为O(n^2)

void bubbleSort(int arr[], int length) {
	if (arr == NULL || length <= 0)
		return;
	for (int i = length - 1; i >= 0; i--)
	{
		// 获取数组末尾变量指针
		int* temp = &arr[length - 1];
		for (int j = i - 1; j >= 0; j--)
		{
			// 如果比前面的小就交换数据
			if (*temp < arr[j])
			{
				swap(temp, &arr[j]);
			}
			// 否则就以前面的数作为temp
			else {
				temp = &arr[j];
			}
		}
	}
}
