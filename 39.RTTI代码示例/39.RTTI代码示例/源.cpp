#include"Plane.h"
#include"Bird.h"
#include <iostream>
using namespace std;
//RTTI:Run Time Type Identification，运行时类型异常
//typeid()类似于Java中istanceof()
void doSomething(Flyable *obj) 
{
	cout << typeid(*obj).name() << endl;
	obj->takeoff();
	if (typeid(*obj) == typeid(Bird))
	{
		//dynamic_cast不能转换不含虚函数的对象
		//dynamic_cast参数是一个对象的引用或者指针
		Bird *bird = dynamic_cast<Bird*>(obj);
		bird->foraging();
	}

	if (typeid(*obj) == typeid(Plane))
	{
		Plane *plane = dynamic_cast<Plane*>(obj);
		plane->carry();
	}
	obj->land();
}

int main(void)
{
	/*Plane b;
	doSomething(&b);*/
	/*int i = 0;
	cout << typeid(i).name() << endl;*/
	Flyable *f = new Bird();
	cout << typeid(f).name() << endl;
	cout << typeid(*f).name() << endl;
	system("pause");
	return 0;
}