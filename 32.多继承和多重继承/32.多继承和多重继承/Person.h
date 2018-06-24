#pragma once
#include<string>
using namespace std;
class Person
{
public:
	Person(string name="AA");
	virtual~Person();
	void play();
protected:
	string m_strName;
};