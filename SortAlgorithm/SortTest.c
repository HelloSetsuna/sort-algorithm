#include "SortTest.h"

// 打印数组
void show(char state[], char name[], int arr[]) {
	printf("%s %s :", state, name);
	for (int i = 0; i < TEST_COUNT; i++)
	{
		printf(" %d", arr[i]);
	}
	printf("\n");
}

// 测试函数
void Test(char name[], sortFunc func) {
	int testArr[TEST_COUNT] = { TEST_DATA };
	// 执行前
	show(BFORE, name, testArr);
	// 执行
	func(testArr, TEST_COUNT);
	// 执行后
	show(AFTER, name, testArr);

	printf("\n");
}


// 基础函数函数定义
void swap(int* a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


void swapArr(int arr[], int a, int b) {
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}