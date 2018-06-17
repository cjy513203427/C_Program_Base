#include<iostream>
#include "Array.h"
using namespace std;
Array::Array(int len)
{
	this->len = len;
	cout << "Array(int len)" << endl;
}

Array::~Array()
{

}
//若想让setLen起作用，必须将其返回*this，否则无效
//如Array Array::setLen(int len){return *this}
Array *Array::setLen(int len)
{
	this->len = len;
	return this;
}

int Array::getLen()
{
	return len;
}

Array *Array::printInfo()
{
	//cout << "len="<<len << endl;
	cout << this << endl;
	return this;
}