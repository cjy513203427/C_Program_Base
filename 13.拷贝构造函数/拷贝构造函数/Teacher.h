#pragma once
#include <string>

using namespace std;
class Teacher
{
public:
	Teacher(string name = "Jim", int age = 1);
	Teacher(const Teacher&tea);
	void setName(string _name);
	string getName();
	void setGender(string gender);
	string getGender();
	void setAge(int _age);
	int getAge();
	void teach();
private:
	string m_strName;
	string m_strGender;
	int m_iAge;
};