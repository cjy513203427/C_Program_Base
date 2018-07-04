#include"Coordinate.h"
#include<iostream>
using namespace std;

Coordinate::Coordinate(int x, int y)
{
	cout << "Coordinate::Coordinate(int x, int y)" << endl;
	m_iX = x;
	m_iY = y;
}

Coordinate::~Coordinate()
{
	cout << "Coordinate::~Coordinate()" << endl;
}