#ifndef BINARY_SEARCH_BSTree_H
#define BINARY_SEARCH_BSTree_H

#include <iostream>

namespace algo {
	template <typename T>
	class BinarySearchBSTree {
	private:
		struct BinaryNode {
			T element;
			BinaryNode *left;
			BinaryNode *right;

			BinaryNode(const T & obj = T(),
				BinaryNode *lptr = nullptr,
				BinaryNode *rptr = nullptr)
				: element{ obj }, left{ lptr }, right{ rptr }
			{ }

			BinaryNode(T && obj, BinaryNode *lptr,
				BinaryNode *rptr)
				: element{ std::move(obj) }, left{ lptr }, right{ rptr }
			{ }
		}; // end of struct BinaryNode

	public:
		BinarySearchBSTree();
		BinarySearchBSTree(const BinarySearchBSTree& rhs);
		BinarySearchBSTree(BinarySearchBSTree && rhs);
		BinarySearchBSTree & operator= (const BinarySearchBSTree & rhs);
		BinarySearchBSTree & operator= (BinarySearchBSTree && rhs);
		~BinarySearchBSTree();
		const T & findMin() const;
		const T & findMax() const;
		bool contains(const T & obj) const;
		bool empty() const;
		void printBSTree(std::ostream & out = std::cout) const;
		void clear() const;
		void insert(const T & obj);
		void insert(T && obj);
		void remove(const T & obj);
		const int height() const;
		void prettyPrint() const;
		BinaryNode * getRoot() const;
		void  mirror();

	private:
		BinaryNode * root;

		const T & __findMin(BinaryNode *node) const;
		const T & __findMax(BinaryNode *node) const;
		bool __contains(BinaryNode *node, const T & obj) const;
		void __insert(BinaryNode * & node, const T & obj);
		void __insert(BinaryNode * & node, T && obj);
		void __remove(BinaryNode *node, const T & obj);
		void __clear(BinaryNode *node) const;
		void __printBSTree(BinaryNode *node, std::ostream& out) const;
		BinaryNode  * __copy(BinaryNode *node);
		void __prettyPrint(BinaryNode *node, int indent = 0, std::ostream & out = std::cout) const;
		const int __height(BinaryNode * node);
		void __mirror(BinaryNode * & node);
	}; // end of class BinarySearchBSTree
} // end of namespace algo

  //for more clarity, functions are defined in below file
#include "binarySearchBSTree.impl.h"
#endif