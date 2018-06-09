#include<iostream>
#include<stdlib.h>

#include<string>
#include "Teacher.h"
using namespace std;





int main()
{
	Teacher t1;
	t1.setName("11");
	t1.setAge(16);
	cout << t1.getName() << " " << t1.getAge() << " " << endl;
	system("pause");
	return 0;
}