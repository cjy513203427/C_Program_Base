#ifndef BINARY_SEARCH_BSTree_IMPL_H
#define BINARY_SEARCH_BSTree_IMPL_H

#include <stdexcept>
#include "generic.h"

//for pretty printing BSTree
#include <iomanip>
#include <deque>

namespace algo {

	// 默认构造函数
	template <typename T>
	BinarySearchBSTree<T>::BinarySearchBSTree() : root{ nullptr }
	{ }

	// 拷贝构造函数
	template<typename T>
	BinarySearchBSTree<T>::BinarySearchBSTree(const BinarySearchBSTree & rhs)
		: root{ nullptr }
	{
		root = __copy(rhs.root);
	}

	// move constructor
	template<typename T>
	BinarySearchBSTree<T>::BinarySearchBSTree(BinarySearchBSTree && rhs)
		: root{ rhs.root }
	{
		rhs.root = nullptr;
	}


	//copy assignment
	template<typename T>
	BinarySearchBSTree<T>  & BinarySearchBSTree<T>::operator= (const BinarySearchBSTree & rhs)
	{
		BinarySearchBSTree copy = rhs;
		algo::swap(*this, copy);
		return *this;
	}

	// move assignment
	template<typename T>
	BinarySearchBSTree<T> & BinarySearchBSTree<T>::operator= (BinarySearchBSTree && rhs)
	{
		swap(root, rhs.root);
		return *this;
	}

	// 析构函数
	template<typename T>
	BinarySearchBSTree<T>::~BinarySearchBSTree()
	{
		clear();
	}

	// 查找二叉排序树最小元素
	template <typename T>
	const T & BinarySearchBSTree<T>::findMin() const
	{
		if (empty())
			throw std::underflow_error("Empty BSTree");
		return __findMin(root)->element;
	}

	// 查找二叉排序树最大元素
	template <typename T>
	const T & BinarySearchBSTree<T>::findMax() const
	{
		if (empty())
			throw std::underflow_error("Empty BSTree");
		return __findMax(root)->element;
	}

	// 二叉排序树是否含有某元素
	template <typename T>
	bool BinarySearchBSTree<T>::contains(const T & obj) const
	{
		return __contains(root, obj);
	}

	// 树是否为空
	template <typename T>
	bool BinarySearchBSTree<T>::empty() const
	{
		return (root == nullptr);
	}

	// 中序遍历树
	template <typename T>
	void BinarySearchBSTree<T>::printBSTree(std::ostream & out) const
	{
		if (empty()) {
			std::cout << "Empty BSTree\n";
		}
		else {
			__printBSTree(root, out);
		}
	}

	// 清空二叉排序树
	template <typename T>
	void BinarySearchBSTree<T>::clear() const
	{
		__clear(root);
	}

	// 递归插入二叉排序树
	template <typename T>
	void BinarySearchBSTree<T>::insert(const T & obj)
	{
		__insert(root, obj);
	}

	// 迭代插入二叉排序树
	template <typename T>
	void BinarySearchBSTree<T>::insert(T && obj)
	{
		__insert(root, std::move(obj));
	}

	// 删除二叉排序树元素
	template <typename T>
	void BinarySearchBSTree<T>::remove(const T & obj)
	{
		__remove(root, obj);
	}

	//get the height of BSTree
	template <typename T>
	const int BinarySearchBSTree<T>::height() const
	{
		return __height(root);
	}

	//pretty print the BSTree
	template <typename T>
	void BinarySearchBSTree<T>::prettyPrint() const
	{
		__prettyPrint(root);
	}

	template<typename T>
	typename BinarySearchBSTree<T>::BinaryNode* BinarySearchBSTree<T>::getRoot() const
	{
		return root;
	}

	template <typename T>
	const T & BinarySearchBSTree<T>::__findMin(BinaryNode *node) const
	{
		if (node == nullptr)
			return nullptr;
		else if (node->left == nullptr)
			return node;
		else
			return __findMin(node->left);
	}

	template <typename T>
	const T & BinarySearchBSTree<T>::__findMax(BinaryNode *node) const
	{
		if (node == nullptr)
			return nullptr;
		else if (node->right == nullptr)
			return node;
		else
			return __findMax(node->right);
	}


