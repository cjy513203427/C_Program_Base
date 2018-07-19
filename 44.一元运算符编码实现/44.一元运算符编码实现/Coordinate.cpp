#include"Coordinate.h"

Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
}

int Coordinate::getX()
{
	return m_iX;
}

int Coordinate::getY()
{
	return m_iY;
}

//内置函数重载运算符
//Coordinate &Coordinate::operator-()
//{
//	m_iX = -m_iX;
//	this->m_iY = -this->m_iY;//通过this取相反
//	return *this;
//}

//负号运算符重载
Coordinate &operator-(Coordinate &c)
{
	c.m_iX = -c.m_iX;
	c.m_iY = -c.m_iY;
	return c;
}
//++运算符重载
Coordinate &Coordinate::operator++()
{
	//在重载函数内部写前置++和后置++效果是一样的
	//根据运算符重载函数是前置还是后置判断
	m_iX++;
	m_iY++;
	return *this;
}

Coordinate Coordinate::operator++(int)
{
	Coordinate old(*this);
	this->m_iX++;
	this->m_iY++;
	return old;
}