#include<iostream>
#include"Worker.h"
using namespace std;

Worker::Worker()
{
	cout << "Worker()" << endl;
}

Worker::~Worker()
{
	cout << "~Worker()" << endl;
}

void Worker::work()
{
	cout << "work()" << endl;
}