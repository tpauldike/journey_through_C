#include <stdio.h>

// print numbers 1-10
int main(void)
{
    int num;

    for (num = 1; num <= 10; num++)
    {
	printf("%d ", num);
    }
    putchar('\n');

    return (0);
    /* Anything instruction after return does not execute */
    printf("bye bye\n");
}
