#include"MigrantWorker.h"
#include<iostream>
using namespace std;

MigrantWorker::MigrantWorker(string name, string code):Worker(code),Farmer(name)
{
	cout << "MigrantWorker::MigrantWorker" << endl;	
}

MigrantWorker::~MigrantWorker()
{
	cout << "MigrantWorker::~MigrantWorker" << endl;
}