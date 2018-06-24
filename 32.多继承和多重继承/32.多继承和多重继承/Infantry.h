#pragma once
#include"Soldier.h"

class Infantry:public Soldier
{
public:
	Infantry(string name = "Jack", int age = 30);
	~Infantry();
	void attack();
};