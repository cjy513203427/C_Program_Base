#include"MyArray.h"
#include <string>
#include <stdlib.h>
int main(void)
{
	// Declare Array
	MyArray<int, 5, 6> arr;
	arr.display();
	system("pause");
	return 0;
}