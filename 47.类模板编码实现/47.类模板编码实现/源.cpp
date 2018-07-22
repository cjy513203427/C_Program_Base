#include"MyArray.h"
#include <string>
#include <stdlib.h>
int main(void)
{
	MyArray<int, 5, 6> arr;
	arr.display();
	system("pause");
	return 0;
}