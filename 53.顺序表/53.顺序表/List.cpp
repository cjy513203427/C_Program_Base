#include"List.h"

List::List(int size)
{
	m_iSize = size;
	m_pList = new int[m_iSize];
	m_iLength = 0;
}

List::~List()
{
	delete[] m_pList;
	m_pList = NULL;
}

void List::ClearList()
{
	m_iLength = 0;
}

bool List::ListEmpty()
{
	return 0 == m_iLength ? true : false;
}

int List::ListLength()
{
	return m_iLength;
}

bool List::GetElem(int i, int *e)//？？？
{
	if (i < 0 || i >= m_iSize)
	{
		return false;
	}
	else {
		*e = m_pList[i];
		return true;
	}
}

int List::LocateElem(int *e)
{
	for (int i = 0; i < m_iLength; i++)
	{
		if (m_pList[i] == *e)
		{
			return i;
		}
	}
	return -1;
}

bool List::PriorElem(int *currentElem, int *preElem)
{
	int temp = LocateElem(currentElem);
	if (temp == -1)
	{
		return false;
	}
	else {
		if (temp == 0)
		{
			return false;
		}
		else 
		{
			*preElem = m_pList[temp - 1];
			return true;
		}
	}
}

bool List::NextElem(int *currentElem, int *nextElem)
{
	int temp = LocateElem(currentElem);
	if (temp == -1)
	{
		return false;
	}
	else {
		if (temp == m_iLength-1)
		{
			return false;
		}
		else
		{
			*nextElem = m_pList[temp + 1];
			return true;
		}
	}
}

void List::ListTraverse()
{
	for (int i = 0; i < m_iLength; i++)
	{
		cout << m_pList[i] << endl;
	}
}

bool List::ListInsert(int i, int *Elem)
{
	if (i<0 || i>m_iLength)
	{
		return false;
	}
	else
	{
		//先在后面进行移动
		for (int k = m_iLength - 1; k >= i; k--)
		{
			m_pList[k + 1] = m_pList[k];
		}
		//插入元素
		m_pList[i] = *Elem;
		m_iLength++;
		return true;
	}
}

bool List::ListDelete(int i, int *Elem)
{
	if (i<0 || i>=m_iLength)
	{
		return false;
	}
	else
	{
		*Elem = m_pList[i];
		//先在前面进行移动，从后面开始移动会造成值的替代
		//k=i+1对应着k-1,若k=i,k <= m_iLength-1,m_pList[k] = m_pList[k+1];
		for (int k = i+1; k <= m_iLength; k++)
		{
			m_pList[k-1] = m_pList[k];
		}

		m_iLength--;
		return true;
	}
}