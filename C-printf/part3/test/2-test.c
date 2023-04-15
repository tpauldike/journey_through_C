#include <stdio.h>

int main(void)
{
	int n;

	puts("%d\t%o\t%x\t%X\t%i");
	for (n = 0; n <= 20; n++)
		printf("%d\t%o\t%x\t%X\t%i\n", n, n, n, n, n);

	return (0);
}
