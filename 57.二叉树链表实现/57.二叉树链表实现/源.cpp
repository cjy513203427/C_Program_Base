#include "Tree.h"
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
	Tree *tree = new Tree();

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

	tree->AddNode(0,0, node1);
	tree->AddNode(0, 1, node2);

	tree->AddNode(1, 0, node3);
	tree->AddNode(1, 1, node4);

	tree->AddNode(2, 0, node5);
	tree->AddNode(2, 1, node6);
	tree->DeleteNode(5,NULL);
	tree->PostorderTraversal();
	delete tree;

	system("pause");
	return 0;
} 