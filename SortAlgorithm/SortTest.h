#pragma once
#include <stdio.h>

#define SORT_TEST_HEAGER_FLAG 0

#define TEST_COUNT 8
#define TEST_DATA  5,6,3,4,7,2,1,9

#define BFORE "bfore"
#define AFTER "after"

// ************ 排序函数声明开始 *********** //

// 冒泡排序函数声明
void bubbleSort(int arr[], int length);

// 选择排序函数声明
void selectSort(int arr[], int length);

// 插入排序函数声明
void insertSort(int arr[], int length);

// 快速排序函数声明
void quickSort(int arr[], int length);

// 堆排序  函数声明
void heapSort(int arr[], int length);

// ************ 排序函数声明结束 *********** //





// 排序函数
typedef void sortFunc(int arr[], int length);

// 打印数组
void show(char state[], char name[], int arr[]);

// 测试函数
void Test(char name[], sortFunc func);

// 交换两数（指针）
void swap(int* a, int *b);

// 交换两数（数组）
void swapArr(int arr[], int a, int b);

