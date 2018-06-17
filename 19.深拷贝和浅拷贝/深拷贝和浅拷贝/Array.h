#pragma once
class Array
{
public:
	Array(int count);
	Array(const Array &arr);
	~Array();
	void setCount(int count);
	int getCount();
	void printAddr();
	void printArr();
private:
	int m_iCount;
	int *m_pArr;
};
