// BSTree.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "BSTree.h"
#include<iostream>
using namespace std;
int main()
{
	/*
	该二叉排序树结构：

				62
			   /  \
			 58	  88
			/    /  \
		  47    73	 99
	     /  \	      \
	   35	 51	       93
	    \                \
		 37				  95
	*/
	BSTree<int> t;
	t.insert(62);
	t.insert(58);
	t.insert(47);
	t.insert(51);
	t.insert(35);
	t.insert(37);
	t.insert(88);
	t.insert(73);
	t.insert(99);
	t.insert(93);
	t.insert(95);

	cout << endl << "中序遍历：" << endl;
	t.inOrder();
	cout << endl << "前序遍历：" << endl;
	t.preOrder();
	cout << endl << "后序遍历：" << endl;
	t.postOrder();

	/*BSNode<int>* t1 = nullptr;
	t1->value = 10;
	t1->lchild = nullptr;
	t1->rchild = nullptr;
	t1->parent = nullptr;
	cout<<t.predecessor(t1)<<endl;*/

	cout << "最大元素:" << t.search_maximum() << endl;
	cout << "最小元素:" << t.search_minimun() << endl;

	cout << "删除元素99" << endl;
	t.remove(99);

	cout << "最大元素:" << t.search_maximum() << endl;

	t.destory();

	getchar();
	return 0;
}