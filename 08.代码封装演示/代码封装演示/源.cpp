#include<stdlib.h>
#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	void setName(string _name)
	{
		m_strName = _name;
	}
	string getName()
	{
		return m_strName;
	}

	void setGender(string _gender)
	{
		m_strGender = _gender;
	}
	string getGender()
	{
		return m_strGender;
	}

	int getScore()
	{
		return m_iScore;
	}

	void initScore()
	{
		m_iScore = 0;
	}

	void study(int _score)
	{
		m_iScore += _score;
	}
private:
	string m_strName;
	string m_strGender;
	int m_iScore;
};

int main(void)
{
	Student stu;
	stu.initScore();
	stu.setName("ÕÅÈı");
	stu.setGender("Å®");
	stu.study(3);
	stu.study(3);
	cout << stu.getName() << stu.getGender() << stu.getScore();
	system("pause");
	return 0;
}