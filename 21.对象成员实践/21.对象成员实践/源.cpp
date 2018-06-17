#include "Line.h"
#include <iostream>
#include "stdlib.h"
using namespace std;
int main(void)
{
	Line *p = new Line(1,2,3,4);
	delete p;
	p = NULL;


	cout << sizeof(p) << endl;//有一个指针，32位编译环境是4字节
	cout << sizeof(Line) << endl;//Line内部有两个指针，32位编译环境是8字节
	system("pause");
	return 0;
}