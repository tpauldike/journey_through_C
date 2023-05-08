#include <stdio.h> //for printf() and puts()
#include "header.h" //for my_printf() and my_puts()

int main(void)
{
	char letter = 'a';
	int r_value, r_value2;
	int number = 100;
	char name[] = "Topman Paul-Dike";

/* Using the C standard printf() & puts() functions */
	puts("\nUsing printf() and puts()\n---");
	r_value = printf("%s did %c 100%% good job and we had almost %d persons in attendance\n", name, letter, number);
	printf("r_value is %d\n", r_value);

	my_puts("\n--------------------------------------");
/* Using the user-defined my_printf() & my_puts() function */
	my_puts("\nUsing my_printf() and my_puts()\n---");
	r_value2 = my_printf("%s did %c 100%% good job and we had almost %d persons in attendance\n", name, letter, number);
	my_printf("r_value2 is %d\n", r_value2);

	return (0);
}
