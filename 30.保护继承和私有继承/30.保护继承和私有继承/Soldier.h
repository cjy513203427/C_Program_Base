#pragma once
#include"Person.h"
class Soldier:public Person
{
public:
	Soldier();
	void work();
private:
	int m_iAge;
};