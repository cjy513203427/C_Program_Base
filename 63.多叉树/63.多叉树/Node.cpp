#include "Node.h"

Node::Node(int val) : value(val) {}

Node::~Node() {
	for (Node* child : children) {
		delete child;
	}
}