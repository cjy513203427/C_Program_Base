#include"Person.h"
#include<iostream>
using namespace std;
Person::Person(string name)
{
	cout << "Person()" << endl;
}

Person::~Person()
{
	cout << "~Person()" << endl;
}

void Person::work()
{
	m_strName = "Jim";
	cout << "eat()" << endl;
}