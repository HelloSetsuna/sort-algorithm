#include "SortTest.h"

void main() {

	// 冒泡排序测试
	Test("bubble sort", bubbleSort);

	// 选择排序测试
	Test("select sort", selectSort);

	// 插入排序测试
	Test("insert sort", insertSort);

	// 快速排序测试
	Test("quick sort", quickSort);

	// 堆  排序测试
	Test("heap sort", heapSort);

	// 希尔排序测试
	Test("shell sort", shellSort);



	getchar();
}