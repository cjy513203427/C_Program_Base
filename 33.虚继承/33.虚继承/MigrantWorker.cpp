#include"MigrantWorker.h"
#include<iostream>
using namespace std;

MigrantWorker::MigrantWorker(string name, string code,string color):Worker(code,color),Farmer(name,color)
{
	cout << "MigrantWorker::MigrantWorker" << endl;	
}

MigrantWorker::~MigrantWorker()
{
	cout << "MigrantWorker::~MigrantWorker" << endl;
}