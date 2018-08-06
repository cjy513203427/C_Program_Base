#pragma once
#ifndef TREE_H
#define TREE_H

class Tree
{
public:
	Tree(int size,int *pRoot);
	~Tree();
	int *SearchNode(int nodeIndex);
	bool AddNode(int nodeIndex, int direction, int *pNode);
	bool DeleteNode(int nodeIndex, int *pNode);
	void TreeTraverse();
private:
	int *m_pTree;
	int m_iSize;
};

#endif // !TREE_H
