#pragma once
#ifndef TIME_H
#define TIME_H
#include<iostream>
#include"Match.h"
using namespace std;
class Time
{
	//来自Match的友元函数
	//可以直接访问该类的私有成员
	friend void Match::printTime(Time&t);
public:
	Time(int hour, int min, int second);
private:
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};
#endif // !TIME_H
