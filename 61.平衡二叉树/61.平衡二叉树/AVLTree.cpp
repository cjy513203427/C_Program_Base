#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

#include"AVLTree.h"

void Test()
{
	/*
	该平衡二叉树如下

			11
		  /   \
		7	   15
	   / \    /  \
	  3	  9  14	  18
     / \     /    / \
    1   5	12   16	 20
				     /
				   26
	
	
	*/
	AVLTree<int, int> tree;
	int a[] = { 16, 3, 7, 11, 9, 26, 18, 14, 15 ,1,5,12,20 };
	for (size_t i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
	{
		tree.Insert(a[i], i);
	}
	cout << "前序遍历" << endl;
	tree.PreOrder();
	cout << "中序遍历" << endl;
	tree.InOrder();
	cout << "后序遍历" << endl;
	tree.PostOrder();

	cout << "height=" << tree.Height() << endl;
	bool ret = tree.IsBalance();
	if (ret == true)
		cout << "This AVLTree is in balanced !" << endl;
	else
		cout << "This AVLTree is in a state of imbalance !" << endl;
}

int main()
{
	Test();
	system("pause");
	return 0;
}