#pragma once
#include<string>
#include"Person.h"
using namespace std;

class Farmer
{
public:
	Farmer(string name = "Jack");
	virtual~Farmer();
	void sow();
protected:
	string m_strName;
};