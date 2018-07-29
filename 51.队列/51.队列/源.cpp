#include"MyQueue.h"
int main(void)
{
	MyQueue *p = new MyQueue(4);
	p->EnQueue(10);
	p->EnQueue(12);
	p->EnQueue(14);
	p->EnQueue(16);
	p->QueueTraverse();
	cout << endl;
	//出队
	int e = 0;
	p->DeQueue(e);
	cout << e << endl;

	p->DeQueue(e);
	cout << e << endl;

	cout << endl;
	p->QueueTraverse();
	//入队
	p->EnQueue(10);
	p->EnQueue(12);
	cout << endl;
	p->QueueTraverse();
	delete p;
	p = NULL;
	system("pause");
	return 0;
}