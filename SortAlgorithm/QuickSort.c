#include "SortTest.h"

// 快速排序
// 平均时间复杂度是O(nlgn)


// 中心划分（未优化）
int partition(int arr[], int left, int right) {
	// 中心值
	int pivotValue = arr[left];
	int pivotIndex = left;
	// 当左指向小于右指向
	while (left < right)
	{
		// 当左指向小于右指向
		// 从右向左找到比中心值小的后停止
		while (left < right && arr[right] >= pivotValue)
		{
			right -= 1;
		}
		// 当左指向小于右指向
		// 从左向右找到比中心值大的后停止
		while (left < right && arr[left] <= pivotValue)
		{
			left += 1;
		}
		// 交换数组中两指向的值
		swapArr(arr, left, right);
	}

	// 将中心值与左指向的值交换
	// 完成中心值左边的小于等于它，右边的大于等于它
	swapArr(arr, pivotIndex, left);

	// 返回中心值位置
	return left;
}

// 递归划分
void recursionPartition(int arr[], int left, int right) {
	if (left >= right)
		return;
	// 中心划分 得到中心值位置
	int pivotIndex = partition(arr, left, right);
	// 继续划分左边
	recursionPartition(arr, left, pivotIndex - 1);
	// 继续划分右边
	recursionPartition(arr, pivotIndex + 1, right);
}

void quickSort(int arr[], int length) {
	if (arr == NULL || length <= 0)
		return;
	recursionPartition(arr, 0, length - 1);
}