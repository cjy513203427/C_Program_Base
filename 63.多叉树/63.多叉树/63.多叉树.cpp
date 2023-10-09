#include "Tree.h"
using namespace std;
#include <iostream>

int main() {
	// 创建树
	Tree tree(1);

	// 添加子节点
	tree.addChild(tree.root, 2);
	tree.addChild(tree.root, 3);
	tree.addChild(tree.root->children[0], 4);
	tree.addChild(tree.root->children[1], 5);

	// 遍历树
	std::cout << "树的遍历结果";
	tree.bfs(tree.root);
	std::cout << std::endl;

	return 0;
}