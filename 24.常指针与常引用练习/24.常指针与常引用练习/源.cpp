#include <iostream>
using namespace std;
class Coordinate
{

public:
	Coordinate(int x, int y)
	{
		// 设置X,Y的坐标
		m_iX = x;
		m_iY = y;
	}
	// 实现常成员函数
	void printInfo() const
	{
		cout << "(" << m_iX << "," << m_iY << ")" << endl;
	}
public:
	int m_iX;
	int m_iY;
};


int main(void)
{
	const Coordinate coor(3, 5);

	// 创建常指针p
	const Coordinate  *p = &coor;
	// 创建常引用c
	const Coordinate &c = coor;

	coor.printInfo();
	p->printInfo();
	c.printInfo();

	system("pause");
	return 0;
}