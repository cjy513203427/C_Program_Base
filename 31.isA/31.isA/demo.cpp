#include<iostream>
#include<stdlib.h>
#include"Infantry.h"
using namespace std;
//会产生临时变量，所以调用了析构
void test1(Person p)
{
	p.play();
}

//不会产生临时变量，不调用析构函数，而调用拷贝析构函数
void test2(Person &p)
{
	p.play();
}
//不会产生临时变量
void test3(Person *p)
{
	p->play();
}

int main(void)
{
	//Soldier soldier;
	//Person *person = new Soldier;
	//person->play();
	//delete person;//子类的内存无法释放
	////头文件子类父类析构函数前加上关键字virtual解决子类内存无法释放
	//person = NULL;

	Person p;
	Soldier s;
	test1(p);
	test1(s);
	system("pause");
	return 0;
}