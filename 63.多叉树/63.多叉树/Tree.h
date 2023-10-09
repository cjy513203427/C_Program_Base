#pragma once
#ifndef TREE_H
#define TREE_H

#include "Node.h"

class Tree {
public:
	Node* root;

	Tree(int val);
	~Tree();

	void addChild(Node* parent, int val);
	void preorderTraversal(Node* node);
	void inorderTraversal(Node* node);
	void postorderTraversal(Node* node);
	void bfs(Node* node);
	void dfs(Node* node);

private:
	void dfsHelper(Node* node);
};

#endif // TREE_H
