#include<iostream>
#include"Infantry.h"
using namespace std;

Infantry::Infantry(string name,int age)
{
	m_strName = name;
	m_iAge = age;
	cout << "Infantry::Infantry(string name,int age)" << endl;
}

Infantry::~Infantry()
{
	cout << "Infantry::~Infantry()"<<endl;
}

void Infantry::attack()
{
	m_strName = "Jim";
	cout << m_strName<<endl;
	cout << "Infantry::attack()" << endl;
}