#include "Line.h"
#include<iostream>
int main(void)
{
	//不加const，调用非常量方法，加const调用常量方法
	const Line line(1, 2, 3, 4);
	line.printInfo();
	system("pause");
	return 0;
}