#include"Shape.h"
#include"Circle.h"
#include"Rect.h"

int main(void)
{
	Shape *shape1 = new Rect(1,3);
	Shape *shape2 = new Circle(8);
	//默认调用父类的calcArea()方法，因为该方法子类未重写
	//在子类同名方法前加入virtual关键字，可以直接调用子类函数，从而实现动态多态
	shape1->calcArea();
	shape2->calcArea();

	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	system("pause");
	return 0;
}