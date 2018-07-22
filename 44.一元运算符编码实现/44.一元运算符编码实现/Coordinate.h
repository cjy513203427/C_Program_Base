#pragma once
#ifndef  COORDINATE_H
#define COORDINATE_H
#include<iostream>
using namespace std;
class Coordinate
{
	//友元函数运算符重载
	friend Coordinate &operator-(Coordinate &c);
public:
	Coordinate(int x, int y);
	//Coordinate &operator-();
	Coordinate &operator++();//前置++运算符重载
	Coordinate operator++(int);//后置++运算符重载
	int getX();
	int getY();

public:
	int m_iX;
	int m_iY;
};
#endif // ! COORDINATE_H
