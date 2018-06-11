#pragma once
#include "Coordinate.h"

class Line
{
public:
	Line(int x1, int y1,int x2,int y2);
	~Line();
	void setA(int x, int y);
	void setB(int x, int y);
	void printInfo();
private:
	Coordinate m_coorA;
	Coordinate m_coorB;
};