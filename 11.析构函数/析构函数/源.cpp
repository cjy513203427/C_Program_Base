#include<iostream>
#include<stdlib.h>

#include<string>
#include "Teacher.h"
using namespace std;



//拷贝构造函数只有拷贝和传递参数才会调用
int main()
{
	Teacher t1;
	Teacher *p = new Teacher();
	delete p;
	system("pause");
	return 0;
}