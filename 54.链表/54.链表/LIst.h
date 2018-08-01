#pragma once
#include"Node.h"
#ifndef LIST_H
#define LIST_H
#include<iostream>
using namespace std;
class List
{
public:
	List();//构造函数
	~List();//析构函数
	void ClearList();//清空链表
	bool ListEmpty();//链表判空
	int ListLength();//链表长度
	bool GetElem(int i, Node *pNode);//获取指定索引的元素
	int LocateElem(Node *pNode);//获取指定元素的索引
	bool PriorElem(Node *pCurrentNode, Node *pPreNode);//获取前驱结点
	bool NextElem(Node *pCurrentNode, Node *pNextNode);//获取后继结点
	void ListTraverse();//遍历
	bool ListInsert(int i,Node *pNode);//插入元素
	bool ListDelete(int i, Node *pNode);//删除元素
	bool ListInsertHead(Node *pNode);//插入在头结点后面
	bool ListInsertTail(Node *pNode);//插入到链表最后
private:
	Node * m_pList;
	int m_iLength;
};

#endif // !LIST_H
