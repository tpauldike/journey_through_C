#include <stdio.h>

int main(void)
{
	int try_d, try_i;

	puts("Compare %i and %d");
	printf("Enter the same number: ");
	scanf("%i", &try_i);

	printf("Enter a number: ");
	scanf("%d", &try_d);

	printf("%%i scanned the integer as: %d\n", try_i);
	printf("%%d scanned the integer as: %d\n", try_d);


	return (0);
}
