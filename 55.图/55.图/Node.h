#pragma once
#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;

class Node
{
public:
	Node(char data = 0);
	char m_cData;
	bool m_IsVisited;
};

#endif // !NODE_H
