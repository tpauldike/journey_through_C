#include <stdio.h>

int main(void)
{
/* 15, 12, 13, 16, 11 */
	int ages[5] = {15, 12, 13, 16, 11};
	int index;

	for (index = 0; index < 5; index++)
	{
		printf("%i ", ages[index]); //ages[0]
	}
	putchar('\n');

	return (0);
}
