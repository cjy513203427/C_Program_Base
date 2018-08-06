#pragma once
#ifndef NODE_H
#define NODE_H

class Node
{
public:
	Node();
	Node *SearchNode(int nodeIndex);
	void DeleteNode();
	void PreorderTraversal();
	void InorderTraversal();
	void PostorderTraversal();
	int index;
	int data;
	Node *pLChild;
	Node *pRChild;
	Node *pParent;
private:

};

#endif // !NODE_H
