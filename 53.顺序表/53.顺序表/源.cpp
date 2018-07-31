#include"List.h"
int main(void)
{
	//3 5 7 2 9 1 8
	int e1 = 3;
	int e2= 5;
	int e3 = 7;
	int e4 = 2;
	int e5 = 9;
	int e6 = 1;
	int e7 = 8;
	int temp = 0;
	List *list1 = new List(10);
	list1->ListInsert(0, &e1);
	list1->ListInsert(1,&e2);
	list1->ListInsert(2, &e3);
	list1->ListInsert(3, &e4);
	list1->ListInsert(4,&e5);
	list1->ListInsert(5, &e6);
	list1->ListInsert(3, &e7);
	list1->ListDelete(0,&temp);
	
	list1->ListTraverse();
	list1->PriorElem(&e4, &temp);
	//list1->NextElem(&e4, &temp);
	cout << "e4的前驱" << temp << endl;
	//cout << "e4的后驱" << temp << endl;
	cout << "#" << temp << endl;
	delete list1;

	system("pause");
	return 0;
}