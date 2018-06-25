#pragma once
#ifndef PERSON_H
#define PERSON_H
//上述写法据说可以解决重定义错误
#include<string>
using namespace std;
class Person
{
public:
	Person(string color="blue");
	virtual~Person();
	void printColor();
protected:
	string m_strColor;
};


#endif // !1