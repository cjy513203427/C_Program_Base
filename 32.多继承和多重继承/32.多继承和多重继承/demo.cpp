#include<iostream>
#include<stdlib.h>
#include"MigrantWorker.h"
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
	//多重继承是指，C继承B，B继承A
	//多继承是指，A继承B和C
	MigrantWorker *m = new MigrantWorker("001","Kroos");
	m->carry();
	m->sow();
	delete m;
	m = NULL;
	system("pause");
	return 0;
}