/* Change the value of num to 100 without doing 'num = 100' */
#include <stdio.h>

int main(void)
{
    int num;
    int *fowl;

    num = 20;
    fowl = &num;

    printf("&num: %p\n", &num);
    printf("fowl: %p\n", fowl);
    putchar('\n');
    printf("value of num: %d\n", num);
    printf("it's just to print the std out: %d\n", *fowl);

	num = 100; //*fowl = 100;
    printf("\nnum became: %d\n", num);

    return (0);
}
