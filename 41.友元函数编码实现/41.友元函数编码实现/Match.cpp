#include"Match.h"
#include"Time.h"
#include<iostream>
using namespace std;

void Match::printTime(Time&t)
{
	cout << t.m_iHour << ":" << t.m_iMinute << ":" << t.m_iSecond << endl;
}