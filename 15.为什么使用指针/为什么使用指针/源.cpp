#include <stdlib.h>
#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

//此方法无法交换数字
void swap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void swap1(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int x = 1;
	int y = 2;
	swap1(x,y);
	cout << x << y << endl;
	system("pause");
	return 0;
}