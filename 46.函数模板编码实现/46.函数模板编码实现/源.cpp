#include<iostream>
using namespace std;

template<typename T>
void display(T a)
{
	cout << a << endl;
}
//typename和class意义一样
//T和S表示任意类
template<typename T,class S>

void display(T t, S s)
{
	cout << t << endl;
	cout << s << endl;
}

template<typename T, int kSize>
void display(T a)
{
	for (int i = 0; i < kSize; i++)
	{
		cout << a << endl;
	}
}

int main(void)
{
	display<int,6>(10);
	system("pause");
	return 0;
}