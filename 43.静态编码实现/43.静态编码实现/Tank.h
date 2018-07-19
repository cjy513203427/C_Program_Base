#pragma once
#ifndef TANK_H
#define TANK_H

class Tank
{
public:
	Tank(char code);
	~Tank();
	void fire();
	static int getCount();
private:
	static int s_iCount;
	char m_cCode;
};

#endif // !TANK_H
