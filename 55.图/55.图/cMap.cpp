#include"cMap.h"
#include<vector>
cMap::cMap(int capacity)
{
	m_iCapacity = capacity;
	m_iNodeCount = 0;
	//m_pNodeArray = new Node[m_iCapacity]; It may cause constructor ambiguity

	m_pNodeArray = (Node*) operator new(sizeof(Node)*m_iCapacity);

	for (int i = 0; i < 10; i++) {
		new(&m_pNodeArray[i])Node('0');
	}

	m_pMatrix = new int[m_iCapacity*m_iCapacity];
	//memset(m_pMatrix, 0, m_iCapacity*m_iCapacity * sizeof(int));
	for (int i = 0; i < m_iCapacity*m_iCapacity; i++)
	{
		m_pMatrix[i] = 0;
	}
}

cMap::~cMap()
{
	delete []m_pNodeArray;
	delete []m_pMatrix;
}

bool cMap::addNode(Node *pNode)
{
	if (pNode == NULL) 
	{
		return false;
	}
	//此时m_pNodeArray[m_iNodeCount]是Node类型，非Node*
	m_pNodeArray[m_iNodeCount].m_cData = pNode->m_cData;
	//cout << typeid(m_pNodeArray[m_iNodeCount]).name() << endl;
	m_iNodeCount++;
	return true;
}

void cMap::resetNode()
{
	for (int i = 0; i < m_iNodeCount; i++)
	{
		m_pNodeArray[i].m_IsVisited = false;
	}
}

bool cMap::setValueToMatrixForDirectedGraph(int row, int col, int val)
{
	if(row<0 || row>=m_iCapacity)
	{
		return false;
	}
	if (col < 0 || col >= m_iCapacity)
	{
		return false;
	}
	m_pMatrix[row*m_iCapacity + col] = val;
	return true;
}

bool cMap::setValueToMatrixForUndirectedGraph(int row, int col, int val)
{
	if (row<0 || row >= m_iCapacity)
	{
		return false;
	}
	if (col < 0 || col >= m_iCapacity)
	{
		return false;
	}
	m_pMatrix[row*m_iCapacity + col] = val;
	m_pMatrix[col*m_iCapacity + row] = val;
}

bool cMap::getValueFromMatrix(int row, int col, int &val)
{
	if (row<0 || row >= m_iCapacity)
	{
		return false;
	}
	if (col < 0 || col >= m_iCapacity)
	{
		return false;
	}
	val = m_pMatrix[row*m_iCapacity+col];
	return true;
}

void cMap::printMatrix()
{
	for (int i=0;i<m_iCapacity;i++)
	{
		for (int k = 0; k<m_iCapacity; k++)
		{
			cout << m_pMatrix[i*m_iCapacity + k] << " ";
		}
		cout << endl;
	}
}

//深度优先遍历
void cMap::depthFirstTraverse(int nodeIndex)
{
	int value = 0;
	cout << m_pNodeArray[nodeIndex].m_cData<<" ";
	m_pNodeArray[nodeIndex].m_IsVisited = true;

	for (int i = 0; i < m_iCapacity; i++)
	{
		getValueFromMatrix(nodeIndex,i,value);
		if (value == 1)
		{
			if (m_pNodeArray[i].m_IsVisited == true)
			{
				continue;
			}
			else
			{
				depthFirstTraverse(i);
			}
		}
		else
		{
			continue;
		}
	}
}

void cMap::breadthFirstTraverse(int nodeIndex)
{
	cout << m_pNodeArray[nodeIndex].m_cData<<" ";
	m_pNodeArray[nodeIndex].m_IsVisited = true;

	vector<int> currentVec;
	currentVec.push_back(nodeIndex);

	breathFirstTraverseImpl(currentVec);
}

void cMap::breathFirstTraverseImpl(vector<int> preVec)
{
	int value = 0;
	vector<int> curVec;

	for (int j = 0; j < (int)preVec.size(); j++)
	{
		for (int i = 0; i < m_iNodeCount; i++)
		{
			getValueFromMatrix(preVec[j],i,value);
			if (value != 0)
			{
				if (m_pNodeArray[i].m_IsVisited)
				{
					continue;
				}
				else
				{
					cout << m_pNodeArray[i].m_cData << " ";
					m_pNodeArray[i].m_IsVisited = true;

					curVec.push_back(i);
				}
			}
		}
	}
	if (curVec.size() == 0)
	{
		return;
	}
	else
	{
		breathFirstTraverseImpl(curVec);
	}
}