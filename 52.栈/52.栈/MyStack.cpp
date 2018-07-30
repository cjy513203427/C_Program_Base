#include"MyStack.h"
MyStack::MyStack(int size)
{
	m_iSize = size;
	m_pBuffer = new char[m_iSize];
	m_iTop = 0;
}

MyStack::~MyStack()
{
	delete[]m_pBuffer;
	m_pBuffer = NULL;
}

bool MyStack::stackEmpty()
{
	return 0 == m_iTop ? true : false;//0 == m_iSize这样的写法，编译器更敏感，防止一个“=”的错误不报
}

bool MyStack::stackFull()
{
	return m_iTop == m_iSize ? true : false;
}

void MyStack::clearStack()
{
	m_iTop = 0;
}

int MyStack::stackLength()
{
	return m_iTop;
}

bool MyStack::push(char elem)
{
	if (stackFull()) {
		return false;
	}
	else {
		m_pBuffer[m_iTop] = elem;
		m_iTop++;
		return true;
	}
}

bool MyStack::pop(char &elem)
{
	if (stackEmpty())
	{
		return false;
	}
	else {
		//先做--操作，因为入栈m_iTop++，m_iTop指向了一个空的区域
		m_iTop--;
		elem = m_pBuffer[m_iTop];
		return true;
	}
}

void MyStack::stackTraverse(bool isAsc)
{
	if (isAsc) {
		for (int i = 0; i < m_iTop; i++)
		{
			cout << m_pBuffer[i] << ",";
		}
	}
	else {
		for (int i = m_iTop - 1; i >= 0; i--)
		{
			cout << m_pBuffer[i] << ",";
		}
	}
}
