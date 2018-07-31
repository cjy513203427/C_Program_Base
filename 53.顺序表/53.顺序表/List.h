#pragma once
#ifndef LIST_H
#define LIST_H
#include<iostream>
using namespace std;
class List
{
public:
	List(int size);//初始顺序表
	~List();//删除顺序表
	void ClearList();//清空顺序表
	bool ListEmpty();//顺序表判空
	int ListLength();//获取顺序表长度
	bool GetElem(int i,int *e);//获取指定元素
	int LocateElem(int *e);//寻找第一个等于e的数据元素的位序
	bool PriorElem(int *currentElem, int *preElem);//获取指定元素的前驱
	bool NextElem(int *currentElem, int *nextElem);//获取指定元素的后继
	void ListTraverse();//遍历顺序表
	bool ListInsert(int i,int *Elem);//插入元素
	bool ListDelete(int i,int *Elem);//删除元素
private:
	int *m_pList;//顺序表指针
	int m_iSize;//用户指定的顺序表容量
	int m_iLength;//顺序表长度
};
#endif // !LIST_H
