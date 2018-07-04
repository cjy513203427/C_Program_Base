#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape
{
public:
	Shape();
   //~Shape();
    //double calcArea();
	virtual ~Shape();//定义虚析构函数也会在实例化引用虚函数表指针，占用4个内存单元
	virtual double calcArea();//虚函数会在实例化引用虚函数表指针，占用4个内存单元
};

#endif SHAPE_H