	template <typename T>
	bool BinarySearchBSTree<T>::__contains(BinaryNode *node, const T & obj) const
	{
		if (node == nullptr)
			return false;
		else if (obj < node->element)
			return __contains(node->left, obj);
		else if (obj > node->element)
			return __contains(node->right, obj);
		else
			return true;
	}


	template <typename T>
	void BinarySearchBSTree<T>::__insert(BinaryNode * & node, const T & obj)
	{
		if (node == nullptr) {
			node = new BinaryNode(obj, nullptr, nullptr);
		}
		else if (obj < node->element) {
			__insert(node->left, obj);
		}
		else if (obj > node->element) {
			__insert(node->right, obj);
		}
		else {
			//ignore case of duplicate
		}
	}


	template <typename T>
	void BinarySearchBSTree<T>::__insert(BinaryNode * & node, T && obj)
	{
		if (node == nullptr) {
			node = new BinaryNode(std::move(obj), nullptr, nullptr);
			return;
		}
		BinaryNode * currNode = node;
		bool flag = true;
		while (flag) {
			if (currNode->element > obj) {
				if (currNode->left == nullptr) {
					currNode->left = new BinaryNode(std::move(obj), nullptr, nullptr);
					flag = false;
				}
				else {
					currNode = currNode->left;
				}
			}
			else if (currNode->element < obj) {
				if (currNode->right == nullptr) {
					currNode->right = new BinaryNode(std::move(obj), nullptr, nullptr);
					flag = false;
				}
				else {
					currNode = currNode->right;
				}
			}
			else {
				flag = false;
				//case of duplicate
			}
		}
	}


	template <typename T>
	void BinarySearchBSTree<T>::__remove(BinaryNode *node, const T & obj) {
		if (node == nullptr) {
			return;
		}

		if (obj < node->element) {
			__remove(node->left, obj);
		}
		else if (obj > node->element) {
			__remove(node->right, obj);
		}
		else {
			if (node->left != nullptr &&
				node->right != nullptr) {
				node->element = __findMin(node->right)->element;
				__remove(node->right, node->element);
			}
			else {
				BinaryNode *oldNode = node;
				node = (node->left != nullptr) ? node->left : node->right;
				delete oldNode;
			}

		}
	}


	template <typename T>
	void BinarySearchBSTree<T>::__clear(BinaryNode *node) const
	{
		if (node != nullptr) {
			__clear(node->left);
			__clear(node->right);
			delete node;
		}
	}

	//中序遍历
	template <typename T>
	void BinarySearchBSTree<T>::__printBSTree(BinaryNode *node, std::ostream& out) const
	{
		if (node != nullptr) {
			__printBSTree(node->left, out);
			out << node->element << " ";
			__printBSTree(node->right, out);
		}
	}


	template <typename T>
	typename BinarySearchBSTree<T>::BinaryNode* BinarySearchBSTree<T>::__copy(BinaryNode *node) {
		if (node == nullptr) {
			return nullptr;
		}
		return new BinaryNode(node->element,
			__copy(node->left),
			__copy(node->right));
	}

	template <typename T>
	void BinarySearchBSTree<T>::__prettyPrint(BinaryNode *node, int indent, std::ostream & out) const
	{
		if (node != nullptr) {
			if (node->right != nullptr)
				__prettyPrint(node->right, indent + 4, out);

			if (indent)
				out << std::setw(indent) << ' ';

			if (node->right != nullptr)
				out << " /\n" << std::setw(indent) << ' ';

			out << node->element << std::endl;

			if (node->left != nullptr) {
				out << std::setw(indent) << ' ' << " \\\n";
				__prettyPrint(node->left, indent + 4, out);
			}
		}
	}

	//private function to get BSTree height
	template <typename T>
	const int BinarySearchBSTree<T>::__height(BinaryNode * node)
	{
		if (node == nullptr) {
			return 0;
		}
		int leftHeight = __height(node->left);
		int rightHeight = __height(node->right);
		return ((leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1);
	}

	template <typename T>
	void BinarySearchBSTree<T>::mirror()
	{
		__mirror(root);

	}

	template <typename T>
	void BinarySearchBSTree<T>::__mirror(BinaryNode * & node)
	{
		if (node != nullptr)
		{
			__mirror(node->left);
			__mirror(node->right);
			swap(node->left, node->right);
		}
	}

} //end of namespace algo
#endif //end of BINARY_SEARCH_BSTree_IMPL
