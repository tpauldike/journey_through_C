#include "main.h"

int powr(int n, int pow)
{
    int i, no = n;

    if (n)
    {
	printf("%d raised to the power of %d is:\n", n, pow);
	printf("%d", n);

	for (i = 1; i < pow; i += 1)
	{
	    n = n * no;
	    printf(" x %d", no);
	}
	printf("\n= %d\n", n);
    }

    return (n);
}
