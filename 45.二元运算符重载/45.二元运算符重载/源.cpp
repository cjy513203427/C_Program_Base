#include<iostream>
using namespace std;
#include "Coordinate.h"
//索引运算符不可以友元函数重载。
//因为友元函数的第一个参数可以是this指针也可以是其他的值。
//但索引运算符必须传入this指针。


//<< 运算符的重载不可以用成员函数重载。
//因为成员函数重载，ostream类型的output占据了最左边的位置，传入的参数一定在右边
//所以无法获得当前指针，coor.operator<<()里的coor由于当前指针获取不到，失败。
//operator<<(output,coor)这样才可以呢

int main(void)
{
	Coordinate coor1(1, 3);
	Coordinate coor2(3, 5);
	Coordinate coor3(0, 0);
	coor3 = coor1 + coor2;
	//cout << coor3.getX()<<","<<coor3.getY() << endl;
	//cout << coor3;//利用了输出符重载
	cout << coor3[0]<< endl;//索引[]重载
	cout << coor3[1] << endl;
	system("pause");
	return 0;
}