#include<iostream>
using namespace std;
#include<stdlib.h>
#include<vector>
#include<list>
#include<map>
#include<string>

int main(void)
{
	list<int> list1;
	list1.push_back(1);
	list1.push_back(2);
	list1.push_back(3);

	//普通带着索引的for无法遍历list

	list<int>::iterator itor = list1.begin();
	for (; itor != list1.end(); itor++)
	{
		cout << *itor << endl;
	}
	cout << "--------------分隔符---------------" << endl;
	map<int, string> m;
	pair<int, string> p1(3, "hello");
	pair<int, string> p2(6, "world");
	m.insert(p1);
	m.insert(p2);

	//cout << m[3] << endl;//访问指定key的value值
	map<int, string>::iterator itor1 = m.begin();
	for (; itor1 != m.end(); itor1++)
	{
		cout << itor1->first<< endl;
		cout << itor1->second << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}