#include<iostream>
using namespace std;
#include<stdlib.h>
#include<vector>
#include<list>
#include<map>

int main(void)
{
	vector<int> vec;
	vec.push_back(3);//向量尾部增加一个元素
	vec.push_back(4);
	vec.push_back(5);
	//vec.pop_back();//删除向量中最后一个元素
	//cout << vec.size() << endl;

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	cout << "-----------------------分割线-------------------" << endl;
	//迭代器
	vector<int>::iterator itor = vec.begin();
	//cout << *itor << endl;
	for (; itor != vec.end(); itor++)
	{
		cout << *itor << endl;
	}
	cout << "-----------------------分割线-------------------" << endl;
	cout << vec.front() << endl;//vec的首元素
	cout << vec.back() << endl;//vec.末尾元素
	system("pause");
	return 0;
}