#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include"Shape.h"
using namespace std;

class Circle:public Shape
{
public:
	Circle(double r);
	~Circle();
	virtual double calcArea();

protected:
	double m_dR;
};

#endif CIRCLE_H