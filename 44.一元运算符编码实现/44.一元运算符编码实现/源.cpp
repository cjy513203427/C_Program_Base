#include"Coordinate.h"
#include<iostream>
using namespace std;
int main(void)
{
	Coordinate coor(1, 3);
	cout << coor.getX() << "," << coor.getY() << endl;

	//ºóÖÃ++ÔËËã·û
	cout << (coor++).getX() << ",";
	cout<< (coor++).getY() << endl;
	cout << coor.getX() << "," << coor.getY() << endl;
	/*++coor;
	cout << coor.getX() << "," << coor.getY() << endl;*/
		
	/*-coor;
	cout << coor.getX() << "," << coor.getY() << endl;*/
	system("pause");
	return 0;
}