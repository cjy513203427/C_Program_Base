#pragma once
#ifndef TIME_H
#define TIME_H
#include<iostream>
using namespace std;
class Match;//提醒计算机我们需要使用这个类
class Time
{
	friend Match;//友元类
public:
	Time(int hour, int min, int second);
private:
	void printTime();
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};
#endif // !TIME_H
