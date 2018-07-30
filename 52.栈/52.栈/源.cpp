#include "MyStack.h"

int main(void)
{
	MyStack *pStack = new MyStack(5);
	
	pStack->push('h');//µ×
	pStack->push('e');
	pStack->push('l');
	pStack->push('l');
	pStack->push('o');//¶¥
	pStack->stackTraverse(true);

	char elem = 0;
	pStack->pop(elem);
	cout << endl;
	cout << elem<<endl;
	pStack->stackTraverse(true);
	if (pStack->stackEmpty())
	{
		cout << "¿Õ"<<endl;
	}

	if (pStack->stackFull())
	{
		cout << "Âú" << endl;
	}
	system("pause");
	return 0;
}