#include "main.h"

/*main program*/ //test file == main.c
int main(void)
{
	addNum(8, 3); // 8 + 3 = 11
	subtractNum(4, 3); // 4 - 3 = 1
	multiplyInt(2, 6); // 2 x 6 = 12
	divideInt(8, 3); // 8 / 3 = 2, remainder 2

	printf("PLD - 2 = %d\n", PLD-2);
	printf("Using macro: 2 + 1 = %d\n", ADDNUM(2, 1));

	return (0);
}
