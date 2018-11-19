#include<iostream>
#include"Array.h"
using namespace std;
int main(void)
{
	Array arr1(10);
	arr1.printInfo()->setLen(5)->printInfo();
	//返回地址和实际地址相同
	arr1.printInfo();
	cout << &arr1 << endl;
	system("pause");
	return 0;
}