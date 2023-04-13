#include <stdio.h>

void sum2(int num1, int num2);
int main(void)
{
	sum2(2, 3);
	sum2(4, 7);
	sum2(1, 2);

	return (0);
}

void sum2(int num1, int num2)
{
	printf("%d + %d = %d\n", num1, num2, num1+num2);
}
