#pragma once
using namespace std;
class Coordinate
{
public:
	Coordinate();
	Coordinate(int x,int y);
	~Coordinate();
	void setX(int x);
	int getX() const;//要求传入的参数是常对象指针
	void setY(int y);
	int getY() const;
public:
	int m_iX;
	int m_iY;
};