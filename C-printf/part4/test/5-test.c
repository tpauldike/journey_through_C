#include <stdio.h>

int recurse(int num);
int main(void)
{
	recurse(123);
	return (0);
}

int recurse(int num)
{
	int n;

	if (num == 0) // num == 123
		return (0);
	else
		n = num / 10; // n = 12

	recurse(n); // recurse(12)
	putchar(num%10 + '0');
	return (0);
}
