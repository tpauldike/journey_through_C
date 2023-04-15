#include <stdio.h>

int main(void)
{
	char name[] = "Topman Paul-Dike";

	for (int p = 0; p < 16; p++)
	{
		putchar(name[p]);
	}
	putchar('\n');

	puts("%d, %c, %s");
	printf("%%d, %%c, %%s\n");

	return (0);
}
