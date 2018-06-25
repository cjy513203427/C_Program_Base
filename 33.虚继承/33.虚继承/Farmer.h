#pragma once
#include<string>
#include"Person.h"
using namespace std;

class Farmer:virtual public Person
{
public:
	Farmer(string name = "Jack",string color = "blue");
	virtual~Farmer();
	void sow();
protected:
	string m_strName;
};