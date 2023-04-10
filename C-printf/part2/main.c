#include "header.h"
#include <stdio.h>

int main(void)
{
	char letter = 'a';
	int r_value, r_value2;
	char name[] = "Topman Paul-Dike";

/* Using the C standard printf() function */
	puts("\nUsing printf()\n---");
	r_value = printf("%c man\n", letter);
	printf("r_value is %d\n", r_value);

	puts("\n-----------------------");
/* Using the user-defined my_printf() function */
	puts("\nUsing my_printf()\n---");
	r_value2 = my_printf("%c man\n", letter);
	printf("r_value2 is %d\n", r_value2);

	return (0);
}
