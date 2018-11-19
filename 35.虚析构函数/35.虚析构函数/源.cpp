#include"Shape.h"
#include"Circle.h"
#include"Rect.h"

int main(void)
{
	//构造函数前不可以加virtual
	//全局函数不可以加virtual
	//静态成员函数不可以加virtual，virtual不能和static连用
	//内联函数不推荐加virtual，会把inline忽略掉
	Shape *shape1 = new Rect(1,3);
	Shape *shape2 = new Circle(8);
	//只要在Shape类的析构函数前加上virtual关键字使其成为虚析构函数
	//它的派生类析构函数也变成了虚析构函数，最好子类的析构函数也加上virtual关键字

	//虚函数可以使父类调用子类的析构函数，防止内存泄露
	shape1->calcArea();
	shape2->calcArea();

	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	system("pause");
	return 0;
}