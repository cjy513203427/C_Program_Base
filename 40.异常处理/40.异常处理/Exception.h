#pragma once
#ifndef EXCEPTION_H
#define EXCEPTION_H

class Exception
{
public:
	virtual void printException();
	//虚函数必须要被派生类实现
	//virtual ~Exception();
};
#endif // !EXCEPTION_H
