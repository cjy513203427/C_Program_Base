#include <stdlib.h>
#include <iostream>
using namespace std;

class Coordinate
{
public:
	int x;
	int y;
	void printX()
	{
		cout << x << endl;
	}
	void printY()
	{
		cout << y << endl;
	}

};

int main()
{
	Coordinate coor;
	coor.x = 10;
	coor.y = 20;
	coor.printX();
	coor.printY();

	Coordinate *p = new Coordinate();
	if (p == NULL)
	{
		return 0;
	}
	p->x = 100;
	p->y = 200;
	p->printX();
	p->printY();
	delete p;
	p = NULL;
	system("pause");
	return 0;
}