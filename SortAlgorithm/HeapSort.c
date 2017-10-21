#include "SortTest.h"

// 堆排序


// 堆筛选
void heapAdjust(int arr[], int start, int end) {
	// 存储起始节点的值
	int temp = arr[start];
	// 从起始节点查需要改变的子节点（自顶向下）
	for (int i = start * 2 + 1; i < end; i = start * 2 + 1)
	{
		// 先比较左右子节点的大小
		/* 小顶堆
		// 选取较小的和父节点比较
		if (i + 1 < end && arr[i] > arr[i+1])
			i++;
		// 如果父节点更小则不进行交换
		if (temp < arr[i])
			break;
		*/
		// 大顶堆
		// 选取较大的和父节点比较
		if (i + 1 < end && arr[i] < arr[i + 1])
			i++;
		// 如果父节点更大则不进行交换
		if (temp > arr[i])
			break;
		arr[start] = arr[i];
		// 交换值后标记起始节点为当前子节点
		// 在下次循环时继续按此节点向下筛选
		start = i;
	}
	arr[start] = temp;
}


void heapSort(int arr[], int length)
{
	for (int i = length / 2; i >= 0; i--)
	{
		heapAdjust(arr, i, length);
	}

	for (int i = length - 1; i >= 0; i--)
	{
		swapArr(arr, 0, i);
		heapAdjust(arr, 0, i);
	}
}