#include<stdlib.h>
#include<iostream>
using namespace std;

int seqSearch(int *array, int low, int high, int key);
int binarySearch(int *array, int low, int high, int key);
int interpolationSearch(int *array, int low, int high, int key);

int main(void)
{
	int * array = new int[100];
	int low = 1;
	int high = 7;
	array[1] = 4;
	array[2] = 8;
	array[3] = 9;
	array[4] = 10;
	array[5] = 11;
	array[6] = 13;
	array[7] = 19;
	int seqResult = seqSearch(array,low,high,4);
	cout << "顺序查找结果是：" << seqResult << endl;
	int binaryResult = binarySearch(array, low, high,8);
	cout << "折半查找结果是：" << binaryResult << endl;
	int interpolationResult = interpolationSearch(array, low, high, 13);
	cout << "插值查找结果是：" << interpolationResult << endl;

	delete array;
	system("pause");
	return 0;
}

//顺序查找
int seqSearch(int *array, int low, int high, int key)
{
	for (int i = low; i < high; i++)
	{
		if (array[i] == key)
			return i;
	}
	return -1;
}

//折半查找(只适用于已经排序好的)
int binarySearch(int *array, int low, int high, int key)
{
	while (low <= high)
	{
		//从中间划分
		//mid如果不是整数，则直接向下取整，不会影响查找结果
		int mid = (low + high) / 2;
		//正好是中间这个数
		if (key == array[mid])
			return mid;
		//数比中间的数大，则在后半部分再切一刀缩小范围
		else if (key > array[mid])
			low = mid + 1;
		//数比中间的数小，则在前半部分再切一刀缩小范围
		else
			high = mid - 1;
	}
	return -1;
}

//插值查找(只适用于已经排序好的)
//和折半查找逻辑一致，修改了mid值
int interpolationSearch(int *array, int low, int high, int key)
{
	while (low <= high)
	{
		//优化中间值
		int mid = low+(key-array[low])/(array[high]-array[low])*(high - low-1);
		//正好是中间这个数
		if (key == array[mid])
			return mid;
		//数比中间的数大，则在下半部分再切一刀缩小范围
		else if (key > array[mid])
			low = mid + 1;
		//数比中间的数小，则在上半部分再切一刀缩小范围
		else
			high = mid - 1;
	}
	return -1;
}