#include"Tree.h"
#include<iostream>
using namespace std;
#include <queue>
Tree::Tree()
{
	m_pRoot = new Node();
};

Tree::~Tree()
{
	//DeleteNode(0, NULL);
	m_pRoot->DeleteNode();
}

Node *Tree::SearchNode(int nodeIndex)
{
	return m_pRoot->SearchNode(nodeIndex);
}
//nodeIndex�ǹ��ؽ�㣬�����ڵ�����
bool Tree::AddNode(int nodeIndex, int direction, Node* pNode)
{
	Node *temp = SearchNode(nodeIndex);
	if (temp == NULL)
	{
		return false;
	}

	Node *node = new Node();
	if (node == NULL)
	{
		return false;
	}
	node->index = pNode->index;
	node->data = pNode->data;
	node->pParent = temp;

	if (direction == 0)
	{
		temp->pLChild = node;
	}

	if (direction == 1)
	{
		temp->pRChild = node;
	}

	return true;
}

bool Tree::DeleteNode(int nodeIndex, Node* pNode)
{
	Node *temp = SearchNode(nodeIndex);
	if (temp == NULL)
	{
		return false;
	}

	if (pNode != NULL)
	{
		pNode->data = temp->data;
	}

	temp->DeleteNode();
	return true;
}

void Tree::PreorderTraversal()
{
	m_pRoot->PreorderTraversal();
}

void Tree::InorderTraversal()
{
	m_pRoot->InorderTraversal();
}

void Tree::PostorderTraversal()
{
	m_pRoot->PostorderTraversal();
}

void Tree::DFS()
{
    DFSRecursive(m_pRoot);
}

void Tree::DFSRecursive(Node* node)
{
    if (node == NULL)
    {
        return;
    }

    // 遍历当前节点
    cout << node->index << "  " << node->data << endl;

    // 遍历左子树
    DFSRecursive(node->pLChild);

    // 遍历右子树
    DFSRecursive(node->pRChild);
}

void Tree::BFS()
{
    if (m_pRoot == NULL)
    {
        return;
    }

    queue<Node*> q;
    q.push(m_pRoot);

    while (!q.empty())
    {
        Node* node = q.front();
        q.pop();

        // 遍历当前节点
        cout << node->index << "  " << node->data << endl;

        // 将左子节点入队
        if (node->pLChild != NULL)
        {
            q.push(node->pLChild);
        }

        // 将右子节点入队
        if (node->pRChild != NULL)
        {
            q.push(node->pRChild);
        }
    }
}
