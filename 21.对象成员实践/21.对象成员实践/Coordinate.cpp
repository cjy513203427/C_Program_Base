#include "Coordinate.h"
#include<iostream>
using namespace std;
Coordinate:: Coordinate(int x,int y)
{
	m_iX = x;
	m_iY = y;
	cout << "Coordinate()" <<m_iX<< ","<<m_iY<<endl;
}

Coordinate::~Coordinate()
{
	cout << "~Coordinate()" << m_iX << "," << m_iY << endl;
}

int Coordinate::getX()
{
	return m_iX;
}

int Coordinate::getY()
{
	return m_iY;
}
