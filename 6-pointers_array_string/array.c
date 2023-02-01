#include <stdio.h>

int main(void)
{	
	int j = 10; //4 bytes :: 8 bits == 1 byte
	int array[5] = {1, 2, 3, 4, 5};
	int *point;
	point = &j;

	printf("%d\n", array[0]);
	printf("%p\n", array);
	printf("%p\n", point);

	return (0);
}
