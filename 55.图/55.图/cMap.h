#pragma once
#ifndef CMAP_H
#define CMAP_H
#include"Node.h"
#include<vector>
class cMap
{
public:
	cMap(int capacity);
	~cMap();
	bool addNode(Node *pNode);//��ͼ�м��붥�㣨��㣩
	void resetNode();//���ö���
	bool setValueToMatrixForDirectedGraph(int row, int col, int val = 1);//Ϊ����ͼ�����ڽӾ���
	bool setValueToMatrixForUndirectedGraph(int row, int col, int val = 1);//Ϊ����ͼ�����ڽӾ���

	void printMatrix();//��ӡ�ڽӾ���

	void depthFirstTraverse(int nodeIndex);//������ȱ���
	void breadthFirstTraverse(int nodeIndex);//������ȱ���
	void breathFirstTraverseImpl(vector<int> preVec);

private:
	bool getValueFromMatrix(int row,int col,int &val);//�Ӿ����л�ȡȨֵ
	void breathFirstTraverse(int nodeIndex);//������ȱ���ʵ�ֺ���

private:
	int m_iCapacity;//ͼ�����������ɵĶ�����
	int m_iNodeCount;//�Ѿ���ӵĽ�㣨���㣩����
	Node *m_pNodeArray;//������Ŷ�������
	int *m_pMatrix;//��������ڽӾ���

	std::vector<Node> nodes;
};

#endif // !CMAP_H
