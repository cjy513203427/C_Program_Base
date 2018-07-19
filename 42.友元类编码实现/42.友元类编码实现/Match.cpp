#include"Match.h"
#include"Time.h"
#include<iostream>
using namespace std;

Match::Match(int hour, int min, int sec):m_tTimer(hour,min,sec)
{

}

void Match::testTime()
{
	m_tTimer.printTime();
	cout << m_tTimer.m_iHour << ":" << m_tTimer.m_iMinute << ":" << m_tTimer.m_iSecond << endl;
}