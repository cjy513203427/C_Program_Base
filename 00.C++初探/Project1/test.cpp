#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	cout << "Hello imooc" << endl;  //在此填写我们的开篇Hello imooc
	int x = 0;
	cout << "请输入一个整数" << endl;
	cin >> x;
	cout << oct << x << endl;//8

	cout << dec << x << endl;//10

	cout << hex << x << endl;//16

	cout << "请输入一个布尔值，0或者1"<<endl;
	bool y = false;
	cin >> y;
	cout << boolalpha << y << endl;
	system("pause");
	return 0;
}