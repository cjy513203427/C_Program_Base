#include<iostream>
#include<stdlib.h>
#include"Worker.h"
using namespace std;
int main(void)
{
	Worker *p = new Worker();
	p->m_strName = "Jim";
	p->m_iAge = 10;
	p->eat();
	p->m_iSalary = 1000;
	p->work();
	delete p;
	p = NULL;
	system("pause");
	return 0;
}