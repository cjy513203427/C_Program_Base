#include"Shape.h"
#include"Circle.h"
#include"Rect.h"

int main(void)
{
	Shape shape;
	//没有数据成员，只占1个内存单元用来实例化
	cout << sizeof(shape)<<endl;

	int *p = (int*)&shape;
	//cout << p<<endl;
	cout << *p << endl;
	Circle circle(100);
	//有int数据成员，占4个内存单元
	cout << sizeof(circle)<<endl;

	int *q = (int*)&circle;
	//cout << q << endl;
	//cout << *q << endl;
	q++;//虛函數表指針會佔據前四個內存單元，所以要++，才能找到100
	cout << *q << endl;
	system("pause");
	return 0;
}