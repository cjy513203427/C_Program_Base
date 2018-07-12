#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;
//抽象类不可以实例化
//包含纯虚函数的类为抽象类
class Person
{
public:
	Person(string name);
	virtual~Person();
	virtual void work()=0;//虚函数值为0即纯虚函数
protected:
	string m_strName;
};
#endif PERSON_H