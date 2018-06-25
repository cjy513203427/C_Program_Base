#include"MigrantWorker.h"
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	/*菱形继承 多继承和多重继承会出现问题呢？ 如图，假设类a是父类，b类和c类都继承了a类，而d类又继承了b和c，
	那么由于d类进行了两次多重继承a类，就会出现两份相同的a的数据成员或成员函数，就会出现代码冗余。
	如何避免该情况的发生，就可以使用虚继承virtual*/
	MigrantWorker *m = new MigrantWorker("Miga","200","yellow");
	m->Farmer::printColor();
	m->Worker::printColor();
	delete m;
	m = NULL;
	system("pause");
	return 0;
}