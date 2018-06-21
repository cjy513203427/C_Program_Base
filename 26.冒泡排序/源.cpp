/**
* @author cjy
* @Date 2018/6/19 15:00.
*/
#include <iostream>
#include<time.h>  

using namespace std;

void print(int a[],int n)
{
	for (int k = 0; k < n; k++)
	{
		cout << a[k] << endl;
	}
}

int main()
{

	clock_t startTime, endTime;
	startTime = clock();
	

	int a[8] = { 5,9,7,6,1,8,13,4 };


	//获取数组的长度
	int n = sizeof(a) / sizeof(a[0]);
	//第一个元素只需要和n-1个元素进行比较
	//第二个元素只需要和n-2个元素进行比较
	//以此类推
	for (int i = 0; i < n - 1; i++)
	{
		//第一个元素只需要和n-1个元素进行比较
		//第二个元素只需要和n-2个元素进行比较
		//以此类推
		for (int j = 0; j < n - i - 1; j++)
		{
			//只要前面的元素大于后面的元素，立即交换
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}

		}

		cout << "第" << i + 1 << "步骤" << endl;
		print(a, n);

	}
	cout << "最终结果" << endl;
	print(a, n);

	endTime = clock();
	cout << "Totle Time : " << (double)(endTime - startTime)*1000 / CLOCKS_PER_SEC << "ms" << endl;

	system("pause");
	return 0;
}