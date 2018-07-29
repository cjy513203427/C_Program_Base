#pragma once
#include<iostream>
using namespace std;
#ifndef MYQUEUE_H
#define MYQUEUE_H
//环形队列的实现
class MyQueue
{
public:
	MyQueue(int queueCapacity);//创建队列
	virtual ~MyQueue();//销毁队列
	void ClearQueue();//清空队列
	bool QueueEmpty() const;//判空队列
	bool QueueFull() const;//判满队列
	int QueueLength() const;//队列长度
	bool EnQueue(int element);//新元素入队
	bool DeQueue(int &element);//首元素出队
	void QueueTraverse();//遍历队列
private:
	int *m_pQueue;//队列数组指针
	int m_iQueueLen;//队列元素个数
	int m_iQueueCapacity;//队列数组容量
	int m_iHead;
	int m_iTail;
};

#endif // !MYQUEUE_H