#pragma once
#ifndef COORDINATE_H
#define COORDINATE_H
#include<iostream>
using namespace std;
class Coordinate {
	friend Coordinate operator+(Coordinate c1, Coordinate c2);//友元函数+重载，相当于operator+(coor1,coor2)
	friend ostream &operator<<(ostream &output, Coordinate &coor);//<<输出符重载
public:
	Coordinate(int x, int y);
	//Coordinate operator+(Coordinate &c);//成员函数+重载，相当于coor1.operator+(coor2)
	int operator[](int index);
	int getX();
	int getY();
private:
	int m_iX;
	int m_iY;
};
#endif // !COORDINATE_H
