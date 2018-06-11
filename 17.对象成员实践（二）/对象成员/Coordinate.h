#pragma once
using namespace std;
class Coordinate
{
public:
	Coordinate();
	Coordinate(int x,int y);
	~Coordinate();
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
public:
	int m_iX;
	int m_iY;
};