#include<iostream>
#include"Line.h"
using namespace std;

Line::Line(int x1, int y1, int x2, int y2)
{
	m_CoorA = new Coordinate(x1, y1);
	m_CoorB = new Coordinate(x2, y2);
	cout << "Line()" << endl;
}

Line::~Line()
{
	delete m_CoorA;
	m_CoorA = NULL;
	delete m_CoorB;
	m_CoorB = NULL;
	cout << "~Line()"<<endl;
}

void Line::printInfo()
{
	cout << "printInfo()" << endl;
	cout << "(" << m_CoorA->getX() << "," << m_CoorA->getY() << ")" << endl;
	cout << "(" << m_CoorB->getX() << "," << m_CoorB->getY() << ")" << endl;
}