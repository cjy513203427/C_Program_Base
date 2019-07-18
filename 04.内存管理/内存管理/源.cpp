#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	int*p = new int[1000];
	if (NULL == p)
	{
		system("pause");
		return 0;
	}
	p[0] = 10;
	p[1] = 20;
	cout << p[0] << "," << p[1] << endl;
	delete []p;
	p = NULL;
	system("pause");
	return 0;
}