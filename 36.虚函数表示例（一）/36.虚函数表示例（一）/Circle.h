#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include"Shape.h"
#include"Coordinate.h"
using namespace std;

class Circle:public Shape
{
public:
	Circle(int r);
   ~Circle();

protected:
	int m_dR;
};

#endif CIRCLE_H