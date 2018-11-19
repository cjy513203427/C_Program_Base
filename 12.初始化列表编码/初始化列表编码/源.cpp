#include<iostream>
#include<stdlib.h>

#include<string>
#include "Teacher.h"
using namespace std;




//初始化列表可以解决无法对常量进行初始的问题
//通过此种方法可以初始化const修饰的，引用&的变量
int main()
{
	Teacher t1;
	cout << t1.getName() << " " << t1.getAge() << " " <<t1.getMax()<< endl;
	system("pause");
	return 0;
}