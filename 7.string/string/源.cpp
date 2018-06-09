#include<stdlib.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	cout << "请输入你的名字：" << endl;
	getline(cin, name);
	if (name.empty())
	{
		cout << "此时输入的为空" << endl;
		system("pause");
		return 0;
	}
	if (name == "imooc")
	{
		cout << "你是管理员"<<endl;
	}
	cout << "hello" + name << endl;
	cout << "名字长度是："<<name.size() << endl;
	cout << "第一个字母是:" << name[0] << endl;
	system("pause");
	return 0;
}