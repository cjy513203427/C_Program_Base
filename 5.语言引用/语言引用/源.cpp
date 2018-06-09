#include <stdlib.h>
#include <iostream>
using namespace std;

typedef struct
{
	int x;
	int y;
}Coor;

int main()
{
	int a = 10;
	int &b = a;//这里&不代表地址，是给变量a起别名为b。起别名的作用
	b = 10;
	cout << b << endl;

	Coor c1;
	Coor &c = c1;
	c.x = 10;
	c.y = 20;
	cout << c1.x << c1.y << endl;
	system("pause");
	return 0;
}