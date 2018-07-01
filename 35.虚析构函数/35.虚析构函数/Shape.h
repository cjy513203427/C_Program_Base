#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape
{
public:
	Shape();
	virtual ~Shape();//只要在Shape类的析构函数前加上virtual关键字使其成为虚析构函数
	virtual double calcArea();
};

#endif SHAPE_H