using namespace std;
#include "Coordinate.h"
#include<iostream>

int main(void)
{
	Coordinate *p1 = NULL;
	p1 = new Coordinate;
	Coordinate *p2 = new Coordinate();
	p1->m_iX = 10;
	p1->m_iY = 20;
	(*p2).m_iX = 30;
	(*p2).m_iY = 40;
	cout<<p1->m_iX + (*p2).m_iX<<endl;
	cout << p1->m_iY + (*p2).m_iY << endl;
	delete p1;
	p1 = NULL;
	delete p2;
	p2 = NULL;

	Coordinate t1;

	Coordinate *t2 = &t1;

	t2->m_iX = 10;
	t2->m_iY = 20;

	cout << t1.m_iX << endl;
	cout << t1.m_iY << endl;
	system("pause");
	return 0;
}