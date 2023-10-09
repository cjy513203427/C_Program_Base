#include "Tree.h"
#include <iostream>
#include <queue>

Tree::Tree(int val) {
	root = new Node(val);
}

Tree::~Tree() {
	delete root;
}

void Tree::addChild(Node* parent, int val) {
	Node* child = new Node(val);
	parent->children.push_back(child);
}

void Tree::preorderTraversal(Node* node) {
	if (node == nullptr) {
		return;
	}

	std::cout << node->value << " ";

	for (Node* child : node->children) {
		preorderTraversal(child);
	}
}

void Tree::inorderTraversal(Node* node) {
	if (node == nullptr) {
		return;
	}

	if (!node->children.empty()) {
		inorderTraversal(node->children[0]);
	}

	std::cout << node->value << " ";

	for (size_t i = 1; i < node->children.size(); ++i) {
		inorderTraversal(node->children[i]);
	}
}

void Tree::postorderTraversal(Node* node) {
	if (node == nullptr) {
		return;
	}

	for (Node* child : node->children) {
		postorderTraversal(child);
	}

	std::cout << node->value << " ";
}

void Tree::bfs(Node* node) {
	if (node == nullptr) {
		return;
	}

	std::queue<Node*> q;
	q.push(node);

	while (!q.empty()) {
		Node* curr = q.front();
		q.pop();

		std::cout << curr->value << " ";

		for (Node* child : curr->children) {
			q.push(child);
		}
	}
}

void Tree::dfs(Node* node) {
	dfsHelper(node);
}

void Tree::dfsHelper(Node* node) {
	if (node == nullptr) {
		return;
	}

	std::cout << node->value << " ";

	for (Node* child : node->children) {
		dfsHelper(child);
	}
}
