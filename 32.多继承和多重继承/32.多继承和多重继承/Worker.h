#pragma once
//ผฬณะหญาýำรหญ
#include"Person.h"

class Worker
{
public:
	Worker(string code = "001");
	virtual ~Worker();
	void work();
	int m_iSalary;
	void carry();
protected:
	string m_strCode;
};