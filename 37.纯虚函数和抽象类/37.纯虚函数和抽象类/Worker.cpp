#include<iostream>
#include"Worker.h"
using namespace std;

Worker::Worker(string name,int age):Person(name)
{
	cout << "Worker()" << endl;
}

Worker::~Worker()
{
	cout << "~Worker()" << endl;
}

void Worker::work()
{
	m_strName = "Jim";
	cout << "work()" << endl;
}