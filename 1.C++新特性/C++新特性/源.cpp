#include<stdlib.h>
#include<iostream>
using namespace std;
//内联函数可以将函数代码直接替换到调用位置，增加代码运行效率
inline void fun(int i=30,int x = 10, int j = 20);
void fun(double i, double j);
int main()
{
	//函数默认值
	fun();
	fun(100);
	fun(100,200);
	fun(100, 200, 300);
	//函数重载
	fun(1.1, 1.2);
	system("pause");
	return 0;
}

void fun(int i, int j, int k)
{
	cout << i << "," << j << "," << k << endl;
}

void fun(double i, double j)
{
	cout << i << "," << j << endl;
}