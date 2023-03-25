#include <stdio.h>

int main(void)
{
	char ch = 'e';
	char str[9] = "cohort 12";

/* putchar() prints just a character per time */
	putchar('y');
	putchar(ch);
	putchar(115);
	putchar('\n');

/* puts() prints a string and a new line */
	puts("We are learning");
	puts(str);

/* printf() prints formatted data */
	printf("ch: %c\tASCII: %d\n", ch, ch);
	printf("str: %s\n", str);

	return (0);
}
