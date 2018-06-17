#include<iostream>
#include "Coordinate.h"
using namespace std;

Coordinate::Coordinate()
{
	cout << "Coordinate()" << endl;
}

Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
	cout << "Coordinate()" <<m_iX <<","<<m_iY<<endl;
}

Coordinate::~Coordinate()
{
	cout << "~Coordinate()" << m_iX << "," << m_iY << endl;
}

void Coordinate::setX(int x)
{
	m_iX = x;
}

int Coordinate::getX()const
{
	return m_iX;
}

void Coordinate::setY(int y)
{
	m_iY = y;
}

int Coordinate::getY()const
{
	return m_iX;
}