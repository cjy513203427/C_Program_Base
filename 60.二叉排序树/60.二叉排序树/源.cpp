#include "BSTree.h"
#include<iostream>
using namespace std;
/*
前序遍历：0134256
中序遍历：3140526
后序遍历：3415620
(0)
5(1)							 8(2)
2(3)			6(4)			9(5)			7(6)

*/
int main(void)
{
	BSTree *bSTree = new BSTree();

	Node *node1 = new Node();
	node1->index = 1;
	node1->data = 5;

	Node *node2 = new Node();
	node2->index = 2;
	node2->data = 8;

	Node *node3 = new Node();
	node3->index = 3;
	node3->data = 2;

	Node *node4 = new Node();
	node4->index = 4;
	node4->data = 6;

	Node *node5 = new Node();
	node5->index = 5;
	node5->data = 9;

	Node *node6 = new Node();
	node6->index = 6;
	node6->data = 7;

	bSTree->AddNode(0, 0, node1);
	bSTree->AddNode(0, 1, node2);

	bSTree->AddNode(1, 0, node3);
	bSTree->AddNode(1, 1, node4);

	bSTree->AddNode(2, 0, node5);
	bSTree->AddNode(2, 1, node6);
	Node* temp = bSTree->SearchNode(4);
	cout << temp->index << "--" << temp->data << endl;
	//BSTree->DeleteNode(2,NULL);
	bSTree->PreorderTraversal();
	delete bSTree;

	system("pause");
	return 0;
}