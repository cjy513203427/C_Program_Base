#include"Farmer.h"
#include<iostream>
Farmer::Farmer(string name,string color):Person("Farmer"+color)
{
	m_strName = name;
	cout << "Farmer::Farmer(string name,string color)" << endl;
}

 Farmer::~Farmer()
{
	cout << "Farmer::~Farmer()" << endl;
}

void Farmer::sow()
{
	cout << m_strName << endl;
	cout << "Farmer::sow()" << endl;
}