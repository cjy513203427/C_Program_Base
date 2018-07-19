#include"Tank.h"
#include<iostream>
using namespace std;
int main(void)
{
	Tank *p = new Tank('A');
	//静态数据成员始终存在
	//非静态成员函数可以访问调用静态
	//静态成员函数可以访问调用静态，静态成员函数不能访问调用非静态
	cout<<Tank::getCount()<<endl;
	Tank *q = new Tank('B');
	cout << q->getCount() << endl;
	delete p;
	delete q;
	system("pause");
	return 0;
}