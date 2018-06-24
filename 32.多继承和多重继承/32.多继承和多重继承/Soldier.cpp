#include<iostream>
#include"Soldier.h"
using namespace std;

Soldier::Soldier(string name, int age)
{
	m_strName = name;
	m_iAge = age;
	cout << "Soldier::Soldier(string name, int age)" << endl;
}

Soldier::~Soldier()
{
	cout << "Soldier::~Soldier()" << endl;
}

void Soldier::work()
{
	m_strName = "Jim";
	m_iAge = 20;
	cout << m_strName<<endl;
	cout << m_iAge << endl;
	cout << "Soldier::work()"<<endl;
}