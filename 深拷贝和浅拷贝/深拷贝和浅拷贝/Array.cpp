#include<iostream>
using namespace std;
#include "Array.h"
Array::Array(int count) 
{
	m_iCount = count;
	m_pArr = new int[m_iCount];
	//数组指向0,1,2...
	for (int i = 0; i < m_iCount; i++)
	{
		m_pArr[i] = i;
	}
	cout << "Array" << endl;
}

Array::Array(const Array &arr)
{
	//深拷贝指的是
	//拷贝函数也申请内存，拷贝函数的内存独立于原函数，再通过循环赋值相等
	m_iCount = arr.m_iCount;
	m_pArr = new int[m_iCount];
	for (int i = 0; i < m_iCount; i++)
	{
		m_pArr[i] = arr.m_pArr[i];
	}
	cout << "Array &arr" << endl;
}

Array::~Array()
{
	delete[]m_pArr;
	m_pArr = NULL;
	cout << "~Array()" << endl;
}

void Array::setCount(int count)
{
	m_iCount = count;
}

int Array::getCount()
{
	return m_iCount;
}


void Array::printAddr()
{
	cout << "m_pArr的值是" << m_pArr << endl;
}

void Array::printArr()
{
	for (int i = 0; i < m_iCount; i++)
	{
		cout << m_pArr[i] << endl;
	}
}