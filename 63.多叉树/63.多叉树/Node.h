#pragma once
#ifndef NODE_H
#define NODE_H

#include <vector>

class Node {
public:
	int value;
	std::vector<Node*> children;

	Node(int val);
	~Node();
};

#endif // NODE_H
