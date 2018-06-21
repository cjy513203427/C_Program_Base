#include <iostream>
using namespace std;

//exchange the 2 items a and b
void swap(int &a, int &b)
{
	if (a == b)
		return;
	a = a + b;
	b = a - b;
	a = a - b;
}

//ergodic the buf and print it
void print(int  *p, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << p[i] << " ";
	}
}

/*
quitSort
*/

int getPartion(int *array, int low, int high)
{
	int key = array[low];
	while (low < high)
	{
		while (low < high && key <= array[high]) //如果array[high]大于键值，那么本就应该在键值右边
			high--;  //因此将high下标向前移动，直至找到比键值小的值，此时交换这两个值
		swap(array[low], array[high]);

		while (low < high && key >= array[low])
			low++;
		swap(array[low], array[high]);
	}
	return low;//返回key值的下标
}



void QuitSort(int *buf, int low, int high)
{
	if (low < high)
	{
		int key = getPartion(buf, low, high);

		QuitSort(buf, low, key - 1);
		QuitSort(buf, key + 1, high);
	}
}

int main(int argc, char *args[])
{
	int buf[10] = { 12, 4, 34, 6, 8, 65, 3, 2, 988, 45 };
	int m = sizeof(buf);
	cout << "排序前:" << endl;
	print(buf, sizeof(buf) / sizeof(int));

	QuitSort(buf, 0, sizeof(buf) / sizeof(int) - 1);

	cout << "\n\n\n排序后：" << endl;
	print(buf, sizeof(buf) / sizeof(int));
	getchar();
}