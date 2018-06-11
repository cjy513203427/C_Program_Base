#include<iostream>
#include<stdlib.h>
#include<string>
#include "Line.h"

int main(void)
{
	Line *p = new Line(1, 2, 3, 4);
	delete p;
	p = NULL;

//	生成A--生成B--生成线段——销毁线段——销毁B——销毁A
//
//	如果坐标类有一个默认构造函数，那么线段类在实例化的时候可以不使用初始化列表；如果坐标类的构造函数有参数，那么线段类在实例化的时候就必须使用初始化列表。
	system("pause");
	return 0;
}