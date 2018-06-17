#pragma once
class Coordinate
{
public:
	Coordinate(int x,int y);
	~Coordinate();
	int getX();
	int getY();
public:
	int m_iX;
	int m_iY;
};