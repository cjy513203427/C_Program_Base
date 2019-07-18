#include <stdlib.h>
#include <iostream>
using namespace std;
void fun(const int &a, const int &b);
int main(void)
{
	int x = 3;
	int y = 5;
	int *const p = &x;//p不能重新指向其他的地址
	*p = 10;
	cout << x << endl;

	int const* d = &x;//*d不能修改值
	d = &y;
	cout << *d << endl;

	int const &z = x;

	system("pause");
	return 0;
}

void fun(const int &a, const int &b)
{
	//a = 10;不可以对参数进行修改
	//b = 20;
}