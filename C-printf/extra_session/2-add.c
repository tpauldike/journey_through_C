#include <stdio.h>

char *add(int num1, int num2)
{
        printf("%i + %i = %i\n", num1, num2, num1+num2);
	return ("done!");
}

int main(void)
{
	char *r_val = add(2, 4); //char r_val[] = add(2, 4)
	printf("return value: %s\n", r_val);
        return (0);
}